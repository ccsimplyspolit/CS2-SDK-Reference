#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1a30
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Werewolf_CripplingSlashVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1818            
            // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DisarmModifier;
            char m_DisarmModifier[0x10]; // 0x1828            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSlashStart; // 0x1848            
            CSoundEventName m_strSlashImpactSound; // 0x1858            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SlashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashSwingEffect;
            char m_SlashSwingEffect[0xe0]; // 0x1868            
            // m_SlashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashImpactEffect;
            char m_SlashImpactEffect[0xe0]; // 0x1948            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSlashForwardOffset; // 0x1a28            
            uint8_t _pad1a2c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Werewolf_CripplingSlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Werewolf_CripplingSlashVData) == 0x1a30);
    };
};
