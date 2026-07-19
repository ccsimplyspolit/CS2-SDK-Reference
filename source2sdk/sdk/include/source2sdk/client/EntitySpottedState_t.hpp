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
        // Size: 0x18
        // Has VTable
        #pragma pack(push, 1)
        struct EntitySpottedState_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            bool m_bSpotted; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            std::uint32_t m_bSpottedByMask[2]; // 0xc            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EntitySpottedState_t, m_bSpotted) == 0x8);
        static_assert(offsetof(source2sdk::client::EntitySpottedState_t, m_bSpottedByMask) == 0xc);
        
        static_assert(sizeof(source2sdk::client::EntitySpottedState_t) == 0x18);
    };
};
