#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x638
        // Has VTable
        #pragma pack(push, 1)
        class FilterHealth : public source2sdk::client::CBaseFilter
        {
        public:
            bool m_bAdrenalineActive; // 0x628            
            uint8_t _pad0629[0x3]; // 0x629
            std::int32_t m_iHealthMin; // 0x62c            
            std::int32_t m_iHealthMax; // 0x630            
            uint8_t _pad0634[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in FilterHealth because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::FilterHealth) == 0x638);
    };
};
