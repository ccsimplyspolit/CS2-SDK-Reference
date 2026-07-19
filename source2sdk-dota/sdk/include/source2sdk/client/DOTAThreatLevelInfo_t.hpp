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
        struct DOTAThreatLevelInfo_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            float m_flKillability; // 0x30            
            std::int32_t m_nEntIndex; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAThreatLevelInfo_t, m_flKillability) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTAThreatLevelInfo_t, m_nEntIndex) == 0x34);
        
        static_assert(sizeof(source2sdk::client::DOTAThreatLevelInfo_t) == 0x38);
    };
};
