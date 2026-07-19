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
        enum class C4LightEffect_t : std::uint32_t
        {
            eLightEffectNone = 0x0,
            eLightEffectDropped = 0x1,
            eLightEffectThirdPersonHeld = 0x2,
        };
    };
};
