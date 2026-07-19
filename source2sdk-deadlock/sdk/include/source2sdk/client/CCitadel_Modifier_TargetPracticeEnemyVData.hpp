#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
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
        // Size: 0xa50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_TargetPracticeEnemyVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x750            
            // m_BuildupCompleteModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuildupCompleteModifier;
            char m_BuildupCompleteModifier[0x10]; // 0x760            
            // m_BuildupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadel_Modifier_Base_Buildup> m_BuildupModifier;
            char m_BuildupModifier[0x10]; // 0x770            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle;
            char m_TargetParticle[0xe0]; // 0x780            
            // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
            char m_HitParticle[0xe0]; // 0x860            
            // m_HeadParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadParticle;
            char m_HeadParticle[0xe0]; // 0x940            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strTargetHitSound; // 0xa20            
            CSoundEventName m_strTargetHeadShotHitSound; // 0xa30            
            CSoundEventName m_strTargetCompleteSound; // 0xa40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TargetPracticeEnemyVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_TargetPracticeEnemyVData) == 0xa50);
    };
};
