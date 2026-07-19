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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class CMsgLaneColor : std::uint32_t
        {
            // MPropertyFriendlyName "None"
            k_ELaneColor_Invalid = 0x0,
            // MPropertyFriendlyName "Yellow"
            k_ELaneColor_Yellow = 0x1,
            // MPropertyFriendlyName "Green"
            k_ELaneColor_Green = 0x3,
            // MPropertyFriendlyName "Blue"
            k_ELaneColor_Blue = 0x4,
            // MPropertyFriendlyName "Purple"
            k_ELaneColor_Purple = 0x6,
        };
    };
};
