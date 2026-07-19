#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x720
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Puck_IllusoryOrb : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x6a8            
            uint8_t _pad06ac[0x4]; // 0x6ac
            source2sdk::client::CountdownTimer m_ViewerTimer; // 0x6b0            
            float m_fTimeRemaining; // 0x6c8            
            float m_fElapsedTime; // 0x6cc            
            VectorWS m_vVectorTargetEndpoint; // 0x6d0            
            Vector m_vCurveAcceleration; // 0x6dc            
            VectorWS m_vStartPosition; // 0x6e8            
            float orb_vision; // 0x6f4            
            float max_distance; // 0x6f8            
            float vision_duration; // 0x6fc            
            std::int32_t damage; // 0x700            
            float increase_per_sec; // 0x704            
            float damage_interval; // 0x708            
            float radius; // 0x70c            
            float damage_over_time_pct; // 0x710            
            bool m_bIsAltCastState; // 0x714            
            uint8_t _pad0715[0x3]; // 0x715
            source2sdk::client::ParticleIndex_t m_nCurvePathPreviewFXIndex; // 0x718            
            uint8_t _pad071c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Puck_IllusoryOrb) == 0x720);
    };
};
