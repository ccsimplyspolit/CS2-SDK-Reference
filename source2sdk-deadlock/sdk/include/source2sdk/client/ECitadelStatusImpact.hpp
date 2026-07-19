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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class ECitadelStatusImpact : std::uint32_t
        {
            None = 0x0,
            Stunned = 0x1,
            Cursed = 0x2,
            Asleep = 0x4,
            Silenced = 0x8,
            Disarmed = 0x10,
            Immobolized = 0x20,
        };
    };
};
