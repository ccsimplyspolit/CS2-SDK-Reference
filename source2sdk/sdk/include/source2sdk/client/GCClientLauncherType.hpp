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
        enum class GCClientLauncherType : std::uint32_t
        {
            GCClientLauncherType_DEFAULT = 0x0,
            GCClientLauncherType_PERFECTWORLD = 0x1,
            GCClientLauncherType_STEAMCHINA = 0x2,
            GCClientLauncherType_SOURCE2 = 0x3,
        };
    };
};
