#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/navlib/NavGravity_t.hpp"
#include "source2sdk/server/AI_NavGoalFlags_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/NavGoalType_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Path
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MSaveOpsForField
            source2sdk::server::CAI_WaypointList m_Waypoints; // 0x8            
            VectorWS m_vPrevWaypoint; // 0x10            
            VectorWS m_vPrevWaypointBase; // 0x1c            
            // metadata: MSaveOpsForField
            source2sdk::server::CAI_WaypointList m_WaypointsLocal; // 0x28            
            uint8_t _pad0030[0x8]; // 0x30
            std::uint32_t m_nLocalPathHash; // 0x38            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x3c            
            Vector m_vTargetOffset; // 0x40            
            bool m_bGoalPosSet; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            VectorWS m_vGoalActualPos; // 0x50            
            VectorWS m_vGoalBasePos; // 0x5c            
            VectorWS m_vGoalActualPos_Initial; // 0x68            
            VectorWS m_vGoalBasePos_Initial; // 0x74            
            VectorWS m_vGoalPosBlocked; // 0x80            
            source2sdk::navlib::NavGravity_t m_GravityAtGoalPos; // 0x8c            
            bool m_bGoalTypeSet; // 0x9c            
            uint8_t _pad009d[0x3]; // 0x9d
            source2sdk::server::NavGoalType_t m_goalType; // 0xa0            
            source2sdk::server::AI_NavGoalFlags_t m_goalFlags; // 0xa4            
            source2sdk::entity2::GameTime_t m_flGoalChangeTime; // 0xa8            
            source2sdk::entity2::GameTime_t m_flPathChangeTime; // 0xac            
            float m_flDistAdvancedToCurWaypoint; // 0xb0            
            uint8_t _pad00b4[0x10]; // 0xb4
            bool m_bOnMovableNavMesh; // 0xc4            
            uint8_t _pad00c5[0x3]; // 0xc5
            std::uint32_t m_unGoalActualMovableMeshId; // 0xc8            
            std::uint32_t m_unGoalBaseMovableMeshId; // 0xcc            
            std::uint32_t m_unPrevWaypointMovableMeshId; // 0xd0            
            std::uint32_t m_unPrevWaypointBaseMovableMeshId; // 0xd4            
            std::uint32_t m_unGoalActualMovableMeshId_Initial; // 0xd8            
            std::uint32_t m_unGoalBaseMovableMeshId_Initial; // 0xdc            
            std::uint32_t m_unGoalPosBlockedMovableMeshId; // 0xe0            
            uint8_t _pad00e4[0x4];
            
            // Datamap fields:
            // int32_t m_nNavHullIdx; // 0xc0
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Path, m_Waypoints) == 0x8);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vPrevWaypoint) == 0x10);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vPrevWaypointBase) == 0x1c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_WaypointsLocal) == 0x28);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_nLocalPathHash) == 0x38);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_hTarget) == 0x3c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vTargetOffset) == 0x40);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_bGoalPosSet) == 0x4c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vGoalActualPos) == 0x50);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vGoalBasePos) == 0x5c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vGoalActualPos_Initial) == 0x68);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vGoalBasePos_Initial) == 0x74);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_vGoalPosBlocked) == 0x80);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_GravityAtGoalPos) == 0x8c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_bGoalTypeSet) == 0x9c);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_goalType) == 0xa0);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_goalFlags) == 0xa4);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_flGoalChangeTime) == 0xa8);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_flPathChangeTime) == 0xac);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_flDistAdvancedToCurWaypoint) == 0xb0);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_bOnMovableNavMesh) == 0xc4);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unGoalActualMovableMeshId) == 0xc8);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unGoalBaseMovableMeshId) == 0xcc);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unPrevWaypointMovableMeshId) == 0xd0);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unPrevWaypointBaseMovableMeshId) == 0xd4);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unGoalActualMovableMeshId_Initial) == 0xd8);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unGoalBaseMovableMeshId_Initial) == 0xdc);
        static_assert(offsetof(source2sdk::server::CAI_Path, m_unGoalPosBlockedMovableMeshId) == 0xe0);
        
        static_assert(sizeof(source2sdk::server::CAI_Path) == 0xe8);
    };
};
