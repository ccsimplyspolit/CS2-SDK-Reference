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
        // Size: 0x1c88
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_KillingBlowVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LeapModifier;
            char m_LeapModifier[0x10]; // 0x1818            
            // m_ActiveBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ActiveBuff;
            char m_ActiveBuff[0x10]; // 0x1828            
            // m_KillableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KillableModifier;
            char m_KillableModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Visuals"
            // m_AttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle;
            char m_AttackParticle[0xe0]; // 0x1848            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1928            
            // m_FlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle;
            char m_FlashParticle[0xe0]; // 0x1a08            
            // m_KillingBlowCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillingBlowCastParticle;
            char m_KillingBlowCastParticle[0xe0]; // 0x1ae8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_OnKillSound; // 0x1bc8            
            // metadata: MPropertyStartGroup "+Killing Blow Params"
            float m_flKillableGlowRange; // 0x1bd8            
            float m_flGlowMinTime; // 0x1bdc            
            float m_flFracToAllowUp; // 0x1be0            
            float m_flMinLeapTime; // 0x1be4            
            float m_flCheckRadius; // 0x1be8            
            float m_flSlashRadius; // 0x1bec            
            float m_flRefreshLockOutTime; // 0x1bf0            
            float m_flMaxTurnRate; // 0x1bf4            
            float m_flCameraTurnRate; // 0x1bf8            
            uint8_t _pad1bfc[0x4]; // 0x1bfc
            CPiecewiseCurve m_SpeedCurve; // 0x1c00            
            CPiecewiseCurve m_SpeedUpCurve; // 0x1c40            
            float m_flVelocityCarryoverOnMiss; // 0x1c80            
            uint8_t _pad1c84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlowVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shiv_KillingBlowVData) == 0x1c88);
    };
};
