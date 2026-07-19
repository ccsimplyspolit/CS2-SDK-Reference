#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        #pragma pack(push, 1)
        class CResponseCriteriaSet
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::int32_t m_nNumPrefixedContexts; // 0x30            
            bool m_bOverrideOnAppend; // 0x34            
            uint8_t _pad0035[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_nNumPrefixedContexts) == 0x30);
        static_assert(offsetof(source2sdk::client::CResponseCriteriaSet, m_bOverrideOnAppend) == 0x34);
        
        static_assert(sizeof(source2sdk::client::CResponseCriteriaSet) == 0x38);
    };
};
