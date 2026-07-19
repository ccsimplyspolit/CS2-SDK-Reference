#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseGrenade.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CBaseCSGrenadeProjectile : public source2sdk::server::CBaseGrenade
        {
        public:
            VectorWS m_vInitialPosition; // 0x9f0            
            Vector m_vInitialVelocity; // 0x9fc            
            std::int32_t m_nBounces; // 0xa08            
            uint8_t _pad0a0c[0x4]; // 0xa0c
            // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
            char m_nExplodeEffectIndex[0x8]; // 0xa10            
            std::int32_t m_nExplodeEffectTickBegin; // 0xa18            
            VectorWS m_vecExplodeEffectOrigin; // 0xa1c            
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0xa28            
            std::uint8_t m_unOGSExtraFlags; // 0xa2c            
            bool m_bDetonationRecorded; // 0xa2d            
            std::uint16_t m_nItemIndex; // 0xa2e            
            VectorWS m_vecOriginalSpawnLocation; // 0xa30            
            source2sdk::entity2::GameTime_t m_flLastBounceSoundTime; // 0xa3c            
            RotationVector m_vecGrenadeSpin; // 0xa40            
            Vector m_vecLastHitSurfaceNormal; // 0xa4c            
            std::int32_t m_nTicksAtZeroVelocity; // 0xa58            
            bool m_bHasEverHitEnemy; // 0xa5c            
            uint8_t _pad0a5d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCSGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCSGrenadeProjectile) == 0xa60);
    };
};
