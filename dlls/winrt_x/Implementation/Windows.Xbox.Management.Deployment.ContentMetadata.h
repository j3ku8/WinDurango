#pragma once
#include "Windows.Xbox.Management.Deployment.ContentMetadata.g.h"

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
//////////static_assert(false, "This file is generated by a tool and will be overwritten. Open this error and view the comment for assistance.");

namespace winrt::Windows::Xbox::Management::Deployment::implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata>
    {
        ContentMetadata() = default;

        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames);
        ContentMetadata(winrt::Windows::Xbox::Management::Deployment::ContentMetadataInitData const& initData, winrt::guid const& siblingId, winrt::guid const& variantId, winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> const& relatedMedia, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& relatedMediaFamilyNames, winrt::guid const& gameHubId, bool isGameHub);
        hstring Name();
        winrt::guid ProductId();
        winrt::Windows::Foundation::Uri LogoUri();
        winrt::Windows::Foundation::Uri SmallLogoUri();
        winrt::Windows::Foundation::Uri WideLogoUri();
        hstring DownloadUri();
        winrt::Windows::Xbox::Management::Deployment::CatalogType CatalogType();
        uint64_t Size();
        winrt::Windows::Xbox::Management::Deployment::MetadataSource MetadataSource();
        uint32_t TitleId();
        winrt::Windows::Foundation::Collections::IVectorView<winrt::guid> RelatedMedia();
        winrt::Windows::Xbox::ApplicationModel::State::Internal::GameAttributes Attributes();
        winrt::Windows::Foundation::Collections::IVectorView<hstring> RelatedMediaFamilyNames();
        hstring Ratings();
        winrt::guid SiblingId();
        winrt::guid VariantId();
        winrt::guid GameHubId();
        bool IsGameHub();
    };
}
namespace winrt::Windows::Xbox::Management::Deployment::factory_implementation
{
    struct ContentMetadata : ContentMetadataT<ContentMetadata, implementation::ContentMetadata>
    {
    };
}
