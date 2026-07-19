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
        // Size: 0x1c10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier3Boss_AoEWaveVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AmberInitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberInitialExplodeParticle;
            char m_AmberInitialExplodeParticle[0xe0]; // 0x1818            
            // m_AmberShrineChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmberShrineChargeParticle;
            char m_AmberShrineChargeParticle[0xe0]; // 0x18f8            
            // m_SapphInitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphInitialExplodeParticle;
            char m_SapphInitialExplodeParticle[0xe0]; // 0x19d8            
            // m_SapphShrineChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SapphShrineChargeParticle;
            char m_SapphShrineChargeParticle[0xe0]; // 0x1ab8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_AOEAmberImpactSound; // 0x1b98            
            CSoundEventName m_AOESapphImpactSound; // 0x1ba8            
            CSoundEventName m_AOEAmberAnnounceSound; // 0x1bb8            
            CSoundEventName m_AOESapphAnnounceSound; // 0x1bc8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AoEModifier;
            char m_AoEModifier[0x10]; // 0x1bd8            
            // m_PreviewModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PreviewModifier;
            char m_PreviewModifier[0x10]; // 0x1be8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flCastCompleteToAttackTime; // 0x1bf8            
            // metadata: MPropertyStartGroup "ScreenShake"
            float m_flShakeRadius; // 0x1bfc            
            float m_flShakeAmplitue; // 0x1c00            
            float m_flShakeFreqency; // 0x1c04            
            float m_flShakeDuration; // 0x1c08            
            uint8_t _pad1c0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier3Boss_AoEWaveVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier3Boss_AoEWaveVData) == 0x1c10);
    };
};
