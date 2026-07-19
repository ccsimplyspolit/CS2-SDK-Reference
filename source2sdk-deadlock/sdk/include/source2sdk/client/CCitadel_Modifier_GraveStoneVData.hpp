#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
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
        // Size: 0xa78
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_GraveStoneVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_GravestoneParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GravestoneParticle;
            char m_GravestoneParticle[0xe0]; // 0x7a8            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x888            
            // m_AuraParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AuraParticle;
            char m_AuraParticle[0xe0]; // 0x968            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_CasterBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CasterBuffModifier;
            char m_CasterBuffModifier[0x10]; // 0xa48            
            // m_GravestoneCriticalModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GravestoneCriticalModifier;
            char m_GravestoneCriticalModifier[0x10]; // 0xa58            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_DestroySound; // 0xa68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_GraveStoneVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_GraveStoneVData) == 0xa78);
    };
};
