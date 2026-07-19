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
        enum class EHUDElementButtonType_t : std::uint32_t
        {
            EButtonHintType_SingleButton = 0x0,
            EButtonHintType_TwoDifferentButtons = 0x1,
            EButtonHintType_TwoButtonCombo = 0x2,
        };
    };
};
