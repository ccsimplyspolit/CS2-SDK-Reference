#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flTime"
        #pragma pack(push, 1)
        class CCitadelAutoScaledTime
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTime; // 0x8            
            uint8_t _pad000c[0xc];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelAutoScaledTime, m_flTime) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CCitadelAutoScaledTime) == 0x18);
    };
};
