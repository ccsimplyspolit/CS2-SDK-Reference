#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_GlassCannonVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDeathSound; // 0x18b8            
            CSoundEventName m_strStackSound; // 0x18c8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
            char m_DeathParticle[0xe0]; // 0x18d8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ProcNotificationModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ProcNotificationModifier;
            char m_ProcNotificationModifier[0x10]; // 0x19b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_GlassCannonVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_GlassCannonVData) == 0x19c8);
    };
};
