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
        // Size: 0x1938
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityStompVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
            char m_StompParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strStompExplosionSound; // 0x18f8            
            CSoundEventName m_strCastDelayLocalPlayerSound; // 0x1908            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1918            
            // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BulletResistModifier;
            char m_BulletResistModifier[0x10]; // 0x1928            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityStompVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityStompVData) == 0x1938);
    };
};
