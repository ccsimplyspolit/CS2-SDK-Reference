#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        class EngineCountdownTimer
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            float m_duration; // 0x8            
            // metadata: MKV3TransferSaveOpsForField
            float m_timestamp; // 0xc            
            float m_timescale; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::EngineCountdownTimer, m_duration) == 0x8);
        static_assert(offsetof(source2sdk::server::EngineCountdownTimer, m_timestamp) == 0xc);
        static_assert(offsetof(source2sdk::server::EngineCountdownTimer, m_timescale) == 0x10);
        
        static_assert(sizeof(source2sdk::server::EngineCountdownTimer) == 0x18);
    };
};
