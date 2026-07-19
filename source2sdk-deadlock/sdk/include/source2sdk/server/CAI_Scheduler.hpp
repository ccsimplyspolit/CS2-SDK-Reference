#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/AIScheduleState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Scheduler : public source2sdk::client::CAI_Component
        {
        public:
            source2sdk::server::AIScheduleState_t m_ScheduleState; // 0x50            
            uint8_t _pad0064[0xc]; // 0x64
            // metadata: MNotSaved
            CUtlSymbolLarge m_failSchedule; // 0x70            
            // metadata: MNotSaved
            CUtlSymbolLarge m_translatedSchedule; // 0x78            
            // metadata: MNotSaved
            CUtlSymbolLarge m_untranslatedSchedule; // 0x80            
            uint8_t _pad0088[0x20]; // 0x88
            // metadata: MNotSaved
            CUtlString m_sInterruptText; // 0xa8            
            
            // Datamap fields:
            // void m_pSchedule; // 0x68
            // void m_pFailedSchedule; // 0x88
            // void m_pInterruptedSchedule; // 0xa0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Scheduler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Scheduler) == 0xb0);
    };
};
