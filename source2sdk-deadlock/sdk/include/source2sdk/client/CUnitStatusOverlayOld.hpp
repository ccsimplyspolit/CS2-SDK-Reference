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
        // Size: 0xc60
        // Has VTable
        #pragma pack(push, 1)
        class CUnitStatusOverlayOld : public source2sdk::client::CUnitStatusOverlay
        {
        public:
            uint8_t _pad0c00[0x40]; // 0xc00
            float m_flUIScale; // 0xc40            
            uint8_t _pad0c44[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CUnitStatusOverlayOld because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CUnitStatusOverlayOld) == 0xc60);
    };
};
