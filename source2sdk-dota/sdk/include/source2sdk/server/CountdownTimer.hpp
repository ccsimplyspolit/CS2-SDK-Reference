#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x18
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CountdownTimer
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_duration; // 0x8            
            source2sdk::entity2::GameTime_t m_timestamp; // 0xc            
            float m_timescale; // 0x10            
            WorldGroupId_t m_nWorldGroupId; // 0x14            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CountdownTimer, m_duration) == 0x8);
        static_assert(offsetof(source2sdk::server::CountdownTimer, m_timestamp) == 0xc);
        static_assert(offsetof(source2sdk::server::CountdownTimer, m_timescale) == 0x10);
        static_assert(offsetof(source2sdk::server::CountdownTimer, m_nWorldGroupId) == 0x14);
        
        static_assert(sizeof(source2sdk::server::CountdownTimer) == 0x18);
    };
};
