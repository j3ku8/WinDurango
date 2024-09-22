//// ReSharper disable CppInconsistentNaming
//// ReSharper disable CppParameterMayBeConst
//// ReSharper disable CppClangTidyClangDiagnosticMicrosoftCast
//// ReSharper disable CppClangTidyClangDiagnosticUndefinedReinterpretCast
//// ReSharper disable CppClangTidyClangDiagnosticShadow
//// ReSharper disable CppClangTidyClangDiagnosticCastFunctionTypeStrict
#include "pch.h"
#include "kernelx.h"
#include "XPEB.h"

//
using namespace Microsoft::WRL;

typedef HRESULT(*DllGetActivationFactoryFunc) (HSTRING, IActivationFactory**);

DllGetActivationFactoryFunc pDllGetActivationFactory = nullptr;
HMODULE hModule;
SYSTEM_BASIC_INFORMATION systemBasicInfo;


HRESULT(WINAPI* TrueRoGetActivationFactory)(HSTRING classId, REFIID iid, void** factory) = RoGetActivationFactory;

HRESULT WINAPI RoGetActivationFactory_Hook(HSTRING classId, REFIID iid, void** factory)
{
	auto hr = TrueRoGetActivationFactory(classId, iid, factory);

	const std::wstring message = std::wstring(L"classId: ") +
		WindowsGetStringRawBuffer(classId, nullptr);
=======
    const wchar_t* classIdStr = WindowsGetStringRawBuffer(classId, nullptr);
    int result = pRoGetActivationFactory(classId, iid, factory);

    // Failed, redirect to our winrt component
    if (result < 0) {
        debug_printf("[DEBUG] Forwarding activationFactory of %ls to our dll!", classIdStr);

        /*// That means we redirect this to already existing dll which has been implemented by Microsoft
        if (wcscmp(classIdStr, L"Windows.Xbox.Media.GameTransportControls") == 0) {
            HMODULE gtcLib = LoadLibraryEx(L"gametransportcontrols.dll", NULL, 0);
            debug_printf("[DEBUG] gtcLib: %i\n", gtcLib);
            if (!gtcLib)
                return result;

            FuncDllGetActivationFactory gtcLibActivationFactory = (FuncDllGetActivationFactory)GetProcAddress(gtcLib, "DllGetActivationFactory");
            debug_printf("[DEBUG] gtcLibActivationFactory: %i\n", gtcLibActivationFactory);

            if (!gtcLibActivationFactory)
                return result;

            Microsoft::WRL::ComPtr<IActivationFactory> _factory;
            result = gtcLibActivationFactory(classId, (void**)_factory.GetAddressOf());

            HRESULT returnvalue = _factory.CopyTo(iid, factory);

            if (returnvalue < 0)
                return result;

            return returnvalue;
        }*/
        // Checks if we initalized pointer to our DllGetActivationFactory
        if (!pDllGetActivationFactory) {
            HMODULE winrtLib = LoadLibraryA("Windows_Xbox_Achievement.dll");
            debug_printf("[DEBUG] winrtLib: %i\n", winrtLib);
            if (!winrtLib)
                return result;

            pDllGetActivationFactory = (FuncDllGetActivationFactory)GetProcAddress(winrtLib, "DllGetActivationFactory");
            debug_printf("[DEBUG] pDllGetActivationFactory: %i\n", pDllGetActivationFactory);

            if (!pDllGetActivationFactory)
                return result;
        }

        result = pDllGetActivationFactory(classId, factory);
        
        if (result < 0)
            return result;

        return result;
    }
>>>>>>> Stashed changes

	if (FAILED(hr))
	{
		auto library = LoadPackagedLibrary(L"winrt_x.dll", 0);

		if (!library) library = LoadLibraryW(L"winrt_x.dll");

		if (!library) return hr;

		auto error = GetLastError();

		pDllGetActivationFactory = reinterpret_cast<DllGetActivationFactoryFunc>
			(GetProcAddress(library, "DllGetActivationFactory"));

		if (!pDllGetActivationFactory)
			return hr;

		ComPtr<IActivationFactory> _factory;

		hr = pDllGetActivationFactory(classId, _factory.GetAddressOf());

		if (FAILED(hr)) return hr;

		return _factory.CopyTo(iid, factory);
	}

	return hr;
}

LPTOP_LEVEL_EXCEPTION_FILTER RtlSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
	return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}
/// 100% the same as the original code besides the added detour code - VodkaDoc
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	BOOL isinit;
	ANSI_STRING DestinationString;
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		DetourRestoreAfterWith();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&reinterpret_cast<PVOID&>(TrueRoGetActivationFactory), RoGetActivationFactory_Hook);
		DetourTransactionCommit();

		if (NtQuerySystemInformation(SystemBasicInformation, &systemBasicInfo, 0x40u, 0i64) >= 0)
		{
			_XPEB* peb = (_XPEB*)NtCurrentPeb(); // Cast NtCurrentPeb to your custom _XPEB structure
			RTL_USER_PROCESS_PARAMETERS* processParams = (RTL_USER_PROCESS_PARAMETERS*)peb->ProcessParameters; // Cast ProcessParameters
			if (RtlUnicodeStringToAnsiString(&DestinationString, &processParams->CommandLine, 1u) < 0)
			{
				DestinationString.Length = 0i64;
				DestinationString.Buffer = 0i64;
			}
			RtlSetUnhandledExceptionFilter(UnhandledExceptionFilter);
		}
		else
		{
			isinit = false;
		}
		hModule = hinstDLL;
		//ConfigureLocaleSettings(); //Incomplete
	}
	else
	{
		isinit = true;
		if (!fdwReason == DLL_PROCESS_DETACH)
		{
			DetourTransactionBegin();
			DetourUpdateThread(GetCurrentThread());
			DetourDetach(&reinterpret_cast<PVOID&>(TrueRoGetActivationFactory), RoGetActivationFactory_Hook);
			DetourTransactionCommit();
			//CleanupResources(hinstDLL, fdwReason, lpReserved); Incomplete
		}
	}
	return isinit;
}