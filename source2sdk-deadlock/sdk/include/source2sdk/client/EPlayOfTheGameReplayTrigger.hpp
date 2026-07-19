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
        // Alignment: 1
        // Size: 0x1
        enum class EPlayOfTheGameReplayTrigger : std::uint8_t
        {
            EPlayOfTheGameReplayTrigger_Invalid = 0x0,
            EPlayOfTheGameReplayTrigger_HeroCalloutMajor = 0x1,
            EPlayOfTheGameReplayTrigger_HeroCalloutMinor = 0x2,
            EPlayOfTheGameReplayTrigger_BeginOutro = 0x3,
            EPlayOfTheGameReplayTrigger_RemoveIntro = 0x4,
        };
    };
};
