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
        // Size: 0x12c8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_RectLight : public source2sdk::client::C_BarnLight
        {
        public:
            bool m_bShowLight; // 0x12c0            
            uint8_t _pad12c1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RectLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RectLight) == 0x12c8);
    };
};
