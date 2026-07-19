#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AILOD_t.hpp"
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/SquadSlotNPCEntry_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/CNPCPhysicsHull.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CAI_Scheduler.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/CRelativeLocation.hpp"
#include "source2sdk/server/CUnreachableTargetList.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_AnimGraphServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_BehaviorHost;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_EnemyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_FacingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Motor;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Navigator;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Pathfinder;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CAI_Senses;
    };
};
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
        struct CBaseFilter;
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
        // Size: 0x1150
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
        // static metadata: MNetworkVarNames "CAI_Motor * m_pMotor"
        // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
        // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
        #pragma pack(push, 1)
        class CAI_BaseNPC : public source2sdk::server::CBaseCombatCharacter
        {
        public:
            uint8_t _pad0ba0[0x10]; // 0xba0
            source2sdk::modellib::CNPCPhysicsHull m_currentNPCBasePhysicsHull; // 0xbb0            
            bool m_bCheckContacts; // 0xbf0            
            bool m_bForceDynamicHull; // 0xbf1            
            uint8_t _pad0bf2[0x26]; // 0xbf2
            source2sdk::server::CRelativeLocation m_lastNavLocation; // 0xc18            
            float m_flLastPositionTolerance; // 0xc58            
            // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
            char m_hSynchronizedPrimaryNPC[0x4]; // 0xc5c            
            // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
            char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xc60            
            // metadata: MNetworkEnable
            source2sdk::client::NPC_STATE m_NPCState; // 0xc78            
            source2sdk::client::NPC_STATE m_nPreModifierNPCState; // 0xc7c            
            source2sdk::client::NPC_STATE m_IdealNPCState; // 0xc80            
            source2sdk::entity2::GameTime_t m_flLastStateChangeTime; // 0xc84            
            source2sdk::server::CAI_Senses* m_pSenses; // 0xc88            
            source2sdk::client::CAI_ScheduleBits m_Conditions; // 0xc90            
            source2sdk::client::CAI_ScheduleBits m_ExistingConditionsAsync; // 0xcb4            
            source2sdk::client::CAI_ScheduleBits m_NonGatherConditions; // 0xcd8            
            source2sdk::client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xcfc            
            bool m_bForceConditionsGather; // 0xd20            
            bool m_bConditionsGathered; // 0xd21            
            bool m_bConditionsGatheredAsync; // 0xd22            
            uint8_t _pad0d23[0x1]; // 0xd23
            source2sdk::entity2::GameTick_t m_nTickGatheredConditions; // 0xd24            
            uint8_t _pad0d28[0x4]; // 0xd28
            source2sdk::entity2::GameTime_t m_flLastTimeIgnited; // 0xd2c            
            source2sdk::entity2::GameTime_t m_flTimeIgnitionStarted; // 0xd30            
            // metadata: MNotSaved
            bool m_bDoPostRestoreRefindPath; // 0xd34            
            uint8_t _pad0d35[0x3]; // 0xd35
            source2sdk::server::CAI_BehaviorHost* m_pBehaviorHost; // 0xd38            
            CGlobalSymbol m_sDeathAnim; // 0xd40            
            source2sdk::server::CAI_EnemyServices* m_pEnemyServices; // 0xd48            
            source2sdk::client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xd50            
            source2sdk::client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xd64            
            source2sdk::entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xd6c            
            bool m_bSkippedChooseEnemy; // 0xd70            
            bool m_bIgnoreUnseenEnemies; // 0xd71            
            uint8_t _pad0d72[0x2]; // 0xd72
            // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hEnemyFilter;
            char m_hEnemyFilter[0x4]; // 0xd74            
            CUtlSymbolLarge m_iszEnemyFilterName; // 0xd78            
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0xd80            
            bool m_bClearTargetOnScheduleEnd; // 0xd84            
            uint8_t _pad0d85[0x3]; // 0xd85
            source2sdk::entity2::GameTime_t m_flSoundWaitTime; // 0xd88            
            std::int32_t m_nSoundPriority; // 0xd8c            
            bool m_bSuppressFootsteps; // 0xd90            
            uint8_t _pad0d91[0x3]; // 0xd91
            std::int32_t m_afCapability; // 0xd94            
            float m_flGroundSpeed; // 0xd98            
            source2sdk::entity2::GameTime_t m_lastTimeBashedObstacle; // 0xd9c            
            source2sdk::entity2::GameTime_t m_nextMantleTime; // 0xda0            
            source2sdk::entity2::GameTime_t m_flMoveWaitFinished; // 0xda4            
            // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOpeningDoor;
            char m_hOpeningDoor[0x4]; // 0xda8            
            uint8_t _pad0dac[0x4]; // 0xdac
            source2sdk::server::CUnreachableTargetList m_UnreachableTargets; // 0xdb0            
            // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPathObstructor;
            char m_hPathObstructor[0x4]; // 0xdd0            
            // metadata: MNotSaved
            float m_flJumpMaxRise; // 0xdd4            
            // metadata: MNotSaved
            float m_flJumpMaxDrop; // 0xdd8            
            // metadata: MNotSaved
            float m_flJumpMaxDist; // 0xddc            
            // metadata: MNotSaved
            float m_flJumpMinDist; // 0xde0            
            uint8_t _pad0de4[0x4]; // 0xde4
            source2sdk::server::CAI_FacingServices* m_pFacingServices; // 0xde8            
            source2sdk::server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xdf0            
            bool m_bAnimGraphIsAnimatingDeath; // 0xdf8            
            uint8_t _pad0df9[0x1]; // 0xdf9
            // metadata: MNotSaved
            bool m_bDeferredNavigation; // 0xdfa            
            uint8_t _pad0dfb[0x5]; // 0xdfb
            source2sdk::server::CAI_Scheduler m_Scheduler; // 0xe00            
            source2sdk::server::CAI_Navigator* m_pNavigator; // 0xeb0            
            source2sdk::server::CAI_Pathfinder* m_pPathfinder; // 0xeb8            
            source2sdk::server::CAI_Pathfinder* m_pPathfinderNet; // 0xec0            
            uint8_t _pad0ec8[0x10]; // 0xec8
            // metadata: MNetworkEnable
            source2sdk::server::CAI_Motor* m_pMotor; // 0xed8            
            source2sdk::entity2::GameTime_t m_flTimeLastMovement; // 0xee0            
            source2sdk::entity2::GameTime_t m_flTimeLastFootstep; // 0xee4            
            source2sdk::server::AI_VolumetricEventHandle_t m_hFootstepEvent; // 0xee8            
            source2sdk::client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xef0            
            CUtlSymbolLarge m_strNavRestrictionVolume; // 0xef8            
            std::int32_t m_afMemory; // 0xf00            
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xf04            
            source2sdk::entity2::GameTime_t m_flLastTookDamageTime; // 0xf08            
            source2sdk::entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf0c            
            Vector m_vecLastTookDamageAttackVector; // 0xf10            
            uint8_t _pad0f1c[0x4]; // 0xf1c
            CUtlSymbolLarge m_iszSquadName; // 0xf20            
            // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
            char m_vecMySquadSlots[0x18]; // 0xf28            
            uint8_t _pad0f40[0x8]; // 0xf40
            std::int32_t m_nPrevHealthDuringModifyDamage; // 0xf48            
            uint8_t _pad0f4c[0x4]; // 0xf4c
            // metadata: MNetworkEnable
            bool m_bFadeCorpse; // 0xf50            
            // metadata: MNetworkEnable
            bool m_bImportantRagdoll; // 0xf51            
            bool m_bDidDeathCleanup; // 0xf52            
            bool m_bReceivedEnemyDeadNotification; // 0xf53            
            uint8_t _pad0f54[0x8]; // 0xf54
            source2sdk::entity2::GameTime_t m_flWaitFinished; // 0xf5c            
            bool m_fNoDamageDecal; // 0xf60            
            uint8_t _pad0f61[0x7]; // 0xf61
            // metadata: MNotSaved
            // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>>* m_pVecAttachments;
            char m_pVecAttachments[0x8]; // 0xf68            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0xf70            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xf88            
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0xfa0            
            source2sdk::entity2::CEntityIOOutput m_OnQuarterHealth; // 0xfb8            
            source2sdk::entity2::CEntityIOOutput m_OnHalfHealth; // 0xfd0            
            source2sdk::entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xfe8            
            // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnFoundEnemy;
            char m_OnFoundEnemy[0x20]; // 0x1000            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemy; // 0x1020            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayer; // 0x1038            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1050            
            source2sdk::entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1068            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x1080            
            source2sdk::entity2::CEntityIOOutput m_OnUse; // 0x1098            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x10b0            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x10c8            
            source2sdk::entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x10e0            
            source2sdk::entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x10f8            
            std::uint64_t m_nAITraceMask; // 0x1110            
            bool m_bDynamicAILOD; // 0x1118            
            uint8_t _pad1119[0x3]; // 0x1119
            source2sdk::client::AILOD_t m_aiLOD; // 0x111c            
            float m_flThinkTime; // 0x1120            
            uint8_t _pad1124[0x1c]; // 0x1124
            // metadata: MNotSaved
            std::int32_t m_nDebugCurIndex; // 0x1140            
            uint8_t _pad1144[0xc];
            
            // Datamap fields:
            // void m_pSquad; // 0xf40
            // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
            // void m_vecTaskThinkTimes; // 0x1128
            // void m_hDamagedFX; // 0xf4c
            // CUtlSymbolLarge InputSetEnemyFilter; // 0x0
            // int32_t InputOverrideHealth; // 0x0
            // int32_t InputSetHealth; // 0x0
            // CUtlSymbolLarge InputSetSquad; // 0x0
            // CUtlSymbolLarge InputForgetEntity; // 0x0
            // void InputBreak; // 0x0
            // void InputGagEnable; // 0x0
            // void InputGagDisable; // 0x0
            // void InputInsideTransition; // 0x0
            // void InputOutsideTransition; // 0x0
            // CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
            // CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
            // void CAI_BaseNPCCallNPCThink; // 0x0
            // void CAI_BaseNPCCallNPCPerTickThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_BaseNPC) == 0x1150);
    };
};
