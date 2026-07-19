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
        // Size: 0x1d78
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_LeapVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1818            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ActiveModifier;
            char m_ActiveModifier[0x10]; // 0x1858            
            // m_BoostModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BoostModifier;
            char m_BoostModifier[0x10]; // 0x1868            
            // m_CrashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CrashModifier;
            char m_CrashModifier[0x10]; // 0x1878            
            // m_ImmunityModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ImmunityModifier;
            char m_ImmunityModifier[0x10]; // 0x1888            
            // m_LandingBonusesModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LandingBonusesModifier;
            char m_LandingBonusesModifier[0x10]; // 0x1898            
            // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DragModifier;
            char m_DragModifier[0x10]; // 0x18a8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TakeOffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TakeOffParticle;
            char m_TakeOffParticle[0xe0]; // 0x18b8            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1998            
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x1a78            
            // m_HoverParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoverParticle;
            char m_HoverParticle[0xe0]; // 0x1b58            
            // m_DivingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DivingPreviewParticle;
            char m_DivingPreviewParticle[0xe0]; // 0x1c38            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCrashingSound; // 0x1d18            
            CSoundEventName m_strImpactSound; // 0x1d28            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flStartupTime; // 0x1d38            
            float m_flForwardBoostSpeed; // 0x1d3c            
            float m_flUpBoostSpeed; // 0x1d40            
            float m_flBoostTurnRate; // 0x1d44            
            float m_flHoverTime; // 0x1d48            
            float m_flMinAimAngle; // 0x1d4c            
            float m_flBoostGain; // 0x1d50            
            float m_flBoostTime; // 0x1d54            
            float m_flLandingTime; // 0x1d58            
            float m_flCrashSpeed; // 0x1d5c            
            float m_flCrashBraceAnimTime; // 0x1d60            
            float m_flCollideRadius; // 0x1d64            
            float m_flHoverInputSpeedMax; // 0x1d68            
            float m_flHoverInputAcceleration; // 0x1d6c            
            float m_flHoverSpeedDecay; // 0x1d70            
            float m_flCrashDownInputBuffer; // 0x1d74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_LeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_LeapVData) == 0x1d78);
    };
};
