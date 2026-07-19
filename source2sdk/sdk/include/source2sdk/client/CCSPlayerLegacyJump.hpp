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
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CCSPlayerLegacyJump
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            bool m_bOldJumpPressed; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float m_flJumpPressedTime; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCSPlayerLegacyJump, m_bOldJumpPressed) == 0x10);
        static_assert(offsetof(source2sdk::client::CCSPlayerLegacyJump, m_flJumpPressedTime) == 0x14);
        
        static_assert(sizeof(source2sdk::client::CCSPlayerLegacyJump) == 0x18);
    };
};
