#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"

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
        // Size: 0xa60
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierPsychicLiftVData : public source2sdk::server::CCitadel_Modifier_StunnedVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SilenceModifier;
            char m_SilenceModifier[0x10]; // 0x830            
            // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DisarmModifier;
            char m_DisarmModifier[0x10]; // 0x840            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x850            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LiftParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle;
            char m_LiftParticle[0xe0]; // 0x860            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x940            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strImpactSound; // 0xa20            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flOccilateMaxDistance; // 0xa30            
            float m_flOccilateDegreesPerSecond; // 0xa34            
            float m_flRiseTime; // 0xa38            
            // metadata: MPropertyDescription "Once this duration has pased in the slam, we start forcing the target to the ground"
            float m_flSlamTime; // 0xa3c            
            float m_flRiseAcc; // 0xa40            
            float m_flRiseMaxSpeed; // 0xa44            
            float m_flRiseDecayFracStart; // 0xa48            
            float m_flRiseDecayFracEnd; // 0xa4c            
            float m_flSlamAcc; // 0xa50            
            float m_flSlamMaxSpeed; // 0xa54            
            float m_flSlamImpactRadius; // 0xa58            
            uint8_t _pad0a5c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierPsychicLiftVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierPsychicLiftVData) == 0xa60);
    };
};
