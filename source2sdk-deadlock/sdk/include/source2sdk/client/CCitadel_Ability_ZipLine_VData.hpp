#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
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
        // Size: 0x21e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
            float m_flZiplineAirDrag; // 0x1818            
            float m_flZiplineAirDragBoosted; // 0x181c            
            float m_flMinButtonHoldTimeToActivate; // 0x1820            
            float m_flCrouchDropSpeedFraction; // 0x1824            
            float m_flCrouchDropAirDragSuppressDuration; // 0x1828            
            float m_flDetachDisallowedTime; // 0x182c            
            float m_flCameraWobbleIntensity; // 0x1830            
            float m_flDismountSpeedMax; // 0x1834            
            float m_flDismountSpeedMaxBrawl; // 0x1838            
            float m_flZiplineKnockdownUpImpulse; // 0x183c            
            float m_flZiplineIntroDuration; // 0x1840            
            // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
            source2sdk::client::DOFDesc_t m_DOFWhileZiplining; // 0x1844            
            uint8_t _pad1854[0x4]; // 0x1854
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
            char m_ZipLinePreviewParticle[0xe0]; // 0x1858            
            // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
            char m_ZipLineSpeedParticle[0xe0]; // 0x1938            
            // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
            char m_ZipLineTetherParticle[0xe0]; // 0x1a18            
            // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
            char m_ZipLineTetherAttachParticle[0xe0]; // 0x1af8            
            // m_ZipLineTetherStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherStartParticle;
            char m_ZipLineTetherStartParticle[0xe0]; // 0x1bd8            
            // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
            char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x1cb8            
            // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
            char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x1d98            
            // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
            char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1e78            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strZipLineSummonSound; // 0x1f58            
            CSoundEventName m_strZipLineStartSound; // 0x1f68            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RidingZipLineModifier;
            char m_RidingZipLineModifier[0x10]; // 0x1f78            
            // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KnockedOffSlowModifier;
            char m_KnockedOffSlowModifier[0x10]; // 0x1f88            
            // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ZipLineIntroModifier;
            char m_ZipLineIntroModifier[0x10]; // 0x1f98            
            // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
            char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1fa8            
            // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ZipLineSlowModifier;
            char m_ZipLineSlowModifier[0x10]; // 0x1fb8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1fc8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x2050            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x20d8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x2160            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ZipLine_VData) == 0x21e8);
    };
};
