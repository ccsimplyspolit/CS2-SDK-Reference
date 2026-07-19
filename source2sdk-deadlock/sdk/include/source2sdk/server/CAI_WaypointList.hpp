#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct AI_Waypoint_t;
    };
};

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
        // Standard-layout class: true
        // Size: 0x8
        #pragma pack(push, 1)
        class CAI_WaypointList
        {
        public:
            source2sdk::server::AI_Waypoint_t* m_pFirstWaypoint; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_WaypointList, m_pFirstWaypoint) == 0x0);
        
        static_assert(sizeof(source2sdk::server::CAI_WaypointList) == 0x8);
    };
};
