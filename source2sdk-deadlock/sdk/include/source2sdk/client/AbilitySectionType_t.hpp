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
        enum class AbilitySectionType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Innate"
            EArea_Innate = 0x0,
            // MPropertyFriendlyName "Passive"
            EArea_Passive = 0x1,
            // MPropertyFriendlyName "Active"
            EArea_Active = 0x2,
        };
    };
};
