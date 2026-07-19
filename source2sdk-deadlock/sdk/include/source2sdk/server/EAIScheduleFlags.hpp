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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class EAIScheduleFlags : std::uint32_t
        {
            SCHEDULE_FLAGS_NONE = 0x0,
            SCHEDULE_FLAGS_ABILITY = 0x1,
            SCHEDULE_FLAGS_INTERRUPT_ACTIVE_HANDSHAKES = 0x2,
            SCHEDULE_FLAGS_CANNOT_BE_INTERRUPTED_BY_SYNCHRONIZED_ABILITY = 0x4,
            SCHEDULE_FLAGS_CANNOT_BE_INTERRUPTED_BY_INCAPACITATION = 0x8,
            SCHEDULE_FLAGS_CONTROLS_NAVIGATION = 0x10,
            SCHEDULE_FLAGS_BODY_AUTHORITY_FULL = 0x20,
            SCHEDULE_FLAGS_BODY_AUTHORITY_NONE = 0x40,
            SCHEDULE_FLAGS_IS_FORCED_GO_SCHEDULE = 0x80,
        };
    };
};
