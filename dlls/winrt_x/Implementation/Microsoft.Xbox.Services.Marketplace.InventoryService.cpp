#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.cpp"

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

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> InventoryService::GetInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::ConsumeInventoryItemResult> InventoryService::ConsumeInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId)
    {
        throw hresult_not_implemented();
    }
}
