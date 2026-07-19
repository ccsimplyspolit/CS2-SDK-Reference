#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1588
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bLeaping"
        // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_HornetLeap : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x2]; // 0xf70
            // metadata: MNetworkEnable
            bool m_bLeaping; // 0xf72            
            uint8_t _pad0f73[0x1]; // 0xf73
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLeapStartTime; // 0xf74            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0xf78            
            uint8_t _pad0f7c[0x604]; // 0xf7c
            source2sdk::client::ParticleIndex_t m_TrailFX; // 0x1580            
            uint8_t _pad1584[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HornetLeap) == 0x1588);
    };
};
