#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelSpeedBoostTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelTunnelTrigger : public source2sdk::server::CCitadelSpeedBoostTrigger
        {
        public:
            uint8_t _pad08e8[0x1]; // 0x8e8
            bool m_bKillWhenNotTiny; // 0x8e9            
            uint8_t _pad08ea[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTunnelTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTunnelTrigger) == 0x8f0);
    };
};
