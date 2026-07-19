#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelSpeedBoostTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa88
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelTunnelTrigger : public source2sdk::client::CCitadelSpeedBoostTrigger
        {
        public:
            bool m_bKillWhenNotTiny; // 0xa80            
            uint8_t _pad0a81[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTunnelTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelTunnelTrigger) == 0xa88);
    };
};
