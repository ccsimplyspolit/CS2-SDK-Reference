#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x1ad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItem_ResonantHealing_VData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_StackNotificationModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_StackNotificationModifier;
            char m_StackNotificationModifier[0x10]; // 0x18b8            
            // m_OnCastModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_OnCastModifier;
            char m_OnCastModifier[0x10]; // 0x18c8            
            // metadata: MPropertyGroupName "Visuals"
            // m_RegenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RegenParticle;
            char m_RegenParticle[0xe0]; // 0x18d8            
            // m_ProcParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcParticle;
            char m_ProcParticle[0xe0]; // 0x19b8            
            // metadata: MPropertyGroupName "Sounds"
            source2sdk::client::HealingOverTimeLoopSoundOverride_t m_HealingLoopSoundOverride; // 0x1a98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_ResonantHealing_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItem_ResonantHealing_VData) == 0x1ad0);
    };
};
