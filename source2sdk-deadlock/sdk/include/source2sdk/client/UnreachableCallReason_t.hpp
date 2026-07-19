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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class UnreachableCallReason_t : std::uint32_t
        {
            IS_TARGET_UNREACHABLE = 0x0,
            MARK_TARGET_AS_UNREACHABLE = 0x1,
        };
    };
};
