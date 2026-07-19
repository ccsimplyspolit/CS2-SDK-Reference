#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"

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
        // Size: 0x15d8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int16 m_nAmmoToBeConsumedForChannel"
        // static metadata: MNetworkVarNames "bool m_bForceFiring"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_AltWeapon : public source2sdk::client::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad1430[0x1a0]; // 0x1430
            // metadata: MNetworkEnable
            std::int16_t m_nAmmoToBeConsumedForChannel; // 0x15d0            
            // metadata: MNetworkEnable
            bool m_bForceFiring; // 0x15d2            
            uint8_t _pad15d3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_AltWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_AltWeapon) == 0x15d8);
    };
};
