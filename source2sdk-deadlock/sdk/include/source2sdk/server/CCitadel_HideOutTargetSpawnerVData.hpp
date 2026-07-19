#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x200
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_HideOutTargetSpawnerVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flThinkRate; // 0x28            
            float m_flFirstThink; // 0x2c            
            // metadata: MPropertyStartGroup "Pigeon Gameplay"
            std::int32_t m_flPigeonMaxCount; // 0x30            
            // metadata: MPropertyStartGroup "Ball Gameplay"
            float m_flBallMaxDist; // 0x34            
            float m_flBallGoalThresHold; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // m_BallScored has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallScored;
            char m_BallScored[0xe0]; // 0x40            
            // m_BallSpawned has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallSpawned;
            char m_BallSpawned[0xe0]; // 0x120            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_HideOutTargetSpawnerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_HideOutTargetSpawnerVData) == 0x200);
    };
};
