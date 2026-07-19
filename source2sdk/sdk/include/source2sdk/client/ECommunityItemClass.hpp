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
        enum class ECommunityItemClass : std::uint32_t
        {
            k_ECommunityItemClass_Invalid = 0x0,
            k_ECommunityItemClass_Badge = 0x1,
            k_ECommunityItemClass_GameCard = 0x2,
            k_ECommunityItemClass_ProfileBackground = 0x3,
            k_ECommunityItemClass_Emoticon = 0x4,
            k_ECommunityItemClass_BoosterPack = 0x5,
            k_ECommunityItemClass_Consumable = 0x6,
            k_ECommunityItemClass_GameGoo = 0x7,
            k_ECommunityItemClass_ProfileModifier = 0x8,
            k_ECommunityItemClass_Scene = 0x9,
            k_ECommunityItemClass_SalienItem = 0xa,
        };
    };
};
