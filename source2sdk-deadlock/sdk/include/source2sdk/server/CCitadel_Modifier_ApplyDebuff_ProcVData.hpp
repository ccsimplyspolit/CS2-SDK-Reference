#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x7b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ApplyDebuff_ProcVData : public source2sdk::server::CCitadel_Modifier_BaseEventProcVData
        {
        public:
            bool m_bUseNonEmbedded; // 0x780            
            uint8_t _pad0781[0x7]; // 0x781
            // metadata: MPropertyGroupName "Time"
            // metadata: MPropertyDescription "If this is set, the modifier will use the value from this AbilityProperty as the duration, instead of AbilityDuration."
            CUtlString m_DurationAbilityPropOverride; // 0x788            
            // metadata: MPropertyGroupName "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x790            
            // m_NonEmbeddedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<2> m_NonEmbeddedModifier;
            char m_NonEmbeddedModifier[0x10]; // 0x7a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ApplyDebuff_ProcVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ApplyDebuff_ProcVData) == 0x7b0);
    };
};
