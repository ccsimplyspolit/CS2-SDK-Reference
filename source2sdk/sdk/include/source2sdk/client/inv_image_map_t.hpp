#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct inv_image_map_t
        {
        public:
            // metadata: MPropertyFriendlyName "Map"
            // metadata: MPropertyLeafChoiceProviderFn
            CUtlString map_name; // 0x0            
            // metadata: MPropertyFriendlyName "Rotation"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "-180 180"
            float map_rotation; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::inv_image_map_t, map_name) == 0x0);
        static_assert(offsetof(source2sdk::client::inv_image_map_t, map_rotation) == 0x8);
        
        static_assert(sizeof(source2sdk::client::inv_image_map_t) == 0x10);
    };
};
