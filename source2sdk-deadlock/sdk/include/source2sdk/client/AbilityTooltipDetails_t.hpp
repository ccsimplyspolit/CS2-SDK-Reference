#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilitySectionInfo_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct AbilityTooltipDetails_t
        {
        public:
            // metadata: MPropertyDescription "Add a new Section to the ability tooltip"
            // m_vecAbilityInfoSections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilitySectionInfo_t> m_vecAbilityInfoSections;
            char m_vecAbilityInfoSections[0x18]; // 0x0            
            // metadata: MPropertyDescription "Add additional header properties that aren't part of the default header properties"
            // m_vecAdditionalHeaderProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecAdditionalHeaderProperties;
            char m_vecAdditionalHeaderProperties[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AbilityTooltipDetails_t, m_vecAbilityInfoSections) == 0x0);
        static_assert(offsetof(source2sdk::client::AbilityTooltipDetails_t, m_vecAdditionalHeaderProperties) == 0x18);
        
        static_assert(sizeof(source2sdk::client::AbilityTooltipDetails_t) == 0x30);
    };
};
