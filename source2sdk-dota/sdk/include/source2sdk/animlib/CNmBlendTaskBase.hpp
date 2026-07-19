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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x100
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CNmBlendTaskBase : public source2sdk::animlib::CNmPoseTask
        {
        public:
            uint8_t _pad0070[0x90];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNmBlendTaskBase has no schema binary (size is a guess)
    };
};
