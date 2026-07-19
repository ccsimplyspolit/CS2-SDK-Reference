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
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        #pragma pack(push, 1)
        struct WeaponPurchaseCount_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::uint16_t m_nItemDefIndex; // 0x30            
            std::uint16_t m_nCount; // 0x32            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::WeaponPurchaseCount_t, m_nItemDefIndex) == 0x30);
        static_assert(offsetof(source2sdk::server::WeaponPurchaseCount_t, m_nCount) == 0x32);
        
        static_assert(sizeof(source2sdk::server::WeaponPurchaseCount_t) == 0x38);
    };
};
