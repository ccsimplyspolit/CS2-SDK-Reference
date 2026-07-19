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
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class EUnlockStyle : std::uint32_t
        {
            k_UnlockStyle_Succeeded = 0x0,
            k_UnlockStyle_Failed_PreReq = 0x1,
            k_UnlockStyle_Failed_CantAfford = 0x2,
            k_UnlockStyle_Failed_CantCommit = 0x3,
            k_UnlockStyle_Failed_CantLockCache = 0x4,
            k_UnlockStyle_Failed_CantAffordAttrib = 0x5,
        };
    };
};
