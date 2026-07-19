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
        // Size: 0x1968
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatTetherVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_FireRateSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FireRateSlowModifier;
            char m_FireRateSlowModifier[0x10]; // 0x1818            
            // m_TetheredModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_TetheredModifier;
            char m_TetheredModifier[0x10]; // 0x1828            
            // m_PullModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PullModifier;
            char m_PullModifier[0x10]; // 0x1838            
            // m_WaitingToPullModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_WaitingToPullModifier;
            char m_WaitingToPullModifier[0x10]; // 0x1848            
            // m_UnstoppableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_UnstoppableModifier;
            char m_UnstoppableModifier[0x10]; // 0x1858            
            // metadata: MPropertyStartGroup "Visual"
            // m_RopeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RopeParticle;
            char m_RopeParticle[0xe0]; // 0x1868            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strPullSound; // 0x1948            
            CSoundEventName m_strTimerSound; // 0x1958            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatTetherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPunkgoatTetherVData) == 0x1968);
    };
};
