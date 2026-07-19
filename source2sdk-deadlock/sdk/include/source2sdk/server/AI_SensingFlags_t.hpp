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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class AI_SensingFlags_t : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            eNone = 0x0,
            eBlind = 0x1,
            eDeaf = 0x2,
            eDisableAllSensing = 0x4,
            eCanSenseDead = 0x8,
        };
    };
};
