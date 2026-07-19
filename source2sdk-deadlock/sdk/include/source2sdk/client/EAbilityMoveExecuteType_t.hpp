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
        enum class EAbilityMoveExecuteType_t : std::uint8_t
        {
            EMoveExecute_TryPlayerMove = 0x0,
            EMoveExecute_FullWalkMove = 0x1,
            EMoveExecute_NoclipMove = 0x2,
            EMoveExecute_FlyMove = 0x3,
        };
    };
};
