#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Enumerator count: 6
        // Alignment: 4
        // Size: 0x4
        enum class CompositeMaterialInputContainerSourceType_t : std::uint32_t
        {
            // MPropertyFriendlyName "Target Material"
            CONTAINER_SOURCE_TYPE_TARGET_MATERIAL = 0x0,
            // MPropertyFriendlyName "Material from Target Material Attr"
            CONTAINER_SOURCE_TYPE_MATERIAL_FROM_TARGET_ATTR = 0x1,
            // MPropertyFriendlyName "Specified Material"
            CONTAINER_SOURCE_TYPE_SPECIFIC_MATERIAL = 0x2,
            // MPropertyFriendlyName "Loose Variables"
            CONTAINER_SOURCE_TYPE_LOOSE_VARIABLES = 0x3,
            // MPropertyFriendlyName "Variable from Target Material Attr"
            CONTAINER_SOURCE_TYPE_VARIABLE_FROM_TARGET_ATTR = 0x4,
            // MPropertyFriendlyName "Target Instance Material"
            CONTAINER_SOURCE_TYPE_TARGET_INSTANCE_MATERIAL = 0x5,
        };
    };
};
