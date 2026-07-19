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
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct inv_image_camera_t
        {
        public:
            // metadata: MPropertyFriendlyName "Angle"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            QAngle angle; // 0x0            
            // metadata: MPropertyFriendlyName "FOV"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "0 360"
            float fov; // 0xc            
            // metadata: MPropertyFriendlyName "Z Near"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "0 1000"
            float znear; // 0x10            
            // metadata: MPropertyFriendlyName "Z Far"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "0 1000"
            float zfar; // 0x14            
            // metadata: MPropertyFriendlyName "Target"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            Vector target; // 0x18            
            // metadata: MPropertyFriendlyName "Target Nudge"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            Vector target_nudge; // 0x24            
            // metadata: MPropertyFriendlyName "Orbit Distance"
            // metadata: MCustomFGDMetadata "{ reset_to_default_icon = true }"
            // metadata: MPropertyAttributeRange "0 1000"
            float orbit_distance; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, angle) == 0x0);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, fov) == 0xc);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, znear) == 0x10);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, zfar) == 0x14);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, target) == 0x18);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, target_nudge) == 0x24);
        static_assert(offsetof(source2sdk::client::inv_image_camera_t, orbit_distance) == 0x30);
        
        static_assert(sizeof(source2sdk::client::inv_image_camera_t) == 0x34);
    };
};
