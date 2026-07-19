#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1af8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Trapper_WebWallVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1818            
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_WebWallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WebWallParticle;
            char m_WebWallParticle[0xe0]; // 0x1838            
            // m_WebWallDestroyedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WebWallDestroyedParticle;
            char m_WebWallDestroyedParticle[0xe0]; // 0x1918            
            // m_WebWallHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WebWallHitParticle;
            char m_WebWallHitParticle[0xe0]; // 0x19f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWebWallCreated; // 0x1ad8            
            CSoundEventName m_strWebWallDestroyed; // 0x1ae8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Trapper_WebWallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Trapper_WebWallVData) == 0x1af8);
    };
};
