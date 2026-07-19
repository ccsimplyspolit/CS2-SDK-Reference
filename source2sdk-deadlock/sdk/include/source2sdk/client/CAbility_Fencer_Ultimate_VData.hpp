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
        // Size: 0x1dc0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Fencer_Ultimate_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flHoldingDuration; // 0x1818            
            float m_flSweepingDuration; // 0x181c            
            float m_flDamageTimeOffsetFromCamera; // 0x1820            
            float m_flNonHeroDamageDelay; // 0x1824            
            float m_flMaxVeerDistanceAllowed; // 0x1828            
            float m_flMinCameraSweepSpeed; // 0x182c            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CasterModifier;
            char m_CasterModifier[0x10]; // 0x1830            
            // m_CasterArrivalModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CasterArrivalModifier;
            char m_CasterArrivalModifier[0x10]; // 0x1840            
            // m_TargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TargetModifier;
            char m_TargetModifier[0x10]; // 0x1850            
            // m_TargetNonHeroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_TargetNonHeroModifier;
            char m_TargetNonHeroModifier[0x10]; // 0x1860            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
            char m_TargetPreviewParticle[0xe0]; // 0x1870            
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x1950            
            // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
            char m_DashSwingEffect[0xe0]; // 0x1a30            
            // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
            char m_DashLineEffect[0xe0]; // 0x1b10            
            // m_UltHoldEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltHoldEffect;
            char m_UltHoldEffect[0xe0]; // 0x1bf0            
            // m_DirPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirPreviewEffect;
            char m_DirPreviewEffect[0xe0]; // 0x1cd0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashHitEnemy; // 0x1db0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Ultimate_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fencer_Ultimate_VData) == 0x1dc0);
    };
};
