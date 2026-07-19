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
        // Size: 0x18
        // Has VTable
        #pragma pack(push, 1)
        class CIronSightController
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            bool m_bIronSightAvailable; // 0x8            
            uint8_t _pad0009[0x3]; // 0x9
            float m_flIronSightAmount; // 0xc            
            float m_flIronSightAmountGained; // 0x10            
            float m_flIronSightAmountBiased; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CIronSightController, m_bIronSightAvailable) == 0x8);
        static_assert(offsetof(source2sdk::server::CIronSightController, m_flIronSightAmount) == 0xc);
        static_assert(offsetof(source2sdk::server::CIronSightController, m_flIronSightAmountGained) == 0x10);
        static_assert(offsetof(source2sdk::server::CIronSightController, m_flIronSightAmountBiased) == 0x14);
        
        static_assert(sizeof(source2sdk::server::CIronSightController) == 0x18);
    };
};
