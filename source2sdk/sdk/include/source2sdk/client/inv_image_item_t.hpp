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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct inv_image_item_t
        {
        public:
            // metadata: MPropertyFriendlyName "Position"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            Vector position; // 0x0            
            // metadata: MPropertyFriendlyName "Angle"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            QAngle angle; // 0xc            
            // metadata: MPropertyFriendlyName "Pose Sequence"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            CUtlString pose_sequence; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::inv_image_item_t, position) == 0x0);
        static_assert(offsetof(source2sdk::client::inv_image_item_t, angle) == 0xc);
        static_assert(offsetof(source2sdk::client::inv_image_item_t, pose_sequence) == 0x18);
        
        static_assert(sizeof(source2sdk::client::inv_image_item_t) == 0x20);
    };
};
