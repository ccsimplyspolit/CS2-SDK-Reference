#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Standard-layout class: false
        // Size: 0x13e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nWeaponPower"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_WeaponEater : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x200]; // 0x11d8
            // metadata: MNetworkEnable
            std::int32_t m_nWeaponPower; // 0x13d8            
            uint8_t _pad13dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_WeaponEater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_WeaponEater) == 0x13e0);
    };
};
