#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/modellib/ScriptedMoveTo_t.hpp"
#include "source2sdk/modellib/SharedMovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CScriptedSequence : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszEntry; // 0x4a8            
            CUtlSymbolLarge m_iszPreIdle; // 0x4b0            
            CUtlSymbolLarge m_iszPlay; // 0x4b8            
            CUtlSymbolLarge m_iszPostIdle; // 0x4c0            
            CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4c8            
            CUtlSymbolLarge m_iszNextScript; // 0x4d0            
            CUtlSymbolLarge m_iszEntity; // 0x4d8            
            CUtlSymbolLarge m_iszSyncGroup; // 0x4e0            
            source2sdk::modellib::ScriptedMoveTo_t m_nMoveTo; // 0x4e8            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x4ec            
            uint8_t _pad04ed[0x3]; // 0x4ed
            source2sdk::modellib::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x4f0            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x4f4            
            bool m_bIsPlayingPreIdle; // 0x4f8            
            bool m_bIsPlayingEntry; // 0x4f9            
            bool m_bIsPlayingAction; // 0x4fa            
            bool m_bIsPlayingPostIdle; // 0x4fb            
            bool m_bDontRotateOther; // 0x4fc            
            bool m_bIsRepeatable; // 0x4fd            
            bool m_bShouldLeaveCorpse; // 0x4fe            
            bool m_bStartOnSpawn; // 0x4ff            
            bool m_bDisallowInterrupts; // 0x500            
            bool m_bCanOverrideNPCState; // 0x501            
            bool m_bDontTeleportAtEnd; // 0x502            
            bool m_bHighPriority; // 0x503            
            bool m_bHideDebugComplaints; // 0x504            
            bool m_bContinueOnDeath; // 0x505            
            bool m_bLoopPreIdleSequence; // 0x506            
            bool m_bLoopActionSequence; // 0x507            
            bool m_bLoopPostIdleSequence; // 0x508            
            bool m_bSynchPostIdles; // 0x509            
            bool m_bIgnoreLookAt; // 0x50a            
            bool m_bIgnoreGravity; // 0x50b            
            bool m_bDisableNPCCollisions; // 0x50c            
            bool m_bKeepAnimgraphLockedPost; // 0x50d            
            bool m_bDontAddModifiers; // 0x50e            
            bool m_bDisableAimingWhileMoving; // 0x50f            
            bool m_bIgnoreRotation; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            float m_flRadius; // 0x514            
            float m_flRepeat; // 0x518            
            float m_flPlayAnimFadeInTime; // 0x51c            
            float m_flMoveInterpTime; // 0x520            
            float m_flAngRate; // 0x524            
            float m_flMoveSpeed; // 0x528            
            bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x52c            
            uint8_t _pad052d[0x3]; // 0x52d
            std::int32_t m_nNotReadySequenceCount; // 0x530            
            source2sdk::entity2::GameTime_t m_startTime; // 0x534            
            bool m_bWaitForBeginSequence; // 0x538            
            uint8_t _pad0539[0x3]; // 0x539
            std::int32_t m_saved_effects; // 0x53c            
            std::int32_t m_savedFlags; // 0x540            
            std::int32_t m_savedCollisionGroup; // 0x544            
            bool m_bInterruptable; // 0x548            
            bool m_sequenceStarted; // 0x549            
            bool m_bPositionRelativeToOtherEntity; // 0x54a            
            uint8_t _pad054b[0x1]; // 0x54b
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x54c            
            // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hNextCine;
            char m_hNextCine[0x4]; // 0x550            
            bool m_bThinking; // 0x554            
            bool m_bInitiatedSelfDelete; // 0x555            
            bool m_bIsTeleportingDueToMoveTo; // 0x556            
            bool m_bAllowCustomInterruptConditions; // 0x557            
            // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hForcedTarget;
            char m_hForcedTarget[0x4]; // 0x558            
            bool m_bDontCancelOtherSequences; // 0x55c            
            bool m_bForceSynch; // 0x55d            
            bool m_bPreventUpdateYawOnFinish; // 0x55e            
            bool m_bEnsureOnNavmeshOnFinish; // 0x55f            
            source2sdk::client::ScriptedOnDeath_t m_onDeathBehavior; // 0x560            
            source2sdk::server::ScriptedConflictResponse_t m_ConflictResponse; // 0x564            
            source2sdk::entity2::CEntityIOOutput m_OnBeginSequence; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x580            
            source2sdk::entity2::CEntityIOOutput m_OnEndSequence; // 0x598            
            source2sdk::entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x5b0            
            source2sdk::entity2::CEntityIOOutput m_OnCancelSequence; // 0x5c8            
            source2sdk::entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x5e0            
            source2sdk::entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x5f8            
            uint8_t _pad06b8[0x8]; // 0x6b8
            CTransform m_matOtherToMain; // 0x6c0            
            // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInteractionMainEntity;
            char m_hInteractionMainEntity[0x4]; // 0x6e0            
            std::int32_t m_iPlayerDeathBehavior; // 0x6e4            
            bool m_bSkipFadeIn; // 0x6e8            
            uint8_t _pad06e9[0x7];
            
            // Datamap fields:
            // void InputMoveToPosition; // 0x0
            // void InputBeginSequence; // 0x0
            // void InputCancelSequence; // 0x0
            // CUtlSymbolLarge InputSetActionSequence; // 0x0
            // CUtlSymbolLarge InputForceTarget; // 0x0
            // void InputScriptPlayerDeath; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptedSequence) == 0x6f0);
    };
};
