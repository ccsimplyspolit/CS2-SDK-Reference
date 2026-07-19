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
        enum class EQuickCastMode : std::uint32_t
        {
            EQuickCast_Default = 0x0,
            EQuickCast_Enabled = 0x1,
            EQuickCast_Disable = 0x2,
            EQuickCast_OnMouseUp = 0x3,
            EQuickMaxValue = 0x3,
        };
    };
};
