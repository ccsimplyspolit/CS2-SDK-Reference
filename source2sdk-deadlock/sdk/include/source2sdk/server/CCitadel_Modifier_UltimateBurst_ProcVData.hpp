#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"

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
        // Size: 0x890
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_UltimateBurst_ProcVData : public source2sdk::server::CCitadel_Modifier_BaseEventProcVData
        {
        public:
            // metadata: MPropertyGroupName "Visuals"
            // m_LightningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LightningParticle;
            char m_LightningParticle[0xe0]; // 0x780            
            // metadata: MPropertyGroupName "Modifiers"
            // m_DelayedEffectModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DelayedEffectModifier;
            char m_DelayedEffectModifier[0x10]; // 0x860            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x870            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLightningSound; // 0x880            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_UltimateBurst_ProcVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_UltimateBurst_ProcVData) == 0x890);
    };
};
