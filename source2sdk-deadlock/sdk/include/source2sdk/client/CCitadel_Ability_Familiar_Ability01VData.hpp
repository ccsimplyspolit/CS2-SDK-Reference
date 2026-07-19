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
        // Size: 0x1fe8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Ability01VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_EffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_EffectModifier;
            char m_EffectModifier[0x10]; // 0x1818            
            // m_StaringModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_StaringModifier;
            char m_StaringModifier[0x10]; // 0x1828            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1838            
            // m_UnstoppableWhileChannelingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_UnstoppableWhileChannelingModifier;
            char m_UnstoppableWhileChannelingModifier[0x10]; // 0x1848            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_AirSpeedMax; // 0x1858            
            float m_FallSpeedMax; // 0x185c            
            float m_VerticalDrag; // 0x1860            
            float m_AirDrag; // 0x1864            
            float m_CameraTurnRateMax; // 0x1868            
            float m_flShotCosmeticVarianceMagnitude; // 0x186c            
            float m_JumpCeilingCheckDistance; // 0x1870            
            float m_JumpSpeed; // 0x1874            
            float m_JumpPitch; // 0x1878            
            float m_JumpUpDownSpeed; // 0x187c            
            float m_ConeSpacingMeters; // 0x1880            
            uint8_t _pad1884[0x4]; // 0x1884
            CPiecewiseCurve m_RadiusGrowthCurve; // 0x1888            
            // metadata: MPropertyStartGroup "SAT Volume"
            Color aimColorDesat; // 0x18c8            
            Color aimColorSat; // 0x18cc            
            Color aimColorOutline; // 0x18d0            
            float m_flSatVolumeInnerConeSize; // 0x18d4            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
            char m_BeamParticle[0xe0]; // 0x18d8            
            // m_EyeGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EyeGlowParticle;
            char m_EyeGlowParticle[0xe0]; // 0x19b8            
            // m_TargetDebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetDebuffParticle;
            char m_TargetDebuffParticle[0xe0]; // 0x1a98            
            // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
            char m_GroundParticle[0xe0]; // 0x1b78            
            // m_RadiusIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RadiusIndicatorParticle;
            char m_RadiusIndicatorParticle[0xe0]; // 0x1c58            
            // m_RadiusIndicatorClientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RadiusIndicatorClientParticle;
            char m_RadiusIndicatorClientParticle[0xe0]; // 0x1d38            
            // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
            char m_ExplosionParticle[0xe0]; // 0x1e18            
            // m_WakeUpDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WakeUpDamageParticle;
            char m_WakeUpDamageParticle[0xe0]; // 0x1ef8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_SleepHitSound; // 0x1fd8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Ability01VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_Ability01VData) == 0x1fe8);
    };
};
