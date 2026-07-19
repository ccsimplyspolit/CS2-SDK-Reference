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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Constructor
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AI_Navigator_DebugSnapshotData_t_Waypoint_t
        {
        public:
            VectorWS position; // 0x0            
            std::uint32_t nav_type; // 0xc            
            std::uint32_t flags; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t, position) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t, nav_type) == 0xc);
        static_assert(offsetof(source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t, flags) == 0x10);
        
        static_assert(sizeof(source2sdk::client::AI_Navigator_DebugSnapshotData_t_Waypoint_t) == 0x14);
    };
};
