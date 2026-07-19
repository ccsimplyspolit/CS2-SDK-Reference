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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class INavObstacle
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::uint64_t m_nId; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::INavObstacle, m_nId) == 0x8);
        
        static_assert(sizeof(source2sdk::server::INavObstacle) == 0x10);
    };
};
