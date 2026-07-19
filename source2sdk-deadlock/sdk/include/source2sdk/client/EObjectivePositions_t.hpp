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
        // Enumerator count: 9
        // Alignment: 4
        // Size: 0x4
        enum class EObjectivePositions_t : std::uint32_t
        {
            EObjectivePosition_Invalid = 0xffffffff,
            EObjectivePosition_CrateGarden = 0x0,
            EObjectivePosition_CrateCemetery = 0x1,
            EObjectivePosition_CrateMid = 0x2,
            EObjectivePosition_Mid = 0x3,
            EObjectivePosition_CrateSapphireBiasGreen = 0x4,
            EObjectivePosition_CrateSapphireBiasYellow = 0x5,
            EObjectivePosition_CrateAmberBiasGreen = 0x6,
            EObjectivePosition_CrateAmberBiasYellow = 0x7,
        };
    };
};
