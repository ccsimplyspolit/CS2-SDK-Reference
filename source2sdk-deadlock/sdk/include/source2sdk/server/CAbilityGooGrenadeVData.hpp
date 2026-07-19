#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1a20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityGooGrenadeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GooGrenadeImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GooGrenadeImpactModifier;
            char m_GooGrenadeImpactModifier[0x10]; // 0x1818            
            // m_GooGrenadePuddleAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GooGrenadePuddleAuraModifier;
            char m_GooGrenadePuddleAuraModifier[0x10]; // 0x1828            
            // m_GooGrenadePuddleAuraFriendlyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GooGrenadePuddleAuraFriendlyModifier;
            char m_GooGrenadePuddleAuraFriendlyModifier[0x10]; // 0x1838            
            // metadata: MPropertyStartGroup "Particles"
            // m_GooGrenadeSkipParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle;
            char m_GooGrenadeSkipParticle[0xe0]; // 0x1848            
            // m_GooGrenadeExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle;
            char m_GooGrenadeExplodeParticle[0xe0]; // 0x1928            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_GrenadeHitSound; // 0x1a08            
            // metadata: MPropertyStartGroup "BounceSettings"
            float m_flMinRestitution; // 0x1a18            
            float m_flMaxRestitution; // 0x1a1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityGooGrenadeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityGooGrenadeVData) == 0x1a20);
    };
};
