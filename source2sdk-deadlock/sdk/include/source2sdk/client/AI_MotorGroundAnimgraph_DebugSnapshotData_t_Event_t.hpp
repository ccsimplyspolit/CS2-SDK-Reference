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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t
        {
        public:
            CUtlString description; // 0x0            
            VectorWS location; // 0x8            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t, description) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t, location) == 0x8);
        
        static_assert(sizeof(source2sdk::client::AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t) == 0x18);
    };
};
