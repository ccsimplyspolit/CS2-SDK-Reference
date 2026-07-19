#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Grimstroke_DarkArtistry : public source2sdk::server::CDOTABaseAbility
        {
        public:
            Vector m_vCastDir; // 0x580            
            VectorWS m_vVectorTargetEndpoint; // 0x58c            
            VectorWS m_vStartLoc; // 0x598            
            VectorWS m_vCursorPosition; // 0x5a4            
            Vector m_vVectorCastTargetDirection; // 0x5b0            
            float m_fTimeRemaining; // 0x5bc            
            std::int32_t vector_distance_to_start_force_turning; // 0x5c0            
            float vector_acceptable_radian_to_snap_velocity; // 0x5c4            
            std::int32_t vector_deg_turn_max; // 0x5c8            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x5cc            
            float m_fTotalTime; // 0x5d0            
            std::int32_t m_nProjectileID; // 0x5d4            
            Vector m_vProjectileDir; // 0x5d8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5e4            
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x5e8            
            uint8_t _pad05ec[0x4]; // 0x5ec
            // m_hTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTargetsHit;
            char m_hTargetsHit[0x18]; // 0x5f0            
            std::int32_t m_nTargetsHit; // 0x608            
            std::int32_t m_nTargetHeroesHit; // 0x60c            
            std::int32_t m_nRealHeroesHit; // 0x610            
            std::int32_t m_nVisibleHeroesHit; // 0x614            
            float m_fDmgMultiplierTalent; // 0x618            
            bool m_bIsAltCastState; // 0x61c            
            uint8_t _pad061d[0x17]; // 0x61d
            float projectile_speed; // 0x634            
            float slow_duration; // 0x638            
            float start_radius; // 0x63c            
            float end_radius; // 0x640            
            float damage; // 0x644            
            float bonus_damage_per_hero; // 0x648            
            float bonus_damage_per_creep; // 0x64c            
            float vector_deg_turn_divisor; // 0x650            
            float vision_duration; // 0x654            
            uint8_t _pad0658[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Grimstroke_DarkArtistry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Grimstroke_DarkArtistry) == 0x670);
    };
};
