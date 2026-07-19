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
        // Size: 0x1b10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Mirage_Teleport_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_InterruptNotificationModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InterruptNotificationModifier;
            char m_InterruptNotificationModifier[0x10]; // 0x1818            
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_preTeleportParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_preTeleportParticle;
            char m_preTeleportParticle[0xe0]; // 0x1838            
            // m_TeleportStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle;
            char m_TeleportStartParticle[0xe0]; // 0x1918            
            // m_TeleportEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle;
            char m_TeleportEndParticle[0xe0]; // 0x19f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArriveSound; // 0x1ad8            
            CSoundEventName m_strDepartSound; // 0x1ae8            
            CSoundEventName m_strChannelDestinationSound; // 0x1af8            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flObjectiveOffset; // 0x1b08            
            uint8_t _pad1b0c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Teleport_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Mirage_Teleport_VData) == 0x1b10);
    };
};
