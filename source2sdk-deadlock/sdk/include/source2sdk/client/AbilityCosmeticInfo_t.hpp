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
        // Registered alignment: 0x1
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x1
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct AbilityCosmeticInfo_t
        {
        public:
            bool m_bIsSeasonal; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AbilityCosmeticInfo_t, m_bIsSeasonal) == 0x0);
        
        static_assert(sizeof(source2sdk::client::AbilityCosmeticInfo_t) == 0x1);
    };
};
