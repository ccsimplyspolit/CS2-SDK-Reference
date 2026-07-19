#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/inv_image_camera_t.hpp"
#include "source2sdk/client/inv_image_clearcolor_t.hpp"
#include "source2sdk/client/inv_image_item_t.hpp"
#include "source2sdk/client/inv_image_light_barn_t.hpp"
#include "source2sdk/client/inv_image_light_fill_t.hpp"
#include "source2sdk/client/inv_image_light_sun_t.hpp"
#include "source2sdk/client/inv_image_map_t.hpp"

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
        // Size: 0xe8
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct inv_image_data_t
        {
        public:
            // metadata: MPropertyFriendlyName "Map"
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_map_t map; // 0x0            
            // metadata: MPropertyFriendlyName "Item"
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_item_t item; // 0x10            
            // metadata: MPropertyFriendlyName "Camera"
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_camera_t camera; // 0x30            
            // metadata: MPropertyFriendlyName "Sun light"
            // metadata: MPropertyDescription "Shadowed."
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_light_sun_t lightsun; // 0x64            
            // metadata: MPropertyFriendlyName "Fill light"
            // metadata: MPropertyDescription "No Shadows."
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_light_fill_t lightfill; // 0x80            
            // metadata: MPropertyFriendlyName "Barn light 0"
            // metadata: MPropertyDescription "Shadowed."
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_light_barn_t light0; // 0x9c            
            // metadata: MPropertyFriendlyName "Barn light 1"
            // metadata: MPropertyDescription "Shadowed."
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_light_barn_t light1; // 0xbc            
            // metadata: MPropertyFriendlyName "Clear Color"
            // metadata: MPropertyDescription
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::inv_image_clearcolor_t clearcolor; // 0xdc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::inv_image_data_t, map) == 0x0);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, item) == 0x10);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, camera) == 0x30);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, lightsun) == 0x64);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, lightfill) == 0x80);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, light0) == 0x9c);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, light1) == 0xbc);
        static_assert(offsetof(source2sdk::client::inv_image_data_t, clearcolor) == 0xdc);
        
        static_assert(sizeof(source2sdk::client::inv_image_data_t) == 0xe8);
    };
};
