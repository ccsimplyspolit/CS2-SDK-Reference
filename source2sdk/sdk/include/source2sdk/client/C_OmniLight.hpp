#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BarnLight.hpp"

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
        // Size: 0x12d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_OmniLight : public source2sdk::client::C_BarnLight
        {
        public:
            float m_flInnerAngle; // 0x12c0            
            float m_flOuterAngle; // 0x12c4            
            bool m_bShowLight; // 0x12c8            
            uint8_t _pad12c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OmniLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_OmniLight) == 0x12d0);
    };
};
