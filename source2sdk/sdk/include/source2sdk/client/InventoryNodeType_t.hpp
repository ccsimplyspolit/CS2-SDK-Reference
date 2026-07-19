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
        enum class InventoryNodeType_t : std::uint32_t
        {
            NODE_TYPE_INVALID = 0x0,
            VIRTUAL_NODE_SCHEMA_PREFAB = 0x1,
            VIRTUAL_NODE_SCHEMA_ITEMDEF = 0x2,
            VIRTUAL_NODE_SCHEMA_STICKER = 0x3,
            VIRTUAL_NODE_SCHEMA_KEYCHAIN = 0x4,
            CONCRETE_NODE_SCHEMA_PREFAB = 0x5,
            CONCRETE_NODE_SCHEMA_ITEMDEF = 0x6,
            CONCRETE_NODE_SCHEMA_STICKER = 0x7,
            CONCRETE_NODE_SCHEMA_KEYCHAIN = 0x8,
        };
    };
};
