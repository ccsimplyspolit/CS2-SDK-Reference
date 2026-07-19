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
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class CitadelMusicSyncMode_t : std::uint32_t
        {
            ESyncMode_None = 0x0,
            ESyncMode_Resume = 0x1,
            ESyncMode_RandomMarker = 0x2,
        };
    };
};
