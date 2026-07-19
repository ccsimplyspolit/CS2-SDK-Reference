#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace scenesystem
    {
        // Enumerator count: 3
        // Alignment: 4
        // Size: 0x4
        enum class ESceneObjectMeshletVisualization : std::uint32_t
        {
            SCENEOBJECT_MESHLET_VIS_NONE = 0x0,
            SCENEOBJECT_MESHLET_VIS_MESHLET = 0x1,
            SCENEOBJECT_MESHLET_VIS_CULLED = 0x2,
        };
    };
};
