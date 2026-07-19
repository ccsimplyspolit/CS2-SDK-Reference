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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x108
        // Has VTable
        #pragma pack(push, 1)
        class CNavSmartGoalHelper
        {
        public:
            uint8_t _pad0000[0x100]; // 0x0
            bool m_bExecuteQueuedGoal; // 0x100            
            uint8_t _pad0101[0x7];
            
            // Datamap fields:
            // void m_pNPC; // 0x8
            // void m_pGoalAutoDoor; // 0x10
            // void m_pGoalPrimary; // 0x20
            // void m_pQueuedSmartGoal; // 0x30
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CNavSmartGoalHelper, m_bExecuteQueuedGoal) == 0x100);
        
        static_assert(sizeof(source2sdk::server::CNavSmartGoalHelper) == 0x108);
    };
};
