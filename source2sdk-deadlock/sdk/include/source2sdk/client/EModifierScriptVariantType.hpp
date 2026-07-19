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
        // Enumerator count: 5
        // Alignment: 4
        // Size: 0x4
        enum class EModifierScriptVariantType : std::uint32_t
        {
            // MPropertyFriendlyName "Float"
            MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT = 0x0,
            // MPropertyFriendlyName "Model"
            MODIFIER_SCRIPT_VARIANT_MODEL = 0x1,
            // MPropertyFriendlyName "Particle"
            MODIFIER_SCRIPT_VARIANT_PARTICLE = 0x2,
            // MPropertyFriendlyName "Bool"
            MODIFIER_SCRIPT_VARIANT_MODIFIER_BOOLEAN = 0x3,
            // MPropertyFriendlyName "Int"
            MODIFIER_SCRIPT_VARIANT_MODIFIER_INTEGER = 0x4,
        };
    };
};
