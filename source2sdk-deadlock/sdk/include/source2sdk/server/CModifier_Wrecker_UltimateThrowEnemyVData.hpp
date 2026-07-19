#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"

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
        // Size: 0x9f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Wrecker_UltimateThrowEnemyVData : public source2sdk::server::CCitadel_Modifier_StunnedVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_EnemyHeroStasisEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyHeroStasisEffect;
            char m_EnemyHeroStasisEffect[0xe0]; // 0x830            
            // m_EnemyHeroGrabEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyHeroGrabEffect;
            char m_EnemyHeroGrabEffect[0xe0]; // 0x910            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Wrecker_UltimateThrowEnemyVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Wrecker_UltimateThrowEnemyVData) == 0x9f0);
    };
};
