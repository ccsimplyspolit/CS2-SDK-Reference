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
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
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
        // Size: 0xa00
        // Has VTable
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x780            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x788            
            // m_hPrevPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPrevPathMover;
            char m_hPrevPathMover[0x4]; // 0x78c            
            CUtlSymbolLarge m_iszPathNodeStart; // 0x790            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x798            
            bool m_bIgnoreEndNode; // 0x7a0            
            uint8_t _pad07a1[0x3]; // 0x7a1
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x7a4            
            bool m_bIsReversing; // 0x7a8            
            uint8_t _pad07a9[0x3]; // 0x7a9
            float m_flStartSpeed; // 0x7ac            
            float m_flPathLocation; // 0x7b0            
            float m_flT; // 0x7b4            
            std::int32_t m_nCurrentNodeIndex; // 0x7b8            
            std::int32_t m_nPreviousNodeIndex; // 0x7bc            
            source2sdk::client::SolidType_t m_eSolidType; // 0x7c0            
            bool m_bIsMoving; // 0x7c1            
            uint8_t _pad07c2[0x2]; // 0x7c2
            float m_flTimeToReachMaxSpeed; // 0x7c4            
            float m_flDistanceToReachMaxSpeed; // 0x7c8            
            float m_flTimeToReachZeroSpeed; // 0x7cc            
            float m_flComputedDistanceToReachMaxSpeed; // 0x7d0            
            float m_flComputedDistanceToReachZeroSpeed; // 0x7d4            
            float m_flStartCurveScale; // 0x7d8            
            float m_flStopCurveScale; // 0x7dc            
            float m_flDistanceToReachZeroSpeed; // 0x7e0            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x7e4            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x7e8            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x7ec            
            float m_flPathLocationToBeginStop; // 0x7f0            
            float m_flPathLocationStart; // 0x7f4            
            float m_flBeginStopT; // 0x7f8            
            uint8_t _pad07fc[0x4]; // 0x7fc
            CUtlSymbolLarge m_iszStartForwardSound; // 0x800            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x808            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x810            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x818            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x820            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x828            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x830            
            uint8_t _pad0838[0x18]; // 0x838
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x850            
            bool m_bStartAtClosestPoint; // 0x868            
            bool m_bStartAtEnd; // 0x869            
            bool m_bStartFollowingClosestMover; // 0x86a            
            uint8_t _pad086b[0x1]; // 0x86b
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x86c            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x870            
            float m_flTimeToBlendToNewOrientation; // 0x874            
            float m_flDurationBlendToNewOrientationRan; // 0x878            
            bool m_bCreateMovableNavMesh; // 0x87c            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x87d            
            uint8_t _pad087e[0x2]; // 0x87e
            // m_OnNodePassed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlString> m_OnNodePassed;
            char m_OnNodePassed[0x20]; // 0x880            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x8a0            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x8a8            
            float m_flTimeToTraverseToNextNode; // 0x8ac            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x8b0            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x8bc            
            float m_flLerpToPositionT; // 0x8c8            
            float m_flLerpToPositionDeltaT; // 0x8cc            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x8d0            
            bool m_bIsPaused; // 0x8e8            
            uint8_t _pad08e9[0x3]; // 0x8e9
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x8ec            
            Quaternion m_qTransitionSourceOrientation; // 0x8f0            
            std::int32_t m_nDelayedTeleportToNode; // 0x900            
            bool m_bIsImGuiLogging; // 0x904            
            uint8_t _pad0905[0x3]; // 0x905
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x908            
            float m_flFollowDistance; // 0x90c            
            float m_flFollowMinimumSpeed; // 0x910            
            float m_flCurFollowEntityT; // 0x914            
            float m_flCurFollowSpeed; // 0x918            
            uint8_t _pad091c[0x4]; // 0x91c
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x920            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x4]; // 0x928            
            uint8_t _pad092c[0x4]; // 0x92c
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x930            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x960            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0x978            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x990            
            bool m_bNextNodeReturnsCurrent; // 0x9a8            
            bool m_bStartedMoving; // 0x9a9            
            uint8_t _pad09aa[0x1e]; // 0x9aa
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0x9c8            
            // m_hFollowMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncMover> m_hFollowMover;
            char m_hFollowMover[0x4]; // 0x9cc            
            CUtlSymbolLarge m_iszFollowMoverEntityName; // 0x9d0            
            float m_flFollowMoverDistance; // 0x9d8            
            float m_flFollowMoverCalculatedDistance; // 0x9dc            
            float m_flFollowMoverSpringStrength; // 0x9e0            
            bool m_bFollowConstraintsInitialized; // 0x9e4            
            uint8_t _pad09e5[0x3]; // 0x9e5
            source2sdk::server::CFuncMover_FollowConstraint_t m_eFollowConstraint; // 0x9e8            
            float m_flFollowMoverSpeed; // 0x9ec            
            float m_flFollowMoverVelocity; // 0x9f0            
            source2sdk::entity2::GameTick_t m_nTickMovementRan; // 0x9f4            
            uint8_t _pad09f8[0x8];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputStopImmediate; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // CUtlSymbolLarge InputTransitionToPath; // 0x0
            // CUtlSymbolLarge InputTransitionToPathStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToReachZeroSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // CUtlSymbolLarge InputSetFollowEntity; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityForward; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityReverse; // 0x0
            // CUtlSymbolLarge InputSetFaceEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // int32_t InputSetFollowMoverConstraintType; // 0x0
            // int32_t InputSetFollowMoverSpringStrength; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // int32_t InputSetMoveType; // 0x0
            // CUtlSymbolLarge InputSetFollowMoverEntity; // 0x0
            // void InputSetFollowMoverEntityToClosestOnSpline; // 0x0
            // void InputDeleteFollowMoverSpringConstraint; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa00);
    };
};
