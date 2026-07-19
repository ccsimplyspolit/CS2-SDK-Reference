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
        class CCitadel_Ability_Tengu_AirLiftVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FlyingModifier;
            char m_FlyingModifier[0x10]; // 0x1818            
            // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GrabModifier;
            char m_GrabModifier[0x10]; // 0x1828            
            // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HoldBombModifier;
            char m_HoldBombModifier[0x10]; // 0x1838            
            // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DroppedBuffModifier;
            char m_DroppedBuffModifier[0x10]; // 0x1848            
            // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ExplodingAllyModifier;
            char m_ExplodingAllyModifier[0x10]; // 0x1858            
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x1868            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1878            
            // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BulletResistModifier;
            char m_BulletResistModifier[0x10]; // 0x1888            
            // metadata: MPropertyGroupName "Visuals"
            // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
            char m_InitialExplodeParticle[0xe0]; // 0x1898            
            // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
            char m_HoldBombEffect[0xe0]; // 0x1978            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1a58            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1b38            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirDrag; // 0x1b48            
            float m_flMaxFallSpeed; // 0x1b4c            
            float m_flTargetAirSpeedFast; // 0x1b50            
            float m_flTargetAirSpeedBase; // 0x1b54            
            float m_flSprintMult; // 0x1b58            
            float m_flAcceleration; // 0x1b5c            
            float m_flDecceleration; // 0x1b60            
            float m_flAirSideSpeedPercent; // 0x1b64            
            float m_flBoostEndVerticalSpeed; // 0x1b68            
            float m_flBoostSpeedUp; // 0x1b6c            
            float m_flCrouchLaunchReduction; // 0x1b70            
            float m_flMinFlyHeight; // 0x1b74            
            float m_flMaxFlyHeight; // 0x1b78            
            float m_flMaxPitchUp; // 0x1b7c            
            float m_flMaxPitchDown; // 0x1b80            
            float m_flAllyDelayedBoostTime; // 0x1b84            
            float m_flChannelingAirDrag; // 0x1b88            
            float m_flChannelingMaxFallSpeed; // 0x1b8c            
            float m_flBombReleaseSpeed; // 0x1b90            
            float m_flBombReleasePitch; // 0x1b94            
            float m_flBombDropReleaseOffset; // 0x1b98            
            float m_flHoldBombOffsetX; // 0x1b9c            
            float m_flHoldBombOffsetY; // 0x1ba0            
            float m_flHoldBombOffsetZ; // 0x1ba4            
            float m_flAnglePitchBias; // 0x1ba8            
            float m_flTrackAmount; // 0x1bac            
            float m_flMoveCollideSpeed; // 0x1bb0            
            uint8_t _pad1bb4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tengu_AirLiftVData) == 0x1bb8);
    };
};
