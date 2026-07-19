#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class FilterHealth : public source2sdk::server::CBaseFilter
        {
        public:
            bool m_bAdrenalineActive; // 0x4d0            
            uint8_t _pad04d1[0x3]; // 0x4d1
            std::int32_t m_iHealthMin; // 0x4d4            
            std::int32_t m_iHealthMax; // 0x4d8            
            uint8_t _pad04dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::FilterHealth) == 0x4e0);
    };
};
