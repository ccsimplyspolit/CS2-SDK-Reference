#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_FollowConstraint_t.hpp"
#include "source2sdk/server/CFuncMover_FollowEntityDirection_t.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_PathRebuildStrategy_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
#include "source2sdk/server/FuncMoverMovementSummary_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xa30
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x770            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x778            
            // m_hPrevPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPrevPathMover;
            char m_hPrevPathMover[0x4]; // 0x77c            
            CUtlSymbolLarge m_iszPathNodeStart; // 0x780            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x788            
            bool m_bIgnoreEndNode; // 0x790            
            uint8_t _pad0791[0x3]; // 0x791
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x794            
            bool m_bIsReversing; // 0x798            
            uint8_t _pad0799[0x3]; // 0x799
            float m_flStartSpeed; // 0x79c            
            float m_flPathLocation; // 0x7a0            
            float m_flT; // 0x7a4            
            std::int32_t m_nCurrentNodeIndex; // 0x7a8            
            std::int32_t m_nPreviousNodeIndex; // 0x7ac            
            source2sdk::client::SolidType_t m_eSolidType; // 0x7b0            
            bool m_bIsMoving; // 0x7b1            
            uint8_t _pad07b2[0x2]; // 0x7b2
            float m_flTimeToReachMaxSpeed; // 0x7b4            
            float m_flDistanceToReachMaxSpeed; // 0x7b8            
            float m_flTimeToReachZeroSpeed; // 0x7bc            
            float m_flComputedDistanceToReachMaxSpeed; // 0x7c0            
            float m_flComputedDistanceToReachZeroSpeed; // 0x7c4            
            float m_flStartCurveScale; // 0x7c8            
            float m_flStopCurveScale; // 0x7cc            
            float m_flDistanceToReachZeroSpeed; // 0x7d0            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x7d4            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x7d8            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x7dc            
            float m_flPathLocationToBeginStop; // 0x7e0            
            float m_flPathLocationStart; // 0x7e4            
            float m_flBeginStopT; // 0x7e8            
            uint8_t _pad07ec[0x4]; // 0x7ec
            CGameSoundEventName m_iszStartForwardSound; // 0x7f0            
            CGameSoundEventName m_iszLoopForwardSound; // 0x7f8            
            CGameSoundEventName m_iszStopForwardSound; // 0x800            
            CGameSoundEventName m_iszStartReverseSound; // 0x808            
            CGameSoundEventName m_iszLoopReverseSound; // 0x810            
            CGameSoundEventName m_iszStopReverseSound; // 0x818            
            CGameSoundEventName m_iszArriveAtDestinationSound; // 0x820            
            uint8_t _pad0828[0x18]; // 0x828
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x840            
            bool m_bStartAtClosestPoint; // 0x858            
            bool m_bStartAtEnd; // 0x859            
            bool m_bStartFollowingClosestMover; // 0x85a            
            uint8_t _pad085b[0x1]; // 0x85b
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x85c            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x860            
            float m_flTimeToBlendToNewOrientation; // 0x864            
            float m_flDurationBlendToNewOrientationRan; // 0x868            
            bool m_bCreateMovableNavMesh; // 0x86c            
            bool m_bCreateMovableSurfaceGraph; // 0x86d            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x86e            
            uint8_t _pad086f[0x1]; // 0x86f
            // m_OnNodePassed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnNodePassed;
            char m_OnNodePassed[0x20]; // 0x870            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x890            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x898            
            float m_flTimeToTraverseToNextNode; // 0x89c            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x8a0            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x8ac            
            float m_flLerpToPositionT; // 0x8b8            
            float m_flLerpToPositionDeltaT; // 0x8bc            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x8c0            
            bool m_bIsPaused; // 0x8d8            
            uint8_t _pad08d9[0x3]; // 0x8d9
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x8dc            
            Quaternion m_qTransitionSourceOrientation; // 0x8e0            
            std::int32_t m_nDelayedTeleportToNode; // 0x8f0            
            bool m_bIsImGuiLogging; // 0x8f4            
            bool m_bIsImGuiEntTextLogging; // 0x8f5            
            uint8_t _pad08f6[0x2]; // 0x8f6
            float m_flSpeed; // 0x8f8            
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x8fc            
            float m_flFollowDistance; // 0x900            
            float m_flFollowMinimumSpeed; // 0x904            
            float m_flCurFollowEntityT; // 0x908            
            float m_flCurFollowSpeed; // 0x90c            
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x910            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x4]; // 0x918            
            uint8_t _pad091c[0x4]; // 0x91c
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x938            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x950            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x968            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x980            
            bool m_bNextNodeReturnsCurrent; // 0x998            
            bool m_bStartedMoving; // 0x999            
            uint8_t _pad099a[0x1e]; // 0x99a
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0x9b8            
            // m_hFollowMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMover> m_hFollowMover;
            char m_hFollowMover[0x4]; // 0x9bc            
            CUtlSymbolLarge m_iszFollowEntityName; // 0x9c0            
            CUtlSymbolLarge m_iszFollowMoverEntityName; // 0x9c8            
            float m_flFollowMoverDistance; // 0x9d0            
            float m_flFollowMoverRatio; // 0x9d4            
            float m_flFollowMoverCalculatedDistance; // 0x9d8            
            float m_flFollowMoverSpringStrength; // 0x9dc            
            std::int32_t m_nFollowMoverConstraintPriority; // 0x9e0            
            Vector2D m_vecFollowMoverCouplerRange; // 0x9e4            
            bool m_bFollowConstraintsInitialized; // 0x9ec            
            uint8_t _pad09ed[0x3]; // 0x9ed
            source2sdk::server::CFuncMover_FollowConstraint_t m_eFollowConstraint; // 0x9f0            
            float m_flFollowMoverSpeed; // 0x9f4            
            float m_flFollowMoverVelocity; // 0x9f8            
            source2sdk::entity2::GameTick_t m_nTickMovementRan; // 0x9fc            
            source2sdk::server::FuncMoverMovementSummary_t m_movementSummary; // 0xa00            
            bool m_bStopFromBeginStopTarget; // 0xa20            
            bool m_bQueueStop; // 0xa21            
            bool m_bQueueStopMoving; // 0xa22            
            bool m_bQueueSetupPathMover; // 0xa23            
            source2sdk::server::CFuncMover_PathRebuildStrategy_t m_ePathRebuildStrategy; // 0xa24            
            uint8_t _pad0a28[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa30);
    };
};
