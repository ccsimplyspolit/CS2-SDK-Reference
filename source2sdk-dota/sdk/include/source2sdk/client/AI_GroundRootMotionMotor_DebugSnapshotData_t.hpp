#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_GroundRootMotionMotor_DebugSnapshotData_t_Event_t.hpp"
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
        // Size: 0x88
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Ground Root Motion Motor"
        #pragma pack(push, 1)
        struct AI_GroundRootMotionMotor_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol desired_movement_gait_set; // 0x8            
            CGlobalSymbol desired_movement_gait; // 0x10            
            CGlobalSymbol current_movement_gait_set; // 0x18            
            CGlobalSymbol current_movement_gait; // 0x20            
            CGlobalSymbol movement_setting_id; // 0x28            
            CGlobalSymbol gait_switch_blocked_reason; // 0x30            
            bool b_goal_completion_allowed; // 0x38            
            uint8_t _pad0039[0x7]; // 0x39
            CGlobalSymbol state; // 0x40            
            std::int32_t n_state_active_tick_count; // 0x48            
            bool b_has_path; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            float f_remaining_ground_path_length; // 0x50            
            float f_current_speed; // 0x54            
            CGlobalSymbol move_type; // 0x58            
            float f_forward_strafing_angle_actual; // 0x60            
            float f_forward_strafing_angle_desired; // 0x64            
            float f_current_lean; // 0x68            
            float f_target_lean; // 0x6c            
            // vec_events has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_GroundRootMotionMotor_DebugSnapshotData_t_Event_t> vec_events;
            char vec_events[0x18]; // 0x70            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_GroundRootMotionMotor_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_GroundRootMotionMotor_DebugSnapshotData_t) == 0x88);
    };
};
