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
        // Enumerator count: 2
        // Alignment: 4
        // Size: 0x4
        enum class EAttachmentSourceType : std::uint32_t
        {
            // MPropertyFriendlyName "Model Gun Muzzles"
            EAttachmentSource_WeaponMuzzles = 0x0,
            // MPropertyFriendlyName "Custom"
            EAttachmentSource_Custom = 0x1,
        };
    };
};
