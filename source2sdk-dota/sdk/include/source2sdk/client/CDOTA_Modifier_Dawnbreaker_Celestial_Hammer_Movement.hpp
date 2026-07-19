#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nProjectileID; // 0x1a58            
            std::int32_t projectile_speed; // 0x1a5c            
            std::int32_t travel_speed_pct; // 0x1a60            
            std::int32_t m_nMaxRange; // 0x1a64            
            VectorWS m_vStartPoint; // 0x1a68            
            VectorWS m_vLastTrailThinkerLocation; // 0x1a74            
            VectorWS m_vEndPointShard; // 0x1a80            
            source2sdk::client::ParticleIndex_t m_nStatusFXIndex; // 0x1a8c            
            float flare_radius; // 0x1a90            
            bool bHasStartedBurning; // 0x1a94            
            uint8_t _pad1a95[0x3]; // 0x1a95
            float flare_debuff_duration; // 0x1a98            
            float fire_trail_health_regen; // 0x1a9c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Celestial_Hammer_Movement) == 0x1aa0);
    };
};
