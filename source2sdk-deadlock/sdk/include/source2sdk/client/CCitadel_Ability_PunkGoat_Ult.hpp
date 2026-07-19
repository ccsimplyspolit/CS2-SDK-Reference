#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x1878
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nSlamTravelType"
        // static metadata: MNetworkVarNames "float m_flDistanceToTravel"
        // static metadata: MNetworkVarNames "bool m_bHoldingAbilityButton"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Ult : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x14]; // 0x11d8
            // metadata: MNetworkEnable
            std::uint8_t m_nSlamTravelType; // 0x11ec            
            uint8_t _pad11ed[0x3]; // 0x11ed
            // metadata: MNetworkEnable
            float m_flDistanceToTravel; // 0x11f0            
            // metadata: MNetworkEnable
            bool m_bHoldingAbilityButton; // 0x11f4            
            uint8_t _pad11f5[0x683];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Ult) == 0x1878);
    };
};
