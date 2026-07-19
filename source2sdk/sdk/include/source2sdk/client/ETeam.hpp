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
        enum class ETeam : std::uint32_t
        {
            ET_Unknown = 0x0,
            ET_Spectator = 0x1,
            ET_Terrorist = 0x2,
            ET_CT = 0x3,
        };
    };
};
