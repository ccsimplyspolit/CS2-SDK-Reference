#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/CNavVolume.hpp"

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0xa0
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeVector : public source2sdk::navlib::CNavVolume
        {
        public:
            uint8_t _pad0078[0x8]; // 0x78
            bool m_bHasBeenPreFiltered; // 0x80            
            uint8_t _pad0081[0x1f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavVolumeVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::navlib::CNavVolumeVector) == 0xa0);
    };
};
