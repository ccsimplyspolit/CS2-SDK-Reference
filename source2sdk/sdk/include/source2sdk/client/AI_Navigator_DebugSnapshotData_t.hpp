#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_Navigator_DebugSnapshotData_t_Waypoint_t.hpp"

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
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Navigator"
        // static metadata: MDebugSnapshotDataRenderFn
        #pragma pack(push, 1)
        struct AI_Navigator_DebugSnapshotData_t
        {
        public:
            CGlobalSymbol s_movement_id; // 0x0            
            std::uint32_t s_movement_serial_number; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            CUtlString s_goal_source_location; // 0x10            
            VectorWS last_waypoint_pos; // 0x18            
            VectorWS goal_location; // 0x24            
            // waypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t> waypoints;
            char waypoints[0x18]; // 0x30            
            CGlobalSymbol s_arrival_movement_gait_set; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, s_movement_id) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, s_movement_serial_number) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, s_goal_source_location) == 0x10);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, last_waypoint_pos) == 0x18);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, goal_location) == 0x24);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, waypoints) == 0x30);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t, s_arrival_movement_gait_set) == 0x48);
        
        static_assert(sizeof(source2sdk::client::AI_Navigator_DebugSnapshotData_t) == 0x50);
    };
};
