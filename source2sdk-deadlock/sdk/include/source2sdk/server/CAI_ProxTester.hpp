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
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CAI_ProxTester
        {
        public:
            float m_distSq; // 0x0            
            bool m_fInside; // 0x4            
            uint8_t _pad0005[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_ProxTester, m_distSq) == 0x0);
        static_assert(offsetof(source2sdk::server::CAI_ProxTester, m_fInside) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CAI_ProxTester) == 0x8);
    };
};
