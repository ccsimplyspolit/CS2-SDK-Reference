#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/InventoryNodeType_t.hpp"
#include "source2sdk/client/inv_image_data_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xf8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOutlinerDetailExpr
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataPreviewWidget
        // static metadata: MVDataHideNodeClass
        // static metadata: MVDataOutlinerLeafNameFn
        // static metadata: MVDataOutlinerLeafColorFn
        // static metadata: MVDataOutlinerLeafDetailFn
        // static metadata: MVDataVirtualNodeFactoryFn
        // static metadata: MVDataPreLoadFixupFn
        // static metadata: MVDataPostSaveFixupFn
        #pragma pack(push, 1)
        class CInventoryImageData
        {
        public:
            // metadata: MPropertySuppressField
            source2sdk::client::InventoryNodeType_t m_nNodeType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyFriendlyName "Item Name"
            // metadata: MPropertyReadOnly
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertySuppressExpr "name == """
            CUtlString name; // 0x8            
            // metadata: MPropertyFriendlyName "Inventory Image Data"
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_data_t inventory_image_data; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CInventoryImageData, m_nNodeType) == 0x0);
        static_assert(offsetof(source2sdk::client::CInventoryImageData, name) == 0x8);
        static_assert(offsetof(source2sdk::client::CInventoryImageData, inventory_image_data) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CInventoryImageData) == 0xf8);
    };
};
