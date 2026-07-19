#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0xa90
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_Nano_PredatoryStatueVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x750            
            // m_EnabledParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnabledParticle;
            char m_EnabledParticle[0xe0]; // 0x830            
            // m_DrainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle;
            char m_DrainParticle[0xe0]; // 0x910            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strEnabledSound; // 0x9f0            
            CSoundEventName m_strEnabledLoopSound; // 0xa00            
            CSoundEventName m_strDisabledSound; // 0xa10            
            CSoundEventName m_strLaserHitSound; // 0xa20            
            CSoundEventName m_strLaserStartSound; // 0xa30            
            CSoundEventName m_strLaserLoopSound; // 0xa40            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0xa50            
            // m_RevealModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RevealModifier;
            char m_RevealModifier[0x10]; // 0xa60            
            // m_StatueInvis has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_StatueInvis;
            char m_StatueInvis[0x10]; // 0xa70            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flNewTargetAttackTime; // 0xa80            
            float m_flMinRevealTime; // 0xa84            
            float m_flMinDebuffTime; // 0xa88            
            uint8_t _pad0a8c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Nano_PredatoryStatueVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Nano_PredatoryStatueVData) == 0xa90);
    };
};
