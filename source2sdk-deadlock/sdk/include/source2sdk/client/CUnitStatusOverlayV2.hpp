#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CUnitStatusOverlay.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd00
        // Has VTable
        #pragma pack(push, 1)
        class CUnitStatusOverlayV2 : public source2sdk::client::CUnitStatusOverlay
        {
        public:
            uint8_t _pad0c00[0xb8]; // 0xc00
            float m_flUIScale; // 0xcb8            
            uint8_t _pad0cbc[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CUnitStatusOverlayV2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CUnitStatusOverlayV2) == 0xd00);
    };
};
