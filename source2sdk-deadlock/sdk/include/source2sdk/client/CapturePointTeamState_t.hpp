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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkStructNotInNetworkUtlVectorEmbedded
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CapturePointTeamState_t
        {
        public:
            // metadata: MNetworkEnable
            float m_flCaptureProgress; // 0x0            
            // metadata: MNetworkEnable
            std::int32_t m_nCapturerCount; // 0x4            
            // metadata: MNetworkEnable
            bool m_bIsBlocked; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CapturePointTeamState_t, m_flCaptureProgress) == 0x0);
        static_assert(offsetof(source2sdk::client::CapturePointTeamState_t, m_nCapturerCount) == 0x4);
        static_assert(offsetof(source2sdk::client::CapturePointTeamState_t, m_bIsBlocked) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CapturePointTeamState_t) == 0xc);
    };
};
