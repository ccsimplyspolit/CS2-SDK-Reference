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
        // Size: 0x1aa0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_MaulingLeapVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Motion"
            CPiecewiseCurve m_LeapingSpeedCurve; // 0x1818            
            CPiecewiseCurve m_LeapingUpCurve; // 0x1858            
            float m_flVelocityCarryoverOnHit; // 0x1898            
            float m_flVelocityCarryoverOnMiss; // 0x189c            
            float m_flFracToAllowUp; // 0x18a0            
            uint8_t _pad18a4[0x4]; // 0x18a4
            // metadata: MPropertyStartGroup "Visuals"
            // m_LeapHitImpact has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapHitImpact;
            char m_LeapHitImpact[0xe0]; // 0x18a8            
            // m_UltLeapCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltLeapCastParticle;
            char m_UltLeapCastParticle[0xe0]; // 0x1988            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_LeapHitSound; // 0x1a68            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LeapingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LeapingModifier;
            char m_LeapingModifier[0x10]; // 0x1a78            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1a88            
            // metadata: MPropertyStartGroup "AnimGraph2"
            CGlobalSymbol m_strAG2SuccessHeroState; // 0x1a98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_MaulingLeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Werewolf_MaulingLeapVData) == 0x1aa0);
    };
};
