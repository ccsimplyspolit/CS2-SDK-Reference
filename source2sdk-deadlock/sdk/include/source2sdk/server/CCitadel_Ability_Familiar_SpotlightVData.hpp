#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_Base_Buildup.hpp"
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
        // Size: 0x1970
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_SpotlightVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ExposedAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ExposedAuraModifier;
            char m_ExposedAuraModifier[0x10]; // 0x1818            
            // m_BuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadel_Modifier_Base_Buildup> m_BuildupModifier;
            char m_BuildupModifier[0x10]; // 0x1828            
            // m_EffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_EffectModifier;
            char m_EffectModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Visuals"
            // m_EyeGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EyeGlowParticle;
            char m_EyeGlowParticle[0xe0]; // 0x1848            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strChannelFinishSound; // 0x1928            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_AirSpeedMax; // 0x1938            
            float m_FallSpeedMax; // 0x193c            
            float m_VerticalDrag; // 0x1940            
            float m_AirDrag; // 0x1944            
            float m_CameraTurnRateMax; // 0x1948            
            float m_flShotCosmeticVarianceMagnitude; // 0x194c            
            float m_JumpCeilingCheckDistance; // 0x1950            
            float m_JumpSpeed; // 0x1954            
            float m_JumpPitch; // 0x1958            
            // metadata: MPropertyStartGroup "SAT Volume"
            Color aimColorDesat; // 0x195c            
            Color aimColorSat; // 0x1960            
            Color aimColorOutline; // 0x1964            
            float m_flSatVolumeInnerConeSize; // 0x1968            
            uint8_t _pad196c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_SpotlightVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_SpotlightVData) == 0x1970);
    };
};
