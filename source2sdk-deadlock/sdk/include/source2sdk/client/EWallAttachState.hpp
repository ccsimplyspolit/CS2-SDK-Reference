#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class EWallAttachState : std::uint32_t
        {
            // MAlternateSemanticName
            NONE = 0x0,
            // MAlternateSemanticName
            LEFT = 0x1,
            // MAlternateSemanticName
            FORWARD = 0x2,
            // MAlternateSemanticName
            RIGHT = 0x3,
        };
    };
};
