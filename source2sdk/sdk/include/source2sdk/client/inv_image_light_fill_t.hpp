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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x1c
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct inv_image_light_fill_t
        {
        public:
            // metadata: MPropertyFriendlyName "Color"
            // metadata: MPropertyAttributeEditor "VectorColor()"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            Vector color; // 0x0            
            // metadata: MPropertyFriendlyName "Angle"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            QAngle angle; // 0xc            
            // metadata: MPropertyFriendlyName "Brightness"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "0 10"
            float brightness; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::inv_image_light_fill_t, color) == 0x0);
        static_assert(offsetof(source2sdk::client::inv_image_light_fill_t, angle) == 0xc);
        static_assert(offsetof(source2sdk::client::inv_image_light_fill_t, brightness) == 0x18);
        
        static_assert(sizeof(source2sdk::client::inv_image_light_fill_t) == 0x1c);
    };
};
