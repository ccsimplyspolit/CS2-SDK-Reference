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
        // Enumerator count: 15
        // Alignment: 4
        // Size: 0x4
        enum class EGCBaseMsg : std::uint32_t
        {
            k_EMsgGCSystemMessage = 0xfa1,
            k_EMsgGCReplicateConVars = 0xfa2,
            k_EMsgGCConVarUpdated = 0xfa3,
            k_EMsgGCInQueue = 0xfa8,
            k_EMsgGCInviteToParty = 0x1195,
            k_EMsgGCInvitationCreated = 0x1196,
            k_EMsgGCPartyInviteResponse = 0x1197,
            k_EMsgGCKickFromParty = 0x1198,
            k_EMsgGCLeaveParty = 0x1199,
            k_EMsgGCServerAvailable = 0x119a,
            k_EMsgGCClientConnectToServer = 0x119b,
            k_EMsgGCGameServerInfo = 0x119c,
            k_EMsgGCError = 0x119d,
            k_EMsgGCReplay_UploadedToYouTube = 0x119e,
            k_EMsgGCLANServerAvailable = 0x119f,
        };
    };
};
