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
        // Enumerator count: 7
        // Alignment: 1
        // Size: 0x1
        enum class HandshakeState_t : std::uint8_t
        {
            eInactive = 0x0,
            eWaitingToBecomeInactive = 0x1,
            eWaitingToBecomeActive = 0x2,
            eWaitingToFinish = 0x3,
            eWaitingForScriptedSequence = 0x4,
            eRestartingFromScriptedSequence = 0x5,
            eFinished = 0x6,
        };
    };
};
