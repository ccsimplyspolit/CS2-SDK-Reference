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
        enum class EntitySubclassScope_t : std::uint32_t
        {
            SUBCLASS_SCOPE_NONE = 0xffffffff,
            // MPropertyFriendlyName "Misc"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_MISC = 0x0,
            // MPropertyFriendlyName "Precipitation"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_PRECIPITATION = 0x1,
            // MPropertyFriendlyName "Modifiers"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_MODIFIERS = 0x2,
            // MPropertyFriendlyName "NPCUnit"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_NPC_UNITS = 0x3,
            // MPropertyFriendlyName "Abilities"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_ABILITIES = 0x4,
            // MPropertyFriendlyName "ScaleFunctions"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_SCALE_FUNCTIONS = 0x5,
            // MPropertyFriendlyName "Loot Tables"
            // MEntitySubclassScopeFile
            SUBCLASS_SCOPE_LOOT_TABLES = 0x6,
            SUBCLASS_SCOPE_COUNT = 0x7,
        };
    };
};
