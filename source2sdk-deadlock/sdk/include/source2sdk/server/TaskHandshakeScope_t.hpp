#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 3
        // Alignment: 1
        // Size: 0x1
        enum class TaskHandshakeScope_t : std::uint8_t
        {
            eTask = 0x0,
            eSchedule = 0x1,
            eInvalid = 0x2,
        };
    };
};
