#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"

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
        // Size: 0x1448
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CNPC_Escort_VData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyDescription "Particle that plays when spawned."
            // m_strSpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSpawnParticle;
            char m_strSpawnParticle[0xe0]; // 0x1348            
            // metadata: MPropertyStartGroup "Gameplay"
            // metadata: MPropertyDescription "How far to search for friendly players for deploying our shield and slow walking. Only applies if players are behind"
            float m_flEscortFriendlyHeroSlowMoveSearchRadius; // 0x1428            
            // metadata: MPropertyDescription "How far to search for friendly players for deploying our shield and fast walking"
            float m_flEscortFriendlyHeroFastMoveSearchRadius; // 0x142c            
            // metadata: MPropertyDescription "Stop walking when we detect an objective this far away."
            float m_flEscortEnemyObjectiveSearchRadius; // 0x1430            
            // metadata: MPropertyDescription "Disable fast walk if Enemies are within this range"
            float m_flEscortEnemySlowWalkRadius; // 0x1434            
            // metadata: MPropertyDescription "How close is close enough for pathfinding to a node."
            float m_flCloseEnoughToNode; // 0x1438            
            // metadata: MPropertyDescription "When we detect friendly players in front of us, apply this scale to our walking speed so we'll catch up to them."
            float m_flCatchUpSpeed; // 0x143c            
            // metadata: MPropertyDescription "How long after destroying 3 T1s and T2s does it take for the Vanguard to activate and start walking."
            float m_flActivateDelay; // 0x1440            
            uint8_t _pad1444[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Escort_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Escort_VData) == 0x1448);
    };
};
