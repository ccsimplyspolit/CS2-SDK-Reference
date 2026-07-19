#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_MotorServices_DebugSnapshotData_t_MotorPathWaypoint_t.hpp"

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
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Motor Services"
        // static metadata: MDebugSnapshotDataRenderFn
        #pragma pack(push, 1)
        struct AI_MotorServices_DebugSnapshotData_t
        {
        public:
            CGlobalSymbol active_motor; // 0x0            
            float desired_speed; // 0x8            
            Vector motor_velocity; // 0xc            
            // motor_path has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_MotorServices_DebugSnapshotData_t_MotorPathWaypoint_t> motor_path;
            char motor_path[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_MotorServices_DebugSnapshotData_t, active_motor) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_MotorServices_DebugSnapshotData_t, desired_speed) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_MotorServices_DebugSnapshotData_t, motor_velocity) == 0xc);
        static_assert(offsetof(source2sdk::client::AI_MotorServices_DebugSnapshotData_t, motor_path) == 0x18);
        
        static_assert(sizeof(source2sdk::client::AI_MotorServices_DebugSnapshotData_t) == 0x30);
    };
};
