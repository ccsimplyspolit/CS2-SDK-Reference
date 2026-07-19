#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
#include "source2sdk/client/HealingOverTimeLoopSoundOverride_t.hpp"
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
        // Size: 0x19e0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_Mystic_RegenerationVData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_RegenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RegenParticle;
            char m_RegenParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyGroupName "Modifiers"
            // m_StackNotificationModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_StackNotificationModifier;
            char m_StackNotificationModifier[0x10]; // 0x1998            
            // metadata: MPropertyGroupName "Sounds"
            source2sdk::client::HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // 0x19a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Mystic_RegenerationVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_Mystic_RegenerationVData) == 0x19e0);
    };
};
