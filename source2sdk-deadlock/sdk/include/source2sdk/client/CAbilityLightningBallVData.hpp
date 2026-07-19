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
        // Size: 0x1940
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityLightningBallVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ZapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ZapModifier;
            char m_ZapModifier[0x10]; // 0x1818            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHitSound; // 0x1838            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strProjectileLoopingSound; // 0x1848            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapParticle;
            char m_ZapParticle[0xe0]; // 0x1858            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flHitSpeed; // 0x1938            
            float m_flNonHeroHitSpeed; // 0x193c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityLightningBallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityLightningBallVData) == 0x1940);
    };
};
