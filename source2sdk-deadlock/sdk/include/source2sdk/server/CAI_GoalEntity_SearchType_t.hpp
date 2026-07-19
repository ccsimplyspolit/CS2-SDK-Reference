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
        enum class CAI_GoalEntity_SearchType_t : std::uint32_t
        {
            ST_ENTNAME = 0x0,
            ST_CLASSNAME = 0x1,
        };
    };
};
