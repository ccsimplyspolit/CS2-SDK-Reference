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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParamAndPriority_t
        {
        public:
            // metadata: MPropertyFlattenIntoParentRow
            CGlobalSymbol m_strParamName; // 0x0            
            // metadata: MPropertyFlattenIntoParentRow
            std::int32_t m_nPriority; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ParamAndPriority_t, m_strParamName) == 0x0);
        static_assert(offsetof(source2sdk::client::ParamAndPriority_t, m_nPriority) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ParamAndPriority_t) == 0x10);
    };
};
