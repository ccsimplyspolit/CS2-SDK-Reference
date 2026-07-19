#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x1ca8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_NanoDash_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x1818            
            // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
            char m_DashSwingEffect[0xe0]; // 0x18f8            
            // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
            char m_DashLineEffect[0xe0]; // 0x19d8            
            // m_SlashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashSwingEffect;
            char m_SlashSwingEffect[0xe0]; // 0x1ab8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashStart; // 0x1b98            
            CSoundEventName m_strSlashStart; // 0x1ba8            
            CSoundEventName m_strSlashImpactSound; // 0x1bb8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BountyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BountyModifier;
            char m_BountyModifier[0x10]; // 0x1bc8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // 0x1bd8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flGroundBreakOffAngle; // 0x1c60            
            uint8_t _pad1c64[0x4]; // 0x1c64
            CPiecewiseCurve m_SpeedCurve; // 0x1c68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_NanoDash_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_NanoDash_VData) == 0x1ca8);
    };
};
