#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FowBlockerShape_t.hpp"

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
        // Size: 0x48
        // Has VTable
        #pragma pack(push, 1)
        struct FowBlocker_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            float m_flMinX; // 0x30            
            float m_flMaxX; // 0x34            
            float m_flMinY; // 0x38            
            float m_flMaxY; // 0x3c            
            source2sdk::client::FowBlockerShape_t m_fowBlockerShape; // 0x40            
            bool m_bClearRegion; // 0x44            
            uint8_t _pad0045[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_flMinX) == 0x30);
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_flMaxX) == 0x34);
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_flMinY) == 0x38);
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_flMaxY) == 0x3c);
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_fowBlockerShape) == 0x40);
        static_assert(offsetof(source2sdk::client::FowBlocker_t, m_bClearRegion) == 0x44);
        
        static_assert(sizeof(source2sdk::client::FowBlocker_t) == 0x48);
    };
};
