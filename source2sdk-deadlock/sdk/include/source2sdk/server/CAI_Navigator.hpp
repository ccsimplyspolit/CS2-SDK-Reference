#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/client/CSimTimer.hpp"
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_NavGoal_t.hpp"
#include "source2sdk/server/AI_NavSetGoalFlags_t.hpp"
#include "source2sdk/server/CAI_WaypointList.hpp"
#include "source2sdk/server/CNavSmartGoalHelper.hpp"
#include "source2sdk/server/Navigation_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_Path;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x350
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Navigator : public source2sdk::client::CAI_Component
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            float m_flGoalStoppingDistance; // 0x58            
            source2sdk::server::Navigation_t m_navType; // 0x5c            
            bool m_bNavComplete; // 0x60            
            uint8_t _pad0061[0x27]; // 0x61
            source2sdk::server::CAI_Path* m_pPath; // 0x88            
            // m_hLosTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLosTarget;
            char m_hLosTarget[0x4]; // 0x90            
            VectorWS m_vThreatPos; // 0x94            
            source2sdk::server::CAI_WaypointList m_interruptPathWaypoints; // 0xa0            
            source2sdk::entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0xa8            
            source2sdk::entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0xac            
            source2sdk::entity2::GameTime_t m_flStartWaitingForFacingTime; // 0xb0            
            uint8_t _pad00b4[0x4]; // 0xb4
            source2sdk::server::AI_NavGoal_t m_queuedGoal; // 0xb8            
            source2sdk::server::AI_NavSetGoalFlags_t m_queuedGoalFlags; // 0x178            
            bool m_bQueuedGoalSuccess; // 0x17c            
            uint8_t _pad017d[0x3]; // 0x17d
            CGlobalSymbol m_sQueuedGoalName; // 0x180            
            bool m_bPeerMoveWait; // 0x188            
            uint8_t _pad0189[0x3]; // 0x189
            // m_hPeerWaitingOn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPeerWaitingOn;
            char m_hPeerWaitingOn[0x4]; // 0x18c            
            source2sdk::client::CSimTimer m_PeerWaitMoveTimer; // 0x190            
            source2sdk::client::CSimTimer m_PeerWaitClearTimer; // 0x19c            
            source2sdk::client::CSimTimer m_NextSidestepTimer; // 0x1a8            
            // m_hBigStepGroundEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBigStepGroundEnt;
            char m_hBigStepGroundEnt[0x4]; // 0x1b4            
            // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastBlockingEnt;
            char m_hLastBlockingEnt[0x4]; // 0x1b8            
            VectorWS m_vPosBeginFailedSteer; // 0x1bc            
            source2sdk::entity2::GameTime_t m_timeBeginFailedSteer; // 0x1c8            
            std::int32_t m_nNavFailCounter; // 0x1cc            
            source2sdk::entity2::GameTime_t m_flLastNavFailTime; // 0x1d0            
            bool m_bShouldBruteForceFailedNav; // 0x1d4            
            bool m_bNavChangedAlongPath; // 0x1d5            
            uint8_t _pad01d6[0x2]; // 0x1d6
            std::int32_t m_nPreviousCollisionGroup; // 0x1d8            
            source2sdk::entity2::GameTime_t m_flLastNpcOverlapTime; // 0x1dc            
            float m_flGoalBlockedTolerance; // 0x1e0            
            float m_flWaypointBlockedTolerance; // 0x1e4            
            Vector m_vGoalDirection; // 0x1e8            
            // m_hGoalDirectionTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalDirectionTarget;
            char m_hGoalDirectionTarget[0x4]; // 0x1f4            
            float m_flGoalDirectionToleranceDot; // 0x1f8            
            float m_flGoalArrivalTolerance; // 0x1fc            
            source2sdk::client::StanceType_t m_eGoalStance; // 0x200            
            uint8_t _pad0204[0x4]; // 0x204
            CGlobalSymbol m_sGoalMovementGaitSet; // 0x208            
            float m_flArrivalFlyingSpeedScale; // 0x210            
            float m_flPathEndGoalRange; // 0x214            
            float m_flPathEndGoalRange_Repathing; // 0x218            
            float m_flGoalMaxPathLength; // 0x21c            
            float m_flGoalMaxTravelDist; // 0x220            
            uint8_t _pad0224[0x4]; // 0x224
            CUtlString m_pathRestrictionTag; // 0x228            
            uint8_t _pad0230[0x18]; // 0x230
            source2sdk::server::CNavSmartGoalHelper m_smartGoalHelper; // 0x248            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Navigator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Navigator) == 0x350);
    };
};
