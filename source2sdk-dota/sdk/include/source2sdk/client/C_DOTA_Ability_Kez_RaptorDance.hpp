#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Ability_Kez_BaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Kez_RaptorDance : public source2sdk::client::C_DOTA_Ability_Kez_BaseAbility
        {
        public:
            float radius; // 0x6b0            
            std::int32_t invulnerable; // 0x6b4            
            std::int32_t strikes; // 0x6b8            
            float strike_interval; // 0x6bc            
            std::int32_t m_nStrikesLeft; // 0x6c0            
            bool m_bChannelFinished; // 0x6c4            
            bool m_bHitAnyTarget; // 0x6c5            
            uint8_t _pad06c6[0x2]; // 0x6c6
            source2sdk::entity2::GameTime_t m_NextStrikeTime; // 0x6c8            
            source2sdk::client::ParticleIndex_t m_nChannelParticle; // 0x6cc            
            uint8_t _pad06d0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Kez_RaptorDance because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Kez_RaptorDance) == 0x6e8);
    };
};
