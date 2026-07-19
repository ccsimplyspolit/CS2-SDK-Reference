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
        // Alignment: 1
        // Size: 0x1
        enum class EPlayOfTheGameState : std::uint8_t
        {
            EPlayOfTheGameState_Inactive = 0x0,
            EPlayOfTheGameState_Intro = 0x1,
            EPlayOfTheGameState_Replaying = 0x2,
            EPlayOfTheGameState_Outro = 0x3,
        };
    };
};
