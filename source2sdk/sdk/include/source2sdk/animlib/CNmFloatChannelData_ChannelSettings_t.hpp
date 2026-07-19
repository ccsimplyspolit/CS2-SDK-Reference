#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/NmCompressionSettings_t_QuantizationRange_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmFloatChannelData_ChannelSettings_t
        {
        public:
            source2sdk::animlib::NmCompressionSettings_t_QuantizationRange_t m_range; // 0x0            
            bool m_bIsStatic; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData_ChannelSettings_t, m_range) == 0x0);
        static_assert(offsetof(source2sdk::animlib::CNmFloatChannelData_ChannelSettings_t, m_bIsStatic) == 0x8);
        
        static_assert(sizeof(source2sdk::animlib::CNmFloatChannelData_ChannelSettings_t) == 0xc);
    };
};
