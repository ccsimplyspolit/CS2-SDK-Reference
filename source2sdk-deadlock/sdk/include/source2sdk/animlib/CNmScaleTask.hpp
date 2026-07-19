#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class CNmScaleTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            uint8_t _pad0058[0x58];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNmScaleTask has no schema binary (size is a guess)
    };
};
