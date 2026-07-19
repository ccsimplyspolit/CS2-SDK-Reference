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
        // Size: 0x1968
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatBlastedVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BlastedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BlastedModifier;
            char m_BlastedModifier[0x10]; // 0x1818            
            // m_BlastedPassiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BlastedPassiveModifier;
            char m_BlastedPassiveModifier[0x10]; // 0x1828            
            // m_ShredModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ShredModifier;
            char m_ShredModifier[0x10]; // 0x1838            
            // m_HealthModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HealthModifier;
            char m_HealthModifier[0x10]; // 0x1848            
            // m_HealthDisplayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_HealthDisplayModifier;
            char m_HealthDisplayModifier[0x10]; // 0x1858            
            // metadata: MPropertyStartGroup "Visuals"
            // m_MeleeReloadFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeReloadFX;
            char m_MeleeReloadFX[0xe0]; // 0x1868            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strMeleeReloadSoundLight; // 0x1948            
            CSoundEventName m_strMeleeReloadSoundHeavy; // 0x1958            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatBlastedVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPunkgoatBlastedVData) == 0x1968);
    };
};
