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
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x4
        enum class EAbilityTargetingLocation_t : std::uint32_t
        {
            // MPropertyDescription "Has no targeting location. Idk what this does."
            CITADEL_ABILITY_TARGETING_LOCATION_NONE = 0x0,
            // MPropertyDescription "Targets the caster, and sets the position to be the caster's center."
            CITADEL_ABILITY_TARGETING_LOCATION_SELF = 0x1,
            // MPropertyDescription "Targets a specific unit that passes the filter. Can target multiple entities, by increasing the AbilityUnitTargetLimit property."
            CITADEL_ABILITY_TARGETING_LOCATION_UNIT = 0x2,
            // MPropertyDescription "Targets a SURFACE (not the ground), and fails if no surface is within reach of AbilityRange."
            CITADEL_ABILITY_TARGETING_LOCATION_GROUND = 0x3,
            // MPropertyDescription "Targets a unit closest to the surface center.  If there is no unit, functions like TARGETING_LOCATION_GROUND"
            CITADEL_ABILITY_TARGETING_LOCATION_UNIT_OR_GROUND = 0x4,
            // MPropertyDescription "Targets the ground a fixed distance away from the caster, and drop down. Fails if no target is found."
            CITADEL_ABILITY_TARGETING_LOCATION_FIXED_RANGE_GROUND = 0x5,
            // MPropertyDescription "Targets a position on the minimap. Dunno how this handles elevation."
            CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_GROUND = 0x6,
            // MPropertyDescription "Targets a unit on the minimap that passes the filter."
            CITADEL_ABILITY_TARGETING_LOCATION_MINIMAP_UNIT = 0x7,
            CITADEL_ABILITY_TARGETING_LOCATION_CUSTOM = 0x8,
            // MPropertyDescription "Deployment targeting. Specifics around the location is defined by DeploymentInfo_t."
            CITADEL_ABILITY_TARGETING_LOCATION_DEPLOYED_OBJECT = 0x9,
            // MPropertySuppressEnumerator
            CITADEL_ABILITY_TARGETING_LOCATION_COUNT = 0xa,
        };
    };
};
