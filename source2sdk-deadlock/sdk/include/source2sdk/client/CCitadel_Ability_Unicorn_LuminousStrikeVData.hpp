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
        // Size: 0x1d98
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Unicorn_LuminousStrikeVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1818            
            // m_TellParticleFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TellParticleFriendly;
            char m_TellParticleFriendly[0xe0]; // 0x18f8            
            // m_TellParticleEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TellParticleEnemy;
            char m_TellParticleEnemy[0xe0]; // 0x19d8            
            // m_TellParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TellParticle;
            char m_TellParticle[0xe0]; // 0x1ab8            
            // m_EnemyHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyHitParticle;
            char m_EnemyHitParticle[0xe0]; // 0x1b98            
            // m_FluxStrikeCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FluxStrikeCast;
            char m_FluxStrikeCast[0xe0]; // 0x1c78            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1d58            
            CSoundEventName m_strTellSound; // 0x1d68            
            CSoundEventName m_strHitSound; // 0x1d78            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1d88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Unicorn_LuminousStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Unicorn_LuminousStrikeVData) == 0x1d98);
    };
};
