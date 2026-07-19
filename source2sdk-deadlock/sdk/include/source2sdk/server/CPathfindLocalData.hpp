#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/WaypointFlags_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CPathfindLocalData
        {
        public:
            VectorWS m_vLocalStart; // 0x0            
            VectorWS m_vLocalEnd; // 0xc            
            uint8_t _pad0018[0x8]; // 0x18
            source2sdk::server::WaypointFlags_t m_nEndFlags; // 0x20            
            std::int32_t m_nBuildFlags; // 0x24            
            float m_flYaw; // 0x28            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CPathfindLocalData, m_vLocalStart) == 0x0);
        static_assert(offsetof(source2sdk::server::CPathfindLocalData, m_vLocalEnd) == 0xc);
        static_assert(offsetof(source2sdk::server::CPathfindLocalData, m_nEndFlags) == 0x20);
        static_assert(offsetof(source2sdk::server::CPathfindLocalData, m_nBuildFlags) == 0x24);
        static_assert(offsetof(source2sdk::server::CPathfindLocalData, m_flYaw) == 0x28);
        
        static_assert(sizeof(source2sdk::server::CPathfindLocalData) == 0x30);
    };
};
