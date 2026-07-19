#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Enumerator count: 22
        // Alignment: 4
        // Size: 0x4
        enum class NavAttributeDynamicType : std::uint32_t
        {
            // MEnumeratorIsNotAFlag
            NAV_AREA_NONE = 0x0,
            NAV_AREA_UNDER_WATER = 0x1,
            NAV_AREA_UNDER_WATER_DEEP = 0x2,
            NAV_AREA_EXTERNALLY_CREATED = 0x4,
            NAV_AREA_SHOULD_BE_DESTROYED = 0x8,
            NAV_AREA_CREATED_BY_OBSTACLE_MGR = 0x10,
            NAV_AREA_SPLIT_BY_OBSTACLE_MGR = 0x20,
            NAV_AREA_SPLIT_OBS_CONTAINED = 0x40,
            NAV_AREA_SPLIT_OBS_BASE_CONTAINED = 0x80,
            NAV_AREA_HAS_LADDERS = 0x100,
            NAV_AREA_NAV_LINK = 0x200,
            NAV_AREA_NAV_LINK_TERMINUS = 0x400,
            NAV_AREA_CONNECTED_TO_NAV_LINK_OUT = 0x800,
            NAV_AREA_CONNECTED_TO_NAV_LINK_IN = 0x1000,
            NAV_AREA_MOVABLE = 0x2000,
            NAV_AREA_DOCK = 0x4000,
            NAV_AREA_DOCKING_CANDIDATE = 0x8000,
            NAV_AREA_BOUNDARY = 0x10000,
            NAV_AREA_HAS_TACTICAL_SEARCH_ANNOTATIONS = 0x20000,
            NAV_AREA_DEFORMABLE = 0x40000,
            NAV_AREA_DEFORMABLE_DOCK = 0x80000,
            NAV_AREA_LINK_AUTO_ADJUST = 0x100000,
        };
    };
};
