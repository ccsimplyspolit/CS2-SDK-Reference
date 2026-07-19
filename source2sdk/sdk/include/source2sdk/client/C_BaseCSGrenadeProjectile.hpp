#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseGrenade.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1260
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_BaseCSGrenadeProjectile : public source2sdk::client::C_BaseGrenade
        {
        public:
            VectorWS m_vInitialPosition; // 0x11c8            
            Vector m_vInitialVelocity; // 0x11d4            
            std::int32_t m_nBounces; // 0x11e0            
            uint8_t _pad11e4[0x4]; // 0x11e4
            // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
            char m_nExplodeEffectIndex[0x8]; // 0x11e8            
            std::int32_t m_nExplodeEffectTickBegin; // 0x11f0            
            VectorWS m_vecExplodeEffectOrigin; // 0x11f4            
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0x1200            
            Vector vecLastTrailLinePos; // 0x1204            
            source2sdk::entity2::GameTime_t flNextTrailLineTime; // 0x1210            
            bool m_bExplodeEffectBegan; // 0x1214            
            bool m_bCanCreateGrenadeTrail; // 0x1215            
            uint8_t _pad1216[0x2]; // 0x1216
            source2sdk::client::ParticleIndex_t m_nSnapshotTrajectoryEffectIndex; // 0x1218            
            uint8_t _pad121c[0x4]; // 0x121c
            // m_hSnapshotTrajectoryParticleSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshotTrajectoryParticleSnapshot;
            char m_hSnapshotTrajectoryParticleSnapshot[0x8]; // 0x1220            
            // m_arrTrajectoryTrailPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector> m_arrTrajectoryTrailPoints;
            char m_arrTrajectoryTrailPoints[0x18]; // 0x1228            
            // m_arrTrajectoryTrailPointCreationTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_arrTrajectoryTrailPointCreationTimes;
            char m_arrTrajectoryTrailPointCreationTimes[0x18]; // 0x1240            
            float m_flTrajectoryTrailEffectCreationTime; // 0x1258            
            uint8_t _pad125c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseCSGrenadeProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseCSGrenadeProjectile) == 0x1260);
    };
};
