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
        // Size: 0x1100
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
        // static metadata: MNetworkVarNames "bool m_bAttackParried"
        // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_MeleeParry : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nActiveFX; // 0xf70            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParryStartTime; // 0xf74            
            // metadata: MNetworkEnable
            bool m_bAttackParried; // 0xf78            
            uint8_t _pad0f79[0x3]; // 0xf79
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flParrySuccessEndTime; // 0xf7c            
            uint8_t _pad0f80[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_MeleeParry) == 0x1100);
    };
};
