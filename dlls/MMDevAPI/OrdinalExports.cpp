#include "pch.h"
#define MMDEVAPI_EXPORT(Name) __pragma(comment(linker, "/export:" #Name "=C:\\WINDOWS\\System32\\MMDevAPI." #Name))
#define MMDEVAPI_EXPORT_ORDINAL(Name, Ordinal) __pragma(comment(linker, "/export:" #Name "=C:\\WINDOWS\\System32\\MMDevAPI." #Name ",@" #Ordinal))
#define MMDEVAPI_EXPORT_ORDINAL_PRIVATE(Name, Ordinal) __pragma(comment(linker, "/export:" #Name "=C:\\WINDOWS\\System32\\MMDevAPI.#" #Ordinal ",@" #Ordinal ",NONAME"))

MMDEVAPI_EXPORT_ORDINAL_PRIVATE(CleanupDeviceAPI, 2)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(InitializeDeviceAPI, 3)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceCreateRegistryPropertyStore, 4)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceGetDeviceEnumerator, 5)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceGetEndpointManager, 6)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetClassFromEndpointId, 7)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetEndpointGuidFromEndpointId, 8)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetSessionIdFromEndpointId, 9)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(RegisterForMediaCallback, 10)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(UnregisterMediaCallback, 11)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GenerateMediaEvent, 12)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(AETraceOutputDebugString, 13)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceGetPolicyConfig, 14)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(FlushDeviceTopologyCache, 15)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetNeverSetAsDefaultProperty, 16)
MMDEVAPI_EXPORT_ORDINAL(ActivateAudioInterfaceAsync, 17)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetEndpointIdFromDeviceInterfaceId, 18)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevFindMmDevProperty, 19)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInterfacePropertyStore, 20)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInterfaceIdFromMMDevice, 21)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInterfaceDataFlow, 22)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetMMDeviceFromInterfaceId, 23)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInterfaceClassGuid, 24)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetMMDeviceIdFromInterfaceId, 25)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInstanceIdFromInterfaceId, 26)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetRelatedInterfaceId, 27)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInterfaceIdFromMMDeviceId, 28)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetInstanceIdFromMMDeviceId, 29)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetEndpointFormFactorFromMMDeviceId, 30)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(mmdDevGetDeviceIdFromPnpInterface, 31)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(GetCategoryPath, 32)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceCreateRegistryPropertyStore2, 33)
MMDEVAPI_EXPORT_ORDINAL_PRIVATE(MMDeviceCreateAudioSystemEffectsPropertyStore, 34)
MMDEVAPI_EXPORT_ORDINAL(DllCanUnloadNow, 35)
MMDEVAPI_EXPORT_ORDINAL(DllGetClassObject, 36)
MMDEVAPI_EXPORT_ORDINAL(DllRegisterServer, 37)
MMDEVAPI_EXPORT_ORDINAL(DllUnregisterServer, 38)