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
        // Size: 0x1ad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatUltVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DiminishingSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DiminishingSlowModifier;
            char m_DiminishingSlowModifier[0x10]; // 0x1818            
            // m_FireRateModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FireRateModifier;
            char m_FireRateModifier[0x10]; // 0x1828            
            // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_VulnerableModifier;
            char m_VulnerableModifier[0x10]; // 0x1838            
            // m_GroundAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GroundAuraModifier;
            char m_GroundAuraModifier[0x10]; // 0x1848            
            // m_PullToGroundModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PullToGroundModifier;
            char m_PullToGroundModifier[0x10]; // 0x1858            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BatChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatChargingEffect;
            char m_BatChargingEffect[0xe0]; // 0x1868            
            // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
            char m_GroundParticle[0xe0]; // 0x1948            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHangSound; // 0x1a28            
            CSoundEventName m_strDiveSound; // 0x1a38            
            // metadata: MPropertyStartGroup "Gameplay"
            CPiecewiseCurve m_TimeToReachGroundByHeight; // 0x1a48            
            CPiecewiseCurve m_GoUpSpeedCurve; // 0x1a88            
            float m_flGoUpDuration; // 0x1ac8            
            float m_flGoDownVelocityDampRate; // 0x1acc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatUltVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPunkgoatUltVData) == 0x1ad0);
    };
};
