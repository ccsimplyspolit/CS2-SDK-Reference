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
        // Size: 0x1b98
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_KickFlipVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Motion"
            CPiecewiseCurve m_LeapingSpeedCurve; // 0x1818            
            float m_flVelocityCarryoverOnMiss; // 0x1858            
            float m_flFracToAllowUp; // 0x185c            
            float m_flGroundBreakOffAngle; // 0x1860            
            uint8_t _pad1864[0x4]; // 0x1864
            // metadata: MPropertyStartGroup "Visuals"
            // m_KickHitImpact has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KickHitImpact;
            char m_KickHitImpact[0xe0]; // 0x1868            
            // m_PushOffImpact has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PushOffImpact;
            char m_PushOffImpact[0xe0]; // 0x1948            
            // m_BootKickCast has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BootKickCast;
            char m_BootKickCast[0xe0]; // 0x1a28            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_KickHitSound; // 0x1b08            
            CSoundEventName m_strPushOffSound; // 0x1b18            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SuccessSelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SuccessSelfModifier;
            char m_SuccessSelfModifier[0x10]; // 0x1b28            
            // m_SuccessEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SuccessEnemyModifier;
            char m_SuccessEnemyModifier[0x10]; // 0x1b38            
            // m_LeapingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LeapingModifier;
            char m_LeapingModifier[0x10]; // 0x1b48            
            // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DisarmModifier;
            char m_DisarmModifier[0x10]; // 0x1b58            
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1b68            
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1b78            
            // m_MarkModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_MarkModifier;
            char m_MarkModifier[0x10]; // 0x1b88            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_KickFlipVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Werewolf_KickFlipVData) == 0x1b98);
    };
};
