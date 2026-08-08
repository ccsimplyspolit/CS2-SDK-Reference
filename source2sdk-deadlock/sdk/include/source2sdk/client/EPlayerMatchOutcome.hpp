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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class EPlayerMatchOutcome : std::uint32_t
        {
            k_EPlayerMatchOutcome_Invalid = 0x0,
            k_EPlayerMatchOutcome_Win = 0x1,
            k_EPlayerMatchOutcome_Loss = 0x2,
            k_EPlayerMatchOutcome_Penalized = 0x3,
            k_EPlayerMatchOutcome_PenalizedParty = 0x4,
            k_EPlayerMatchOutcome_NotScored = 0x5,
        };
    };
};
