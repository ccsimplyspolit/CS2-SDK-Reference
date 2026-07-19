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
        // Enumerator count: 8
        // Alignment: 4
        // Size: 0x4
        enum class EGCToGCMsg : std::uint32_t
        {
            k_EGCToGCMsgMasterAck = 0x96,
            k_EGCToGCMsgMasterAckResponse = 0x97,
            k_EGCToGCMsgRouted = 0x98,
            k_EGCToGCMsgRoutedReply = 0x99,
            k_EMsgUpdateSessionIP = 0x9a,
            k_EMsgRequestSessionIP = 0x9b,
            k_EMsgRequestSessionIPResponse = 0x9c,
            k_EGCToGCMsgMasterStartupComplete = 0x9d,
        };
    };
};
