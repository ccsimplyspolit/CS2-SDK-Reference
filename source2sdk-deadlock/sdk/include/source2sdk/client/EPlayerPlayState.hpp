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
        enum class EPlayerPlayState : std::uint32_t
        {
            EPlayerStateInvalid = 0xffffffff,
            EPlayerActive = 0x0,
            EPlayerAwaitingHeroAssignment = 0x1,
            EPlayerChoosingHero = 0x2,
            EPlayerPlayStateCount = 0x3,
        };
    };
};
