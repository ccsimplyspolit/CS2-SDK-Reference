#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_EconItemView;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xc8
        #pragma pack(push, 1)
        struct CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t
        {
        public:
            source2sdk::client::C_EconItemView* pItem; // 0x0            
            std::uint16_t team; // 0x8            
            std::uint16_t slot; // 0xa            
            uint8_t _pad000c[0xbc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t, pItem) == 0x0);
        static_assert(offsetof(source2sdk::client::CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t, team) == 0x8);
        static_assert(offsetof(source2sdk::client::CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t, slot) == 0xa);
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController_InventoryServices_NetworkedLoadoutSlot_t) == 0xc8);
    };
};
