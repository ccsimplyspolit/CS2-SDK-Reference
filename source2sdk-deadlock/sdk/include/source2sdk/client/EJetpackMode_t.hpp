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
        enum class EJetpackMode_t : std::uint8_t
        {
            EJetpackMode_None = 0x0,
            EJetpackMode_Default = 0x1,
            EJetpackMode_Hover = 0x2,
            EJetpackMode_WallAttach = 0x3,
            EJetpackMode_VTOL = 0x4,
        };
    };
};
