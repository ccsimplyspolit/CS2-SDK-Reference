#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t.hpp"
#include "source2sdk/client/DebugSnapshotBaseStructuredData_t.hpp"

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
        // Size: 0x48
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_MotorGroundAnimgraph_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol state; // 0x8            
            bool b_has_path; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            float f_remaining_ground_path_length; // 0x14            
            float f_current_speed; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CGlobalSymbol move_type; // 0x20            
            float f_move_heading_actual; // 0x28            
            float f_move_heading_desired; // 0x2c            
            // vec_events has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_MotorGroundAnimgraph_DebugSnapshotData_t_Event_t> vec_events;
            char vec_events[0x18]; // 0x30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_MotorGroundAnimgraph_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_MotorGroundAnimgraph_DebugSnapshotData_t) == 0x48);
    };
};
