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
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class EBannedFeature : std::uint32_t
        {
            k_eBannedFeature_Invalid = 0x0,
            k_eBannedFeature_LowPriorityMatchmaking = 0x1,
            k_eBannedFeature_CommsRestricted = 0x2,
            k_eBannedFeature_ReportingDisabled = 0x3,
        };
    };
};
