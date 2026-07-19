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
        // Size: 0x20e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Fencer_Lunge_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x1818            
            // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
            char m_DashSwingEffect[0xe0]; // 0x18f8            
            // m_DashTrailEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashTrailEffect;
            char m_DashTrailEffect[0xe0]; // 0x19d8            
            // m_SwordChargeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SwordChargeEffect;
            char m_SwordChargeEffect[0xe0]; // 0x1ab8            
            // m_SlashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashSwingEffect;
            char m_SlashSwingEffect[0xe0]; // 0x1b98            
            // m_StackProcParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackProcParticle;
            char m_StackProcParticle[0xe0]; // 0x1c78            
            // m_GlintParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GlintParticle;
            char m_GlintParticle[0xe0]; // 0x1d58            
            // m_PerfectImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PerfectImpactParticle;
            char m_PerfectImpactParticle[0xe0]; // 0x1e38            
            // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
            Vector m_vecLongEffectOffset; // 0x1f18            
            float m_vecPlayerLeftOffset; // 0x1f24            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DashBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DashBuffModifier;
            char m_DashBuffModifier[0x10]; // 0x1f28            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirSpeedMax; // 0x1f38            
            float m_flAirDrag; // 0x1f3c            
            float m_flFallSpeedMax; // 0x1f40            
            float m_flDashTurnRateMax; // 0x1f44            
            float m_flMaxPowerPadding; // 0x1f48            
            float m_flEffectGroundTrace; // 0x1f4c            
            float m_flWhizbyMaxRange; // 0x1f50            
            float m_flStartPosTestCapsuleLength; // 0x1f54            
            float m_flCoverLOSBackDist; // 0x1f58            
            float m_flAttackDuration; // 0x1f5c            
            float m_flPostAttackDuration; // 0x1f60            
            float m_flMinGlintTime; // 0x1f64            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashStart; // 0x1f68            
            CSoundEventName m_strSlashStart; // 0x1f78            
            CSoundEventName m_strSlashImpactSound; // 0x1f88            
            CSoundEventName m_strChargeSound; // 0x1f98            
            CSoundEventName m_strChargeGlintSound; // 0x1fa8            
            CSoundEventName m_strMaxHoldSweetener; // 0x1fb8            
            CSoundEventName m_strPerfectDamageHitSound; // 0x1fc8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequencePreRelease; // 0x1fd8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // 0x2060            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Lunge_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fencer_Lunge_VData) == 0x20e8);
    };
};
