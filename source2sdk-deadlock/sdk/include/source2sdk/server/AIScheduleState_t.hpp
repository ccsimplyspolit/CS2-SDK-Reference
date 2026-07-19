#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_TaskFailureCode_t.hpp"
#include "source2sdk/server/TaskStatus_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct AIScheduleState_t
        {
        public:
            std::int32_t m_nCurTask; // 0x0            
            source2sdk::server::TaskStatus_t m_nTaskStatus; // 0x4            
            source2sdk::entity2::GameTime_t m_flTimeStarted; // 0x8            
            source2sdk::entity2::GameTime_t m_flTimeCurTaskStarted; // 0xc            
            source2sdk::server::AI_TaskFailureCode_t m_taskFailureCode; // 0x10            
            bool m_bScheduleWasInterrupted; // 0x12            
            uint8_t _pad0013[0x1];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_nCurTask) == 0x0);
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_nTaskStatus) == 0x4);
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_flTimeStarted) == 0x8);
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_flTimeCurTaskStarted) == 0xc);
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_taskFailureCode) == 0x10);
        static_assert(offsetof(source2sdk::server::AIScheduleState_t, m_bScheduleWasInterrupted) == 0x12);
        
        static_assert(sizeof(source2sdk::server::AIScheduleState_t) == 0x14);
    };
};
