#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1b18
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_AttachVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AttachedModifier;
            char m_AttachedModifier[0x10]; // 0x1818            
            // m_MovingToAttachModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_MovingToAttachModifier;
            char m_MovingToAttachModifier[0x10]; // 0x1828            
            // m_CameraDummyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CameraDummyModifier;
            char m_CameraDummyModifier[0x10]; // 0x1838            
            // m_SpeedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SpeedModifier;
            char m_SpeedModifier[0x10]; // 0x1848            
            // m_DeathBarrierModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DeathBarrierModifier;
            char m_DeathBarrierModifier[0x10]; // 0x1858            
            // m_HopOutLockoutModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HopOutLockoutModifier;
            char m_HopOutLockoutModifier[0x10]; // 0x1868            
            // m_LaunchTossModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LaunchTossModifier;
            char m_LaunchTossModifier[0x10]; // 0x1878            
            // m_LaunchedSelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LaunchedSelfModifier;
            char m_LaunchedSelfModifier[0x10]; // 0x1888            
            // m_AllyLockoutModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AllyLockoutModifier;
            char m_AllyLockoutModifier[0x10]; // 0x1898            
            // m_HopOffBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HopOffBuffModifier;
            char m_HopOffBuffModifier[0x10]; // 0x18a8            
            // m_AttachHealModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AttachHealModifier;
            char m_AttachHealModifier[0x10]; // 0x18b8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_sCamDummyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sCamDummyModelName;
            char m_sCamDummyModelName[0xe0]; // 0x18c8            
            // m_FakeFamiliarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FakeFamiliarParticle;
            char m_FakeFamiliarParticle[0xe0]; // 0x19a8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flDetachForce; // 0x1a88            
            float m_flDetachForceUp; // 0x1a8c            
            float m_flTriggeredDetachForce; // 0x1a90            
            float m_flTriggeredDetachForceUp; // 0x1a94            
            CPiecewiseCurve m_MovingToAttachProjectileSpeedCurve; // 0x1a98            
            CPiecewiseCurve m_LaunchAngleRemap; // 0x1ad8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_AttachVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_AttachVData) == 0x1b18);
    };
};
