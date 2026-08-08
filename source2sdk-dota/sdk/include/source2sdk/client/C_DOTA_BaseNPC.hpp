#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_ModifierManager.hpp"
#include "source2sdk/client/C_DOTA_UnitInventory.hpp"
#include "source2sdk/client/C_NextBotCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/DOTA_SHOP_TYPE.hpp"
#include "source2sdk/client/OriginalModelFlags_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_NeutralSpawner;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_EconWearable;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_SceneEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC : public source2sdk::client::C_NextBotCombatCharacter
        {
        public:
            uint8_t _pad0b88[0x8]; // 0xb88
            bool m_bIsPhantom; // 0xb90
            uint8_t _pad0b91[0x3]; // 0xb91
            std::uint32_t m_iUnitType; // 0xb94
            uint8_t _pad0b98[0x10]; // 0xb98
            bool m_bSelectionRingVisible; // 0xba8
            uint8_t _pad0ba9[0x3]; // 0xba9
            std::int32_t m_iCurrentLevel; // 0xbac
            bool m_bIsAncient; // 0xbb0
            bool m_bIsBossCreature; // 0xbb1
            bool m_bStolenScepter; // 0xbb2
            bool m_bIsNeutralUnitType; // 0xbb3
            bool m_bSelectOnSpawn; // 0xbb4
            bool m_bCachedReplicatedMorphlingIllusion; // 0xbb5
            bool m_bIgnoreAddSummonedToSelection; // 0xbb6
            bool m_bConsideredHero; // 0xbb7
            bool m_bUsesConstantGesture; // 0xbb8
            bool m_bUseHeroAbilityNumbers; // 0xbb9
            bool m_bHasSharedAbilities; // 0xbba
            bool m_bIsSummoned; // 0xbbb
            bool m_bCanBeDominated; // 0xbbc
            bool m_bHasUpgradeableAbilities; // 0xbbd
            uint8_t _pad0bbe[0x2]; // 0xbbe
            float m_flHealthThinkRegen; // 0xbc0
            uint8_t _pad0bc4[0x4]; // 0xbc4
            std::uint64_t m_iIsControllableByPlayer64; // 0xbc8
            std::int32_t m_nHealthBarOffsetOverride; // 0xbd0
            bool m_bCanRespawn; // 0xbd4
            uint8_t _pad0bd5[0x3]; // 0xbd5
            std::int32_t m_iAttackRange; // 0xbd8
            bool m_bIsClone; // 0xbdc
            Color m_colorGemColor; // 0xbdd
            bool m_bHasColorGem; // 0xbe1
            uint8_t _pad0be2[0x2]; // 0xbe2
            source2sdk::client::ParticleIndex_t m_nFXDeniableIndex; // 0xbe4
            std::int32_t m_nCustomHealthbarStyle; // 0xbe8
            std::int32_t m_iMoveSpeed; // 0xbec
            std::int32_t m_iBaseAttackSpeed; // 0xbf0
            float m_flBaseAttackTime; // 0xbf4
            std::int32_t m_iUnitNameIndex; // 0xbf8
            std::int32_t m_iHealthBarOffset; // 0xbfc
            Color m_iHealthBarHighlightColor; // 0xc00
            float m_flMana; // 0xc04
            float m_flMaxMana; // 0xc08
            float m_flManaThinkRegen; // 0xc0c
            std::int32_t m_iBKBChargesUsed; // 0xc10
            std::int32_t m_iAeonChargesUsed; // 0xc14
            std::int32_t m_iRefresherChargesUsed; // 0xc18
            source2sdk::entity2::GameTime_t m_flRefresherUseTime; // 0xc1c
            float m_flRefresherLastCooldown; // 0xc20
            source2sdk::entity2::GameTime_t m_flLastDealtDamageTime; // 0xc24
            std::int32_t m_iBotDebugData; // 0xc28
            bool m_bIsIllusion; // 0xc2c
            bool m_bHasClientSeenIllusionModifier; // 0xc2d
            uint8_t _pad0c2e[0x2]; // 0xc2e
            // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilities;
            char m_vecAbilities[0x18]; // 0xc30
            // m_vecAbilitiesClientPrediction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecAbilitiesClientPrediction;
            char m_vecAbilitiesClientPrediction[0x18]; // 0xc48
            std::int32_t m_nLocalAbilityBarSequenceNumber; // 0xc60
            float m_flInvisibilityLevel; // 0xc64
            float m_flHullRadius; // 0xc68
            float m_flCollisionPadding; // 0xc6c
            float m_flRingRadius; // 0xc70
            float m_flProjectileCollisionSize; // 0xc74
            CUtlSymbolLarge m_iszUnitName; // 0xc78
            CUtlSymbolLarge m_iszUnitNameIconOverride; // 0xc80
            CUtlSymbolLarge m_iszParticleFolder; // 0xc88
            CUtlSymbolLarge m_iszSoundSet; // 0xc90
            CUtlSymbolLarge m_iszSelectionGroup; // 0xc98
            CUtlSymbolLarge m_iszVoiceFile; // 0xca0
            CUtlSymbolLarge m_iszGameSoundsFile; // 0xca8
            CUtlSymbolLarge m_iszVoiceBackgroundSound; // 0xcb0
            CUtlSymbolLarge m_iszIdleSoundLoop; // 0xcb8
            CUtlString m_szUnitLabel; // 0xcc0
            CUtlString m_szScaleset; // 0xcc8
            std::uint8_t m_nUnitLabelIndex; // 0xcd0
            uint8_t _pad0cd1[0x7]; // 0xcd1
            CUtlString m_strAnimationModifier; // 0xcd8
            CUtlString m_TerrainSpecificFootstepEffect; // 0xce0
            bool m_bUseCustomTerrainWeatherEffect; // 0xce8
            bool m_bHasClientSoundReplacement; // 0xce9
            bool m_bHasClientReplacementParticle; // 0xcea
            uint8_t _pad0ceb[0x15]; // 0xceb
            bool m_bResourcesLoaded; // 0xd00
            uint8_t _pad0d01[0x3]; // 0xd01
            source2sdk::entity2::GameTime_t m_flTauntCooldown; // 0xd04
            source2sdk::entity2::GameTime_t m_flTauntCooldown2; // 0xd08
            source2sdk::client::DOTA_SHOP_TYPE m_iCurShop; // 0xd0c
            CUtlSymbolLarge m_szCurShopEntName; // 0xd10
            std::int32_t m_iDayTimeVisionRange; // 0xd18
            std::int32_t m_iNightTimeVisionRange; // 0xd1c
            std::int32_t m_iDamageMin; // 0xd20
            std::int32_t m_iDamageMax; // 0xd24
            std::int32_t m_iDamageBonus; // 0xd28
            std::int32_t m_iBaseDamageMin; // 0xd2c
            std::int32_t m_iBaseDamageMax; // 0xd30
            uint8_t _pad0d34[0x4]; // 0xd34
            source2sdk::client::CDOTA_ModifierManager m_ModifierManager; // 0xd38
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0x10c8
            uint8_t _pad11b8[0x8]; // 0x11b8
            std::uint64_t m_nUnitState64; // 0x11c0
            uint8_t _pad11c8[0x8]; // 0x11c8
            std::uint64_t m_nUnitDebuffState; // 0x11d0
            bool m_bHasInventory; // 0x11d8
            uint8_t _pad11d9[0x3]; // 0x11d9
            std::int32_t m_iAcquisitionRange; // 0x11dc
            std::int32_t m_FoWViewID; // 0x11e0
            std::int32_t m_iTeamViewerID; // 0x11e4
            std::int32_t m_iPrevHealthPct; // 0x11e8
            std::int32_t m_iPrevLifeState; // 0x11ec
            std::int32_t m_iPrevTeam; // 0x11f0
            bool m_bLastShardState; // 0x11f4
            bool m_bLastScepterState; // 0x11f5
            bool m_bForceScepterState; // 0x11f6
            bool m_bForceShardState; // 0x11f7
            bool m_bPrevProvidesVision; // 0x11f8
            uint8_t _pad11f9[0x7]; // 0x11f9
            std::uint64_t m_nPrevControllableMask; // 0x1200
            uint8_t _pad1208[0x8]; // 0x1208
            source2sdk::client::CountdownTimer m_TagTime; // 0x1210
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x1228
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x1240
            float m_flIdleRunPoseDuration[2]; // 0x1248
            bool m_bAnimationTransitionActive; // 0x1250
            uint8_t _pad1251[0x3]; // 0x1251
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x1254
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x125c
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x1264
            uint8_t _pad126c[0x4c]; // 0x126c
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x12b8
            std::int32_t m_iAttackCapabilities; // 0x12bc
            std::int32_t m_iSpecialAbility; // 0x12c0
            std::int32_t m_iMoveCapabilities; // 0x12c4
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x12c8
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x12cc
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x12d0
            uint8_t _pad12d4[0x4]; // 0x12d4
            CUtlSymbolLarge m_iszMinimapIcon; // 0x12d8
            uint8_t _pad12e0[0x8]; // 0x12e0
            float m_flMinimapIconSize; // 0x12e8
            bool m_bMinimapDisableTint; // 0x12ec
            bool m_bMinimapDisableRotation; // 0x12ed
            Color m_colorHeroGlow; // 0x12ee
            uint8_t _pad12f2[0x2]; // 0x12f2
            std::int32_t m_iNearShopMask; // 0x12f4
            std::int32_t m_nPoseParameterTurn; // 0x12f8
            std::int32_t m_nPoseParameterRun; // 0x12fc
            float m_flLean; // 0x1300
            float m_flRun; // 0x1304
            std::int32_t m_anglediff; // 0x1308
            bool m_bInfoKeyActive; // 0x130c
            bool m_bNewUpdateAssetModifiersNetworked; // 0x130d
            uint8_t _pad130e[0x2]; // 0x130e
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1310
            bool m_bSuppressGlow; // 0x1314
            bool m_bWasSinking; // 0x1315
            uint8_t _pad1316[0x2]; // 0x1316
            float m_flRangeDisplayDist; // 0x1318
            uint8_t _pad131c[0x1e4]; // 0x131c
            CUtlSymbolLarge m_szDefaultIdle; // 0x1500
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x1508
            source2sdk::client::CountdownTimer m_damagetimer; // 0x1510
            float m_fZDelta; // 0x1528
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x152c
            bool m_bBaseStatsChanged; // 0x1530
            bool m_bNeedsSoundEmitterRefresh; // 0x1531
            uint8_t _pad1532[0x2]; // 0x1532
            float m_flPhysicalArmorValue; // 0x1534
            float m_flMagicalResistanceValue; // 0x1538
            std::int32_t m_nPrevSequenceParity; // 0x153c
            uint8_t _pad1540[0xa0]; // 0x1540
            float m_flPrevInvisLevel; // 0x15e0
            uint8_t _pad15e4[0x4]; // 0x15e4
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x8]; // 0x15e8
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x8]; // 0x15f0
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x8]; // 0x15f8
            bool m_bClientReplacementModelNeedsRebuild; // 0x1600
            uint8_t _pad1601[0x3]; // 0x1601
            std::int32_t m_nClientReplacementModelReloadCount; // 0x1604
            std::int8_t m_nUnitModelVariant; // 0x1608
            std::int8_t m_nUnitModelVariantCount; // 0x1609
            uint8_t _pad160a[0x2]; // 0x160a
            std::int32_t m_iPrevSequence; // 0x160c
            char* m_pLastWeatherEffectName; // 0x1610
            uint8_t _pad1618[0x8]; // 0x1618
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x1620
            bool m_bIsWaitingToSpawn; // 0x1638
            uint8_t _pad1639[0x7]; // 0x1639
            std::int64_t m_nTotalDamageTaken; // 0x1640
            float m_flManaRegen; // 0x1648
            float m_flHealthRegen; // 0x164c
            bool m_bIsMoving; // 0x1650
            uint8_t _pad1651[0x3]; // 0x1651
            float m_fRevealRadius; // 0x1654
            bool m_bCanUseWards; // 0x1658
            bool m_bCanUseAllItems; // 0x1659
            uint8_t _pad165a[0x2]; // 0x165a
            std::int32_t m_iXPBounty; // 0x165c
            std::int32_t m_iXPBountyExtra; // 0x1660
            std::int32_t m_iGoldBountyMin; // 0x1664
            std::int32_t m_iGoldBountyMax; // 0x1668
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x166c
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x1670
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x1674
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x8]; // 0x1678
            bool m_bCombinerMaterialOverrideListChanged; // 0x1680
            uint8_t _pad1681[0x3]; // 0x1681
            std::int32_t m_nBaseModelMeshCount; // 0x1684
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0x1688
            std::int8_t m_nArcanaLevel; // 0x16a0
            std::int8_t m_nDefaultArcanaLevel; // 0x16a1
            Color m_defaultColorGemColor; // 0x16a2
            uint8_t _pad16a6[0x1a]; // 0x16a6
            bool m_bHasBuiltWearableSpawnList; // 0x16c0
            bool m_bHasCostume; // 0x16c1
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x16c2
            bool m_bWasRevealedFromFOWAsDead; // 0x16c3
            source2sdk::entity2::GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // 0x16c4
            uint8_t _pad16c8[0x14]; // 0x16c8
            float m_flAdditionalSinkDelay; // 0x16dc
            uint8_t _pad16e0[0x28]; // 0x16e0
            std::uint32_t m_nScepterUpgradeID; // 0x1708
            std::uint32_t m_nShardUpgradeID; // 0x170c
            uint8_t _pad1710[0xe0]; // 0x1710
            std::int32_t m_NetworkActivity; // 0x17f0
            std::int32_t m_PrevNetworkActivity; // 0x17f4
            std::int32_t m_NetworkSequenceIndex; // 0x17f8
            bool m_bShouldDoFlyHeightVisual; // 0x17fc
            uint8_t _pad17fd[0x3]; // 0x17fd
            float m_flStartSequenceCycle; // 0x1800
            uint8_t _pad1804[0x4]; // 0x1804
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1808
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x4]; // 0x1820
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x4]; // 0x1824
            uint8_t _pad1828[0x10]; // 0x1828
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x18]; // 0x1838
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x18]; // 0x1850
            char m_CustomHealthLabel[256]; // 0x1868
            Color m_CustomHealthLabelColor; // 0x1968
            source2sdk::client::OriginalModelFlags_t m_nIsOriginalModel; // 0x196c
            uint8_t _pad196d[0x3]; // 0x196d
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x1970
            uint8_t _pad1974[0x1]; // 0x1974
            Color m_gibTintColor; // 0x1975
            bool m_bForceMaterialCombine; // 0x1979
            bool m_bShouldDrawParticlesWhileHidden; // 0x197a
            bool m_bIsClientThinkPending; // 0x197b
            bool m_bActivityModifiersDirty; // 0x197c
            bool m_bUnitModelVariantChanged; // 0x197d
            bool m_bWearablesAreTaunting; // 0x197e
            bool m_bWearablesLoadoutOverride; // 0x197f
            uint8_t _pad1980[0x10]; // 0x1980
            bool m_bShowCannotBeDisabledIcon; // 0x1990
            uint8_t _pad1991[0x1f]; // 0x1991
            std::int32_t m_nVisionPreviewViewer; // 0x19b0
            uint8_t _pad19b4[0x4];

            // Datamap fields:
            // uint8_t m_iTeamNum; // 0x3e7
            // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
            // int32_t EconItemCount; // 0x7fffffff
            // bool inPortrait; // 0x7fffffff
            // bool EnableAutoStyles; // 0x7fffffff
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_BaseNPC because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x19b8);
    };
};
