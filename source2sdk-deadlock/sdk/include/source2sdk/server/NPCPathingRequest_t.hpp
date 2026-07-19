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
        // Alignment: 4
        // Size: 0x4
        enum class NPCPathingRequest_t : std::uint32_t
        {
            StopIfNoPath = 0x0,
            TryRandomMovementIfNoPath = 0x1,
            AllowDirectDropDownIfNoPath = 0x2,
        };
    };
};
