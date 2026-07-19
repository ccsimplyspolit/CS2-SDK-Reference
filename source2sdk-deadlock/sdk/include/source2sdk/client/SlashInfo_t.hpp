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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct SlashInfo_t
        {
        public:
            Vector m_vecBulletOriginOffsets0; // 0x0            
            Vector m_vecBulletOriginOffsets1; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SlashInfo_t, m_vecBulletOriginOffsets0) == 0x0);
        static_assert(offsetof(source2sdk::client::SlashInfo_t, m_vecBulletOriginOffsets1) == 0xc);
        
        static_assert(sizeof(source2sdk::client::SlashInfo_t) == 0x18);
    };
};
