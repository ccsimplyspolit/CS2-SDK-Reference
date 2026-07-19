#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x640
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Dawnbreaker_Celestial_Hammer : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nProjectileIndex; // 0x580            
            std::int32_t m_nReturnProjectileID; // 0x584            
            VectorWS m_vEndLocation; // 0x588            
            float m_fZCoord; // 0x594            
            VectorWS m_vLastTrailThinkerLocation; // 0x598            
            bool m_bFlareDone; // 0x5a4            
            bool m_bStartedCatchAnimation; // 0x5a5            
            bool m_bIsReturning; // 0x5a6            
            uint8_t _pad05a7[0x1]; // 0x5a7
            // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hReturnHits;
            char m_hReturnHits[0x18]; // 0x5a8            
            // m_hAoEHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAoEHits;
            char m_hAoEHits[0x18]; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5d8            
            source2sdk::client::ParticleIndex_t m_nFXIndexC; // 0x5dc            
            source2sdk::client::ParticleIndex_t m_nFXHammerReturnIndex; // 0x5e0            
            source2sdk::client::ParticleIndex_t m_nFXHammerProjectileIndex; // 0x5e4            
            source2sdk::client::ParticleIndex_t m_nFXHeroSolarGuardianTrailIndex; // 0x5e8            
            // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hThinker;
            char m_hThinker[0x4]; // 0x5ec            
            float projectile_speed; // 0x5f0            
            float projectile_radius; // 0x5f4            
            float hammer_damage; // 0x5f8            
            float hammer_aoe_radius; // 0x5fc            
            float flare_radius; // 0x600            
            float fire_trail_health_regen; // 0x604            
            bool bHasStartedBurning; // 0x608            
            uint8_t _pad0609[0x3]; // 0x609
            float flare_debuff_duration; // 0x60c            
            std::int32_t return_anim_distance_threshold; // 0x610            
            float range; // 0x614            
            uint8_t _pad0618[0x28];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Dawnbreaker_Celestial_Hammer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Dawnbreaker_Celestial_Hammer) == 0x640);
    };
};
