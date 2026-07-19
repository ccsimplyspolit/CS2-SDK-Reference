#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct FootSweepPusher_t
        {
        public:
            VectorWS m_vC; // 0x0            
            float m_flR; // 0xc            
            bool m_bIsForward; // 0x10            
            uint8_t _pad0011[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::FootSweepPusher_t, m_vC) == 0x0);
        static_assert(offsetof(source2sdk::server::FootSweepPusher_t, m_flR) == 0xc);
        static_assert(offsetof(source2sdk::server::FootSweepPusher_t, m_bIsForward) == 0x10);
        
        static_assert(sizeof(source2sdk::server::FootSweepPusher_t) == 0x14);
    };
};
