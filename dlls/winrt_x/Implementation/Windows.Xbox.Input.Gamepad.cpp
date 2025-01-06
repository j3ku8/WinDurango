#include "pch.h"
#include "Windows.Xbox.Input.Gamepad.h"
#include "Windows.Xbox.Input.Gamepad.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.
//static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Input::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Input::IGamepad> Gamepad::Gamepads()
    {
        return winrt::single_threaded_vector<IGamepad>( ).GetView( );;
    }
    winrt::event_token Gamepad::GamepadAdded(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadAddedEventArgs> const& handler)
    {
        return {};
    }
    void Gamepad::GamepadAdded(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Gamepad::GamepadRemoved(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Input::GamepadRemovedEventArgs> const& handler)
    {
        return {};
    }
    void Gamepad::GamepadRemoved(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    uint64_t Gamepad::Id()
    {
        throw hresult_not_implemented();
    }
    hstring Gamepad::Type()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User Gamepad::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::INavigationReading Gamepad::GetNavigationReading()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::RawNavigationReading Gamepad::GetRawNavigationReading()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Gamepad::NavigationReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::NavigationController, winrt::Windows::Xbox::Input::INavigationReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::NavigationReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    void Gamepad::SetVibration(winrt::Windows::Xbox::Input::GamepadVibration const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::IGamepadReading Gamepad::GetCurrentReading()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Input::RawGamepadReading Gamepad::GetRawCurrentReading()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Gamepad::ReadingChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Input::Gamepad, winrt::Windows::Xbox::Input::IGamepadReadingChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Gamepad::ReadingChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool Gamepad::IsTrusted()
    {
        throw hresult_not_implemented();
    }
}
