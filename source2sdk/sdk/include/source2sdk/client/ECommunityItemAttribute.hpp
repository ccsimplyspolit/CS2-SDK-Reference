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
        // Enumerator count: 10
        // Alignment: 4
        // Size: 0x4
        enum class ECommunityItemAttribute : std::uint32_t
        {
            k_ECommunityItemAttribute_Invalid = 0x0,
            k_ECommunityItemAttribute_CardBorder = 0x1,
            k_ECommunityItemAttribute_Level = 0x2,
            k_ECommunityItemAttribute_IssueNumber = 0x3,
            k_ECommunityItemAttribute_TradableTime = 0x4,
            k_ECommunityItemAttribute_StorePackageID = 0x5,
            k_ECommunityItemAttribute_CommunityItemAppID = 0x6,
            k_ECommunityItemAttribute_CommunityItemType = 0x7,
            k_ECommunityItemAttribute_ProfileModiferEnabled = 0x8,
            k_ECommunityItemAttribute_ExpiryTime = 0x9,
        };
    };
};
