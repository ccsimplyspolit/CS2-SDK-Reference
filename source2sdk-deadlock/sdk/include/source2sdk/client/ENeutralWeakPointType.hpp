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
        // Alignment: 1
        // Size: 0x1
        enum class ENeutralWeakPointType : std::uint8_t
        {
            ENWP_Weak = 0x0,
            ENWP_Med = 0x1,
            ENWP_Strong = 0x2,
        };
    };
};
