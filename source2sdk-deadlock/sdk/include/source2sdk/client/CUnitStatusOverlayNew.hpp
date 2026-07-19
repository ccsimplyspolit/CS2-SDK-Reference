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
        // Size: 0xc70
        // Has VTable
        #pragma pack(push, 1)
        class CUnitStatusOverlayNew : public source2sdk::client::CUnitStatusOverlay
        {
        public:
            uint8_t _pad0c00[0x48]; // 0xc00
            float m_flUIScale; // 0xc48            
            uint8_t _pad0c4c[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CUnitStatusOverlayNew because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CUnitStatusOverlayNew) == 0xc70);
    };
};
