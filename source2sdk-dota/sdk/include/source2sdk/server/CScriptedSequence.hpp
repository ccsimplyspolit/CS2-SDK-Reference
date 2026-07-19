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
        // Size: 0x6e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CScriptedSequence : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszEntry; // 0x498            
            CUtlSymbolLarge m_iszPreIdle; // 0x4a0            
            CUtlSymbolLarge m_iszPlay; // 0x4a8            
            CUtlSymbolLarge m_iszPostIdle; // 0x4b0            
            CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4b8            
            CUtlSymbolLarge m_iszNextScript; // 0x4c0            
            CUtlSymbolLarge m_iszEntity; // 0x4c8            
            CUtlSymbolLarge m_iszSyncGroup; // 0x4d0            
            source2sdk::modellib::ScriptedMoveTo_t m_nMoveTo; // 0x4d8            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x4dc            
            uint8_t _pad04dd[0x3]; // 0x4dd
            source2sdk::modellib::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x4e0            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x4e4            
            bool m_bIsPlayingPreIdle; // 0x4e8            
            bool m_bIsPlayingEntry; // 0x4e9            
            bool m_bIsPlayingAction; // 0x4ea            
            bool m_bIsPlayingPostIdle; // 0x4eb            
            bool m_bDontRotateOther; // 0x4ec            
            bool m_bIsRepeatable; // 0x4ed            
            bool m_bShouldLeaveCorpse; // 0x4ee            
            bool m_bStartOnSpawn; // 0x4ef            
            bool m_bDisallowInterrupts; // 0x4f0            
            bool m_bCanOverrideNPCState; // 0x4f1            
            bool m_bDontTeleportAtEnd; // 0x4f2            
            bool m_bHighPriority; // 0x4f3            
            bool m_bHideDebugComplaints; // 0x4f4            
            bool m_bContinueOnDeath; // 0x4f5            
            bool m_bLoopPreIdleSequence; // 0x4f6            
            bool m_bLoopActionSequence; // 0x4f7            
            bool m_bLoopPostIdleSequence; // 0x4f8            
            bool m_bSynchPostIdles; // 0x4f9            
            bool m_bIgnoreLookAt; // 0x4fa            
            bool m_bIgnoreGravity; // 0x4fb            
            bool m_bDisableNPCCollisions; // 0x4fc            
            bool m_bKeepAnimgraphLockedPost; // 0x4fd            
            bool m_bDontAddModifiers; // 0x4fe            
            bool m_bDisableAimingWhileMoving; // 0x4ff            
            bool m_bIgnoreRotation; // 0x500            
            uint8_t _pad0501[0x3]; // 0x501
            float m_flRadius; // 0x504            
            float m_flRepeat; // 0x508            
            float m_flPlayAnimFadeInTime; // 0x50c            
            float m_flMoveInterpTime; // 0x510            
            float m_flAngRate; // 0x514            
            float m_flMoveSpeed; // 0x518            
            bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x51c            
            uint8_t _pad051d[0x3]; // 0x51d
            std::int32_t m_nNotReadySequenceCount; // 0x520            
            source2sdk::entity2::GameTime_t m_startTime; // 0x524            
            bool m_bWaitForBeginSequence; // 0x528            
            uint8_t _pad0529[0x3]; // 0x529
            std::int32_t m_saved_effects; // 0x52c            
            std::int32_t m_savedFlags; // 0x530            
            std::int32_t m_savedCollisionGroup; // 0x534            
            bool m_bInterruptable; // 0x538            
            bool m_sequenceStarted; // 0x539            
            bool m_bPositionRelativeToOtherEntity; // 0x53a            
            uint8_t _pad053b[0x1]; // 0x53b
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x53c            
            // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hNextCine;
            char m_hNextCine[0x4]; // 0x540            
            bool m_bThinking; // 0x544            
            bool m_bInitiatedSelfDelete; // 0x545            
            bool m_bIsTeleportingDueToMoveTo; // 0x546            
            bool m_bAllowCustomInterruptConditions; // 0x547            
            // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hForcedTarget;
            char m_hForcedTarget[0x4]; // 0x548            
            bool m_bDontCancelOtherSequences; // 0x54c            
            bool m_bForceSynch; // 0x54d            
            bool m_bPreventUpdateYawOnFinish; // 0x54e            
            bool m_bEnsureOnNavmeshOnFinish; // 0x54f            
            source2sdk::client::ScriptedOnDeath_t m_onDeathBehavior; // 0x550            
            source2sdk::server::ScriptedConflictResponse_t m_ConflictResponse; // 0x554            
            source2sdk::entity2::CEntityIOOutput m_OnBeginSequence; // 0x558            
            source2sdk::entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x570            
            source2sdk::entity2::CEntityIOOutput m_OnEndSequence; // 0x588            
            source2sdk::entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnCancelSequence; // 0x5b8            
            source2sdk::entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x5d0            
            source2sdk::entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x5e8            
            uint8_t _pad06a8[0x8]; // 0x6a8
            CTransform m_matOtherToMain; // 0x6b0            
            // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInteractionMainEntity;
            char m_hInteractionMainEntity[0x4]; // 0x6d0            
            std::int32_t m_iPlayerDeathBehavior; // 0x6d4            
            bool m_bSkipFadeIn; // 0x6d8            
            uint8_t _pad06d9[0x7];
            
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
        
        static_assert(sizeof(source2sdk::server::CScriptedSequence) == 0x6e0);
    };
};
