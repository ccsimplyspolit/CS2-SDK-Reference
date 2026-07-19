#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Enumerator count: 4
        // Alignment: 4
        // Size: 0x4
        enum class SmartPropPlaceMeshOrientationMode_t : std::uint32_t
        {
            // MPropertyFriendlyName "First Open Edge"
            // MPropertyDescription "Orientation of child elements placed on faces will be driven by position of center of first open edge relative to face center."
            FIRST_OPEN_EDGE = 0x0,
            // MPropertyFriendlyName "First Closed Edge"
            // MPropertyDescription "Orientation of child elements placed on faces will be driven by position of center of first closed edge relative to face center."
            FIRST_CLOSED_EDGE = 0x1,
            // MPropertyFriendlyName "UV Channel 1"
            // MPropertyDescription "Orientation of child elements placed on faces will be driven by orthonormalized UV basis at face center. U axis is prioritized during orthonormalization."
            UVMAP1 = 0x2,
            // MPropertyFriendlyName "UV Channel 2"
            // MPropertyDescription "Orientation of child elements placed on faces will be driven by orthonormalized UV basis at face center. U axis is prioritized during orthonormalization."
            UVMAP2 = 0x3,
        };
    };
};
