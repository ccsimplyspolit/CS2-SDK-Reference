#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class UpscalerType_t : std::uint32_t
        {
            UPSCALER_NONE = 0x0,
            UPSCALER_AMD_FSR2 = 0x1,
            UPSCALER_AMD_FSR3 = 0x2,
            UPSCALER_NVIDIA_DLSS = 0x3,
            UPSCALER_INTEL_XESS = 0x4,
            UPSCALER_COUNT = 0x5,
        };
    };
};
