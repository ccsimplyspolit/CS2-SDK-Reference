#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PeriodicResourceID_t.hpp"

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
        // Size: 0x40
        // Has VTable
        #pragma pack(push, 1)
        struct PlayerResourcePlayerPeriodicResourceData_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::client::PeriodicResourceID_t m_unPeriodicResourceID; // 0x30            
            std::uint32_t m_unPeriodicResourceMax; // 0x34            
            std::uint32_t m_unPeriodicResourceRemaining; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceID) == 0x30);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceMax) == 0x34);
        static_assert(offsetof(source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t, m_unPeriodicResourceRemaining) == 0x38);
        
        static_assert(sizeof(source2sdk::client::PlayerResourcePlayerPeriodicResourceData_t) == 0x40);
    };
};
