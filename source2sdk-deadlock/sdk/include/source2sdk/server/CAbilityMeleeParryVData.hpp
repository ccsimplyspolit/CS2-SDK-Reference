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
        // Size: 0x1b58
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityMeleeParryVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flWhiffDuration; // 0x1818            
            float m_flMovementRestrictionTime; // 0x181c            
            float m_flActiveTime; // 0x1820            
            float m_flParryEndVisualTime; // 0x1824            
            float m_flSuccessActiveTime; // 0x1828            
            float m_flMashProtectTime; // 0x182c            
            float m_flBossVictimNoMeleeTime; // 0x1830            
            float m_flBossVictimCalmTime; // 0x1834            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
            char m_SuccessfulParryParticle[0xe0]; // 0x1838            
            // m_SuccessfulAbilityParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulAbilityParryParticle;
            char m_SuccessfulAbilityParryParticle[0xe0]; // 0x1918            
            // m_ActiveParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveParryParticle;
            char m_ActiveParryParticle[0xe0]; // 0x19f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSuccessfulParrySound; // 0x1ad8            
            CSoundEventName m_strSuccessfulParryTrooperSound; // 0x1ae8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ParryActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryActiveModifier;
            char m_ParryActiveModifier[0x10]; // 0x1af8            
            // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryVictimModifier;
            char m_ParryVictimModifier[0x10]; // 0x1b08            
            // m_ParryCooldownModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryCooldownModifier;
            char m_ParryCooldownModifier[0x10]; // 0x1b18            
            // m_ParryEndVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryEndVisualModifier;
            char m_ParryEndVisualModifier[0x10]; // 0x1b28            
            // m_ParryBossVictimNoMeleeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryBossVictimNoMeleeModifier;
            char m_ParryBossVictimNoMeleeModifier[0x10]; // 0x1b38            
            // m_ParryBossVictimCalmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ParryBossVictimCalmModifier;
            char m_ParryBossVictimCalmModifier[0x10]; // 0x1b48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityMeleeParryVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityMeleeParryVData) == 0x1b58);
    };
};
