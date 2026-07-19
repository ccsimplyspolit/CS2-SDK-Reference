#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1618
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nSlamTravelType"
        // static metadata: MNetworkVarNames "float m_flDistanceToTravel"
        // static metadata: MNetworkVarNames "bool m_bHoldingAbilityButton"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Ult : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nBatChargingFX; // 0xf70            
            uint8_t _pad0f74[0x14]; // 0xf74
            // metadata: MNetworkEnable
            std::uint8_t m_nSlamTravelType; // 0xf88            
            uint8_t _pad0f89[0x3]; // 0xf89
            // metadata: MNetworkEnable
            float m_flDistanceToTravel; // 0xf8c            
            // metadata: MNetworkEnable
            bool m_bHoldingAbilityButton; // 0xf90            
            bool m_bFirstFrameGoingDown; // 0xf91            
            uint8_t _pad0f92[0x686];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PunkGoat_Ult) == 0x1618);
    };
};
