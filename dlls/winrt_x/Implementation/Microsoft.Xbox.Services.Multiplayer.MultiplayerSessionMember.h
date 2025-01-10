#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.h"

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
////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMember : MultiplayerSessionMemberT<MultiplayerSessionMember>
    {
        MultiplayerSessionMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring MemberCustomConstantsJson();
        hstring SecureDeviceAddressBase64();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> Roles();
        hstring MemberCustomPropertiesJson();
        hstring Gamertag();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus Status();
        bool IsTurnAvailable();
        bool IsCurrentUser();
        bool InitializeRequested();
        hstring MatchmakingResultServerMeasurementsJson();
        hstring MemberServerMeasurementsJson();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MembersInGroup();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> MemberMeasurements();
        hstring DeviceToken();
        winrt::Microsoft::Xbox::Services::Multiplayer::NetworkAddressTranslationSetting Nat();
        uint32_t ActiveTitleId();
        uint32_t InitializationEpisode();
        winrt::Windows::Foundation::DateTime JoinTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure InitializationFailureCause();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TournamentTeamSessionRef();
        winrt::Windows::Foundation::Collections::IVector<hstring> Groups();
        void Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IVector<hstring> Encounters();
        void Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> Results();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus ArbitrationStatus();
    };
}
