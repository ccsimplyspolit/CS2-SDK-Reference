#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x908
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerGameEvent : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlString m_strStartTouchEventName; // 0x8f0            
            CUtlString m_strEndTouchEventName; // 0x8f8            
            CUtlString m_strTriggerID; // 0x900            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetStartTouchEvent; // 0x0
            // CUtlSymbolLarge InputSetEndTouchEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerGameEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerGameEvent) == 0x908);
    };
};
