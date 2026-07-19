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
        // Enumerator count: 7
        // Alignment: 4
        // Size: 0x4
        enum class ChatMsgPingMarkerInfo : std::uint32_t
        {
            // MPropertyFriendlyName "Show Ping Indicator at Ping Location, Play Ping Sound, and Play VO"
            k_EPingMarkerInfo_ShowMarkerAndSound = 0x0,
            // MPropertyFriendlyName "Show Ping Indicator on Pinging Player, Play Ping Sound, and Play VO"
            k_EPingMarkerInfo_ShowMarkerOnSender = 0x1,
            // MPropertyFriendlyName "No Marker or Sound (just VO)"
            k_EPingMarkerInfo_HideMarkerAndSound = 0x2,
            // MPropertyFriendlyName "Only Show Ping Indicator at Ping Location (no ping sound)"
            k_EPingMarkerInfo_OnlyShowMarker = 0x3,
            // MPropertyFriendlyName "Only Play Ping Sound (and VO)"
            k_EPingMarkerInfo_OnlyPlaySound = 0x4,
            // MPropertyFriendlyName "Only show on Minimap, no world, no sound"
            k_EPingMarkerInfo_OnlyMiniMap = 0x5,
            // MPropertyFriendlyName "No World, Just Minimap and sound"
            k_EPingMarkerInfo_NoMarkerYesSoundMiniMap = 0x6,
        };
    };
};
