#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Magnataur_Skewer : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float skewer_radius; // 0x580            
            float skewer_speed; // 0x584            
            float tree_radius; // 0x588            
            float tree_hit_damage; // 0x58c            
            float cliff_hit_damage; // 0x590            
            std::int32_t terrain_hit_increase_pct; // 0x594            
            float terrain_hit_cooldown; // 0x598            
            std::int32_t m_nProjectileID; // 0x59c            
            std::int32_t m_nVisibleTargetCount; // 0x5a0            
            uint8_t _pad05a4[0x4]; // 0x5a4
            // m_hEnemiesSkewered has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemiesSkewered;
            char m_hEnemiesSkewered[0x18]; // 0x5a8            
            source2sdk::entity2::GameTime_t m_flLastTerrainObstructionHitTime; // 0x5c0            
            std::int32_t m_nTargetsHit; // 0x5c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Magnataur_Skewer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Magnataur_Skewer) == 0x5c8);
    };
};
