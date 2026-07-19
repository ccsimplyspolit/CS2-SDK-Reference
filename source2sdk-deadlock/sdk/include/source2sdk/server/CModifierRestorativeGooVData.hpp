#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0xa58
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierRestorativeGooVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_RestorativeGooEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooEndParticle;
            char m_RestorativeGooEndParticle[0xe0]; // 0x750            
            // m_ModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_ModelName;
            char m_ModelName[0xe0]; // 0x830            
            // m_SelfCubeModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_SelfCubeModelName;
            char m_SelfCubeModelName[0xe0]; // 0x910            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BreakoutProgressBarModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BreakoutProgressBarModifier;
            char m_BreakoutProgressBarModifier[0x10]; // 0x9f0            
            // m_PostCubeBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PostCubeBuffModifier;
            char m_PostCubeBuffModifier[0x10]; // 0xa00            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_NonTargetLoopingSound; // 0xa10            
            CSoundEventName m_TargetLoopingSound; // 0xa20            
            CSoundEventName m_LightMeleeImpact; // 0xa30            
            CSoundEventName m_HeavyMeleeImpact; // 0xa40            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flBreakoutProectionTime; // 0xa50            
            uint8_t _pad0a54[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierRestorativeGooVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierRestorativeGooVData) == 0xa58);
    };
};
