#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSoundPatch;
    };
};

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
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Puck_IllusoryOrb : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iProjectile; // 0x580            
            uint8_t _pad0584[0x4]; // 0x584
            source2sdk::server::CountdownTimer m_ViewerTimer; // 0x588            
            float m_fTimeRemaining; // 0x5a0            
            float m_fElapsedTime; // 0x5a4            
            VectorWS m_vVectorTargetEndpoint; // 0x5a8            
            Vector m_vCurveAcceleration; // 0x5b4            
            VectorWS m_vStartPosition; // 0x5c0            
            float orb_vision; // 0x5cc            
            float max_distance; // 0x5d0            
            float vision_duration; // 0x5d4            
            std::int32_t damage; // 0x5d8            
            float increase_per_sec; // 0x5dc            
            float damage_interval; // 0x5e0            
            float radius; // 0x5e4            
            float damage_over_time_pct; // 0x5e8            
            bool m_bIsAltCastState; // 0x5ec            
            uint8_t _pad05ed[0x3]; // 0x5ed
            source2sdk::client::CSoundPatch* m_pSoundPatch; // 0x5f0            
            uint8_t _pad05f8[0x14]; // 0x5f8
            source2sdk::client::ParticleIndex_t m_nCurvePathFXIndex; // 0x60c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Puck_IllusoryOrb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Puck_IllusoryOrb) == 0x610);
    };
};
