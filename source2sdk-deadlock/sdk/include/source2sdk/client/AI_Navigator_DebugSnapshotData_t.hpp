#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_Navigator_DebugSnapshotData_t_Waypoint_t.hpp"
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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MDebugSnapshotDataRenderable
        // static metadata: MDebugSnapshotDataRenderByDefault
        #pragma pack(push, 1)
        struct AI_Navigator_DebugSnapshotData_t : public source2sdk::client::DebugSnapshotBaseStructuredData_t
        {
        public:
            CGlobalSymbol s_npc_nav_authority; // 0x8            
            VectorWS goal_actual_pos; // 0x10            
            VectorWS goal_base_pos; // 0x1c            
            // waypoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t> waypoints;
            char waypoints[0x18]; // 0x28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in AI_Navigator_DebugSnapshotData_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::AI_Navigator_DebugSnapshotData_t) == 0x40);
    };
};
