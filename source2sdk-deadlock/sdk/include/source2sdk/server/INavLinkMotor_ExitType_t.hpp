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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class INavLinkMotor_ExitType_t : std::uint32_t
        {
            eToStart = 0x0,
            eToLoop = 0x1,
        };
    };
};
