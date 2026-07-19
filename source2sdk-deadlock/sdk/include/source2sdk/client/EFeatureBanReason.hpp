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
        enum class EFeatureBanReason : std::uint32_t
        {
            k_eFeatureBanReason_Invalid = 0x0,
            k_eFeatureBanReason_DevCommand = 0x1,
            k_eFeatureBanReason_ReportedByOtherPlayers = 0x2,
            k_eFeatureBanReason_MatchAbandons = 0x3,
            k_eFeatureBanReason_TooManyReportsSubmitted = 0x4,
        };
    };
};
