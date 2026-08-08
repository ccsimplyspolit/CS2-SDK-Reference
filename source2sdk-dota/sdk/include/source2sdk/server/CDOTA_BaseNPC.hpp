#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CUnitOrders.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/OriginalModelFlags_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_ModifierManager.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/server/CLocalNPCObstructionsCache.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/NextBotCombatCharacter.hpp"
#include "source2sdk/server/ObstructionRelationshipClass_t.hpp"
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
        struct CDOTA_NeutralSpawner;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_ScriptedSpawner;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CLocomotionBase;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct INextBotBody;
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
        // Size: 0x18a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC : public source2sdk::server::NextBotCombatCharacter
        {
        public:
            uint8_t _pad08f8[0x20]; // 0x8f8
            bool m_bPledgedOfrenda; // 0x918
            uint8_t _pad0919[0x3]; // 0x919
            std::uint32_t m_iUnitType; // 0x91c
            Color m_colorGemColor; // 0x920
            bool m_bHasColorGem; // 0x924
            bool m_bSelectionRingVisible; // 0x925
            uint8_t _pad0926[0xa]; // 0x926
            CUtlSymbolLarge m_iszBaseClass; // 0x930
            std::int32_t m_iStartingMaxHealth; // 0x938
            std::int32_t m_iStartingMaxMana; // 0x93c
            std::int32_t m_iStartingMana; // 0x940
            std::int32_t m_iCurrentLevel; // 0x944
            float m_flMana; // 0x948
            float m_flBaseMaxMana; // 0x94c
            float m_flMaxMana; // 0x950
            float m_flManaThinkRegen; // 0x954
            float m_flBaseMaxHealth; // 0x958
            float m_flHealthThinkRegen; // 0x95c
            std::int32_t m_nHealthBarOffsetOverride; // 0x960
            std::int32_t m_nHealthBarOffset; // 0x964
            bool m_bIsPhantom; // 0x968
            bool m_bIsAncient; // 0x969
            bool m_bIsBossCreature; // 0x96a
            bool m_bIsNeutralUnitType; // 0x96b
            bool m_bAutoAttacksByDefault; // 0x96c
            bool m_bIsSummoned; // 0x96d
            bool m_bCanBeDominated; // 0x96e
            bool m_bCanRespawn; // 0x96f
            bool m_bIsClone; // 0x970
            bool m_bConsideredHero; // 0x971
            bool m_bUsesConstantGesture; // 0x972
            bool m_bIsPlayingSingleForcedActivity; // 0x973
            bool m_bHasUpgradeableAbilities; // 0x974
            uint8_t _pad0975[0x3]; // 0x975
            std::int32_t m_iBKBChargesUsed; // 0x978
            std::int32_t m_iAeonChargesUsed; // 0x97c
            std::int32_t m_iRefresherChargesUsed; // 0x980
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0x984
            float m_flRefresherLastCooldown; // 0x988
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0x98c
            std::int32_t m_iBotDebugData; // 0x990
            bool m_bIsMoving; // 0x994
            uint8_t _pad0995[0x1bb]; // 0x995
            float m_flChannelMultiplier; // 0xb50
            bool m_bCanUseWards; // 0xb54
            bool m_bCanUseAllItems; // 0xb55
            uint8_t _pad0b56[0x2]; // 0xb56
            source2sdk::client::PlayerID_t m_iLastAbilityPlayer; // 0xb58
            bool m_bIsPhantomBlocker; // 0xb5c
            bool m_bBlocksCreepSpawn; // 0xb5d
            bool m_bCanSellItems; // 0xb5e
            uint8_t _pad0b5f[0x1]; // 0xb5f
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0xb60
            bool m_bTrackDamageTaken; // 0xb64
            uint8_t _pad0b65[0x3]; // 0xb65
            source2sdk::entity2::GameTick_t m_nNextRegenThink; // 0xb68
            source2sdk::entity2::GameTick_t m_nNextModifierThink; // 0xb6c
            source2sdk::entity2::GameTick_t m_nNextModelScaleThink; // 0xb70
            source2sdk::entity2::GameTick_t m_nNextUnitThink; // 0xb74
            float m_flManaRegen; // 0xb78
            float m_flHealthRegen; // 0xb7c
            std::int64_t m_nTotalDamageTaken; // 0xb80
            float m_flHealthRegenCounter; // 0xb88
            float m_flManaRegenCounter; // 0xb8c
            float m_flAccumulatedHeal; // 0xb90
            std::int32_t m_iBaseAttackSpeed; // 0xb94
            std::int32_t m_iBaseDamageMin; // 0xb98
            std::int32_t m_iBaseDamageMax; // 0xb9c
            std::int32_t m_iAttackRange; // 0xba0
            std::int32_t m_iAttackRangeBuffer; // 0xba4
            std::int32_t m_iMoveSpeed; // 0xba8
            float m_flTurnRate; // 0xbac
            std::int32_t m_iHasAggressiveStance; // 0xbb0
            bool m_bInAggressiveStance; // 0xbb4
            bool m_bInInjuredAggressiveStance; // 0xbb5
            uint8_t _pad0bb6[0x2]; // 0xbb6
            float m_flFollowRange; // 0xbb8
            std::int32_t m_iAcquisitionRange; // 0xbbc
            float m_flAttackAnimationPoint; // 0xbc0
            float m_flHullRadius; // 0xbc4
            float m_flCollisionPadding; // 0xbc8
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xbcc
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xbd0
            float m_fRevealRadius; // 0xbd4
            float m_flProjectileCollisionSize; // 0xbd8
            source2sdk::server::ObstructionRelationshipClass_t m_ObstructionRelationshipClass; // 0xbdc
            CUtlSymbolLarge m_iszParticleFolder; // 0xbe0
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xbe8
            CUtlSymbolLarge m_iszVoiceFile; // 0xbf0
            CUtlSymbolLarge m_iszSoundSet; // 0xbf8
            CUtlSymbolLarge m_iszSelectionGroup; // 0xc00
            CUtlSymbolLarge m_iszAnimationModifier; // 0xc08
            uint8_t _pad0c10[0x8]; // 0xc10
            float m_flBaseAttackTime; // 0xc18
            std::int32_t m_iDayTimeVisionRange; // 0xc1c
            std::int32_t m_iNightTimeVisionRange; // 0xc20
            float m_fBotAttackDesire; // 0xc24
            std::int32_t m_iUnitRelationshipClass; // 0xc28
            float m_flPhysicalArmorValue; // 0xc2c
            float m_flMagicalResistanceValue; // 0xc30
            std::int32_t m_iTeamName; // 0xc34
            std::int32_t m_iAttackCapabilities; // 0xc38
            std::int32_t m_iSpecialAbility; // 0xc3c
            std::int32_t m_iMoveCapabilities; // 0xc40
            std::int32_t m_iOriginalAttackCapabilities; // 0xc44
            std::int32_t m_iXPBounty; // 0xc48
            std::int32_t m_iXPBountyExtra; // 0xc4c
            std::int32_t m_iGoldBountyMin; // 0xc50
            std::int32_t m_iGoldBountyMax; // 0xc54
            source2sdk::client::PlayerID_t m_nFarmClaimPlayerID; // 0xc58
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0xc5c
            CUtlSymbolLarge m_iszAbilityList[40]; // 0xc60
            std::int32_t m_iAttackDamageType; // 0xda0
            bool m_bIsIdle; // 0xda4
            bool m_bHold; // 0xda5
            bool m_bWasKilledPassively; // 0xda6
            uint8_t _pad0da7[0x1]; // 0xda7
            source2sdk::server::CountdownTimer m_AngerTimer; // 0xda8
            source2sdk::server::CountdownTimer m_AlertTimer; // 0xdc0
            // m_hAngerTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAngerTarget;
            char m_hAngerTarget[0x4]; // 0xdd8
            // m_hAlertTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAlertTarget;
            char m_hAlertTarget[0x4]; // 0xddc
            // m_hForceAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hForceAttackTarget;
            char m_hForceAttackTarget[0x4]; // 0xde0
            bool m_bAllowAllyForceAttack; // 0xde4
            uint8_t _pad0de5[0x3]; // 0xde5
            VectorWS m_vTargetLastKnownPosition; // 0xde8
            uint8_t _pad0df4[0x1c]; // 0xdf4
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xe10
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0xe14
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0xe18
            source2sdk::entity2::GameTime_t m_flLastTeleportTime; // 0xe1c
            std::uint64_t m_nUnitState64; // 0xe20
            source2sdk::entity2::GameTime_t m_vLastVisibilityChange[15]; // 0xe28
            uint8_t _pad0e64[0x1c]; // 0xe64
            bool m_bFirstSpawn; // 0xe80
            uint8_t _pad0e81[0x3]; // 0xe81
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0xe84
            // m_hAggroTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAggroTarget;
            char m_hAggroTarget[0x4]; // 0xe88
            // m_hCommandAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCommandAttackTarget;
            char m_hCommandAttackTarget[0x4]; // 0xe8c
            CUtlSymbolLarge m_iszOriginalModel; // 0xe90
            std::int8_t m_nUnitModelVariant; // 0xe98
            std::int8_t m_nUnitModelVariantCount; // 0xe99
            bool m_bPseudoQueueOrders; // 0xe9a
            bool m_bCastLocked; // 0xe9b
            uint8_t _pad0e9c[0x1c]; // 0xe9c
            source2sdk::entity2::GameTime_t m_flAttackRegulator; // 0xeb8
            float m_flTimeDisparityTolerance; // 0xebc
            source2sdk::entity2::GameTime_t m_fAttackPhaseEndTime; // 0xec0
            source2sdk::entity2::GameTime_t m_flPositionUpdateTime; // 0xec4
            VectorWS m_vLastPositionSent; // 0xec8
            std::int32_t m_iTaggedAsVisibleByTeam; // 0xed4
            std::uint64_t m_iIsControllableByPlayer64; // 0xed8
            source2sdk::client::PlayerID_t m_nControllingPlayerID; // 0xee0
            bool m_bControllableByAllPlayers; // 0xee4
            bool m_bRunAIWhenControllableByPlayer; // 0xee5
            uint8_t _pad0ee6[0x2]; // 0xee6
            CUtlSymbolLarge m_iszUnitToAbilityMapping; // 0xee8
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xef0
            // m_associatedEmptyAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_associatedEmptyAbilities;
            char m_associatedEmptyAbilities[0x18]; // 0xf08
            // m_hActiveAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveAbility;
            char m_hActiveAbility[0x4]; // 0xf20
            VectorWS m_vCursorLocation; // 0xf24
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0xf30
            // m_hOriginalCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOriginalCursorTarget;
            char m_hOriginalCursorTarget[0x4]; // 0xf34
            bool m_bCursorTargetingNothing; // 0xf38
            uint8_t _pad0f39[0x7]; // 0xf39
            source2sdk::server::CDOTA_ModifierManager m_ModifierManager; // 0xf40
            uint8_t _pad12d0[0x8]; // 0x12d0
            float m_flInvisibilityLevel; // 0x12d8
            uint8_t _pad12dc[0x4]; // 0x12dc
            CUtlSymbolLarge m_iszMapUnitName; // 0x12e0
            CUtlSymbolLarge m_iszUnitName; // 0x12e8
            std::int32_t m_iUnitNameIndex; // 0x12f0
            std::int32_t m_iDamageMin; // 0x12f4
            std::int32_t m_iDamageMax; // 0x12f8
            std::int32_t m_iDamageBonus; // 0x12fc
            bool m_bIsWaitingToSpawn; // 0x1300
            uint8_t _pad1301[0x3]; // 0x1301
            std::int32_t m_iLeashType; // 0x1304
            std::int32_t m_iAggroType; // 0x1308
            bool m_bCreepIgnoreAggro; // 0x130c
            bool m_bCreepFirstWave; // 0x130d
            bool m_bIsIllusion; // 0x130e
            std::uint8_t m_nUnitLabelIndex; // 0x130f
            CUtlString m_szScaleset; // 0x1310
            CUtlString m_szUnitLabel; // 0x1318
            CUtlString m_strAnimationModifier; // 0x1320
            uint8_t _pad1328[0x8]; // 0x1328
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1330
            uint8_t _pad1334[0x4]; // 0x1334
            source2sdk::server::CLocomotionBase* m_locomotor; // 0x1338
            source2sdk::server::INextBotBody* m_body; // 0x1340
            bool m_bNeverMoveToClearSpace; // 0x1348
            uint8_t _pad1349[0x3]; // 0x1349
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x134c
            bool m_bMustReachEachGoalEntity; // 0x1350
            uint8_t _pad1351[0x3]; // 0x1351
            VectorWS m_vInitialGoalPosition; // 0x1354
            uint8_t _pad1360[0x18]; // 0x1360
            source2sdk::client::CUnitOrders m_CurrentQueuedOrder; // 0x1378
            uint8_t _pad13b8[0x18]; // 0x13b8
            source2sdk::server::CDOTA_UnitInventory m_Inventory; // 0x13d0
            // m_hItemToDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItemToDrop;
            char m_hItemToDrop[0x4]; // 0x14c8
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0x14cc
            // m_hLastNearShop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastNearShop;
            char m_hLastNearShop[0x4]; // 0x14d0
            uint8_t _pad14d4[0x4]; // 0x14d4
            CUtlSymbolLarge m_szCurShopEntName; // 0x14d8
            bool m_bHasInventory; // 0x14e0
            uint8_t _pad14e1[0x3]; // 0x14e1
            float m_flBaselineModelScale; // 0x14e4
            float m_fModelScaleMultiplier; // 0x14e8
            float m_fModelScaleMultiplierChangeStart; // 0x14ec
            source2sdk::entity2::GameTime_t m_fModelScaleMultiplierChangeTime; // 0x14f0
            float m_flPreviousModelScale; // 0x14f4
            float m_fMaxModelScaleMultiplier; // 0x14f8
            bool m_bIsCamped; // 0x14fc
            bool m_bIsReturningHome; // 0x14fd
            bool m_bIgnoreHome; // 0x14fe
            bool m_bWantsToFlee; // 0x14ff
            bool m_bWakesNeutrals; // 0x1500
            bool m_bNeutralIgnore; // 0x1501
            bool m_bIdleAcquire; // 0x1502
            bool m_bIdleAcquireForceSet; // 0x1503
            bool m_bCanFollowUnseenUnits; // 0x1504
            bool m_bExpired; // 0x1505
            uint8_t _pad1506[0x2]; // 0x1506
            VectorWS m_vCurrentMovementOrderDestination; // 0x1508
            VectorWS m_vPreviousMovementOrderDestination; // 0x1514
            VectorWS m_vResumePreviousMovementRequestLocation; // 0x1520
            bool m_bCurrentOrderIsMovement; // 0x152c
            bool m_bPreviousOrderIsMovement; // 0x152d
            bool m_bResumePreviousMovement; // 0x152e
            bool m_bIsPatrolling; // 0x152f
            source2sdk::entity2::GameTime_t m_flCreationTime; // 0x1530
            bool m_bTargetMovedOutOfRange; // 0x1534
            bool m_bChaseTargetMoves; // 0x1535
            uint8_t _pad1536[0x2]; // 0x1536
            float m_flChaseDistance; // 0x1538
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x4]; // 0x153c
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1540
            bool m_bActivityModifiersDirty; // 0x1558
            uint8_t _pad1559[0x7]; // 0x1559
            // m_ActivityModifiersFromScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiersFromScript;
            char m_ActivityModifiersFromScript[0x18]; // 0x1560
            source2sdk::entity2::GameTime_t m_flBlinkDaggerTime; // 0x1578
            float m_flAdditionalBattleMusicWeight; // 0x157c
            bool m_bStolenScepter; // 0x1580
            bool m_bHasScepterCached; // 0x1581
            bool m_bHasShardCached; // 0x1582
            bool m_bHasForbiddenTomeCached; // 0x1583
            uint8_t _pad1584[0x4]; // 0x1584
            source2sdk::server::CLocalNPCObstructionsCache m_LocalNPCObstructionsCache; // 0x1588
            uint8_t _pad15a8[0x20]; // 0x15a8
            source2sdk::entity2::GameTime_t m_flCritBashFailUntil; // 0x15c8
            float m_flAttackTimeLostToLastTick; // 0x15cc
            float m_flAttackTimeAtLastTick; // 0x15d0
            float m_flCompanionDistance; // 0x15d4
            bool m_bIsPartyCompanion; // 0x15d8
            bool m_bCanPartyCompanionAttack; // 0x15d9
            uint8_t _pad15da[0x2]; // 0x15da
            // m_CompanionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_CompanionEntity;
            char m_CompanionEntity[0x4]; // 0x15dc
            bool m_bFacePlayer; // 0x15e0
            uint8_t _pad15e1[0x3]; // 0x15e1
            source2sdk::entity2::GameTime_t m_flLastIdleChangeTime; // 0x15e4
            bool m_bUseNeutralCreepBehavior; // 0x15e8
            uint8_t _pad15e9[0x27]; // 0x15e9
            bool m_bHasBuiltWearableSpawnList; // 0x1610
            uint8_t _pad1611[0x3]; // 0x1611
            source2sdk::entity2::GameTick_t m_nFoWFadeStartTime[15]; // 0x1614
            std::int32_t m_nFOWVisibilityRadius; // 0x1650
            VectorWS m_vFOWOriginOverride; // 0x1654
            std::int32_t m_iTeamViewerID; // 0x1660
            std::int32_t m_nAttackHeightBonus; // 0x1664
            std::uint32_t m_nScepterUpgradeID; // 0x1668
            std::uint32_t m_nShardUpgradeID; // 0x166c
            CUtlString m_strLastKillerAbility; // 0x1670
            std::int32_t m_anglediff; // 0x1678
            std::int32_t m_NetworkActivity; // 0x167c
            std::int32_t m_NetworkSequenceIndex; // 0x1680
            bool m_bShouldDoFlyHeightVisual; // 0x1684
            uint8_t _pad1685[0x3]; // 0x1685
            float m_flStartSequenceCycle; // 0x1688
            bool m_bMidLoading; // 0x168c
            uint8_t _pad168d[0x3]; // 0x168d
            // m_hTutorialSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_ScriptedSpawner> m_hTutorialSpawner;
            char m_hTutorialSpawner[0x4]; // 0x1690
            uint8_t _pad1694[0x4]; // 0x1694
            source2sdk::server::CountdownTimer m_AngerCooldownTimer; // 0x1698
            std::int32_t m_iProjectileMoveSpeed; // 0x16b0
            uint8_t _pad16b4[0x4]; // 0x16b4
            CUtlSymbolLarge m_iszAutoAttackRangedParticle; // 0x16b8
            std::int32_t m_nPoseParameterTurn; // 0x16c0
            std::int32_t m_nPoseParameterRun; // 0x16c4
            float m_flLean; // 0x16c8
            float m_flRun; // 0x16cc
            char m_CustomHealthLabel[256]; // 0x16d0
            Color m_CustomHealthLabelColor; // 0x17d0
            source2sdk::client::OriginalModelFlags_t m_nIsOriginalModel; // 0x17d4
            uint8_t _pad17d5[0x3]; // 0x17d5
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x17d8
            std::int8_t m_nArcanaLevel; // 0x17dc
            std::int8_t m_nDefaultArcanaLevel; // 0x17dd
            Color m_defaultColorGemColor; // 0x17de
            bool m_bDisableDamageDisplay; // 0x17e2
            uint8_t _pad17e3[0x1]; // 0x17e3
            Color m_gibTintColor; // 0x17e4
            float m_flPathfindingSearchDepthScale; // 0x17e8
            uint8_t _pad17ec[0x4]; // 0x17ec
            // m_ActivitiesStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_ActivitiesStarted;
            char m_ActivitiesStarted[0x18]; // 0x17f0
            // m_hIllusionOriginal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hIllusionOriginal;
            char m_hIllusionOriginal[0x4]; // 0x1808
            // m_hDirectionalRangedFakeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDirectionalRangedFakeTarget;
            char m_hDirectionalRangedFakeTarget[0x4]; // 0x180c
            uint8_t _pad1810[0x28]; // 0x1810
            bool m_bShouldComputeRemainingPathLength; // 0x1838
            uint8_t _pad1839[0x3]; // 0x1839
            float m_flRemainingPathLength; // 0x183c
            uint8_t _pad1840[0x28]; // 0x1840
            // m_AbilitiesPendingDelete has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_AbilitiesPendingDelete;
            char m_AbilitiesPendingDelete[0x18]; // 0x1868
            float m_flPrevHealthThinkRegen; // 0x1880
            source2sdk::entity2::GameTime_t m_prevRegenChangeTime; // 0x1884
            float m_flAccumulatedHealthRegenSinceLastLogged; // 0x1888
            uint8_t _pad188c[0x1c];

            // Datamap fields:
            // CUtlSymbolLarge m_target; // 0x300
            // int32_t m_iMaxHealth; // 0x2d4
            // int32_t m_iHealth; // 0x2d0
            // uint8_t m_iTeamNum; // 0x344
            // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
            // int32_t EconItemCount; // 0x7fffffff
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC) == 0x18a8);
    };
};
