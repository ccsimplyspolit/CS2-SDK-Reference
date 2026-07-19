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
        // Size: 0x1bb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarmVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1818            
            // metadata: MPropertyStartGroup "Visuals"
            // m_GainedBatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GainedBatParticle;
            char m_GainedBatParticle[0xe0]; // 0x1828            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1908            
            // m_BatSwarmChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatSwarmChannelParticle;
            char m_BatSwarmChannelParticle[0xe0]; // 0x19e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strFireBatSound; // 0x1ac8            
            CSoundEventName m_strGainedBatSound; // 0x1ad8            
            CSoundEventName m_strChannelEndSound; // 0x1ae8            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bAllowLockOn; // 0x1af8            
            bool m_bAllowSatVolume; // 0x1af9            
            bool m_bAllowRetarget; // 0x1afa            
            uint8_t _pad1afb[0x1]; // 0x1afb
            float m_flBatTickRate; // 0x1afc            
            float m_flBatLifetime; // 0x1b00            
            float m_flTrackingAngularStrengthMin; // 0x1b04            
            float m_flTrackingAngularStrengthMax; // 0x1b08            
            float m_flBatRetargetRadius; // 0x1b0c            
            float m_flCurlNoiseStrength; // 0x1b10            
            float m_flCurlNoiseMinFrequency; // 0x1b14            
            float m_flCurlNoiseMaxFrequency; // 0x1b18            
            uint8_t _pad1b1c[0x4]; // 0x1b1c
            CPiecewiseCurve m_DistanceToAccuracyCurve; // 0x1b20            
            CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // 0x1b60            
            Color aimColorDesat; // 0x1ba0            
            Color aimColorSat; // 0x1ba4            
            Color aimColorOutline; // 0x1ba8            
            float m_flSatVolumePulsePerBat; // 0x1bac            
            float m_flSatVolumeInnerConeSize; // 0x1bb0            
            float m_flLowTickRateDistCheck; // 0x1bb4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarmVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatSwarmVData) == 0x1bb8);
    };
};
