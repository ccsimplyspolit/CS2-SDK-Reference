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
        // Size: 0x19b0
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
            source2sdk::client::C_DOTA_UnitInventory m_Inventory; // 0x10c0            
            uint8_t _pad11b0[0x8]; // 0x11b0
            std::uint64_t m_nUnitState64; // 0x11b8            
            uint8_t _pad11c0[0x8]; // 0x11c0
            std::uint64_t m_nUnitDebuffState; // 0x11c8            
            bool m_bHasInventory; // 0x11d0            
            uint8_t _pad11d1[0x3]; // 0x11d1
            std::int32_t m_iAcquisitionRange; // 0x11d4            
            std::int32_t m_FoWViewID; // 0x11d8            
            std::int32_t m_iTeamViewerID; // 0x11dc            
            std::int32_t m_iPrevHealthPct; // 0x11e0            
            std::int32_t m_iPrevLifeState; // 0x11e4            
            std::int32_t m_iPrevTeam; // 0x11e8            
            bool m_bLastShardState; // 0x11ec            
            bool m_bLastScepterState; // 0x11ed            
            bool m_bForceScepterState; // 0x11ee            
            bool m_bForceShardState; // 0x11ef            
            bool m_bPrevProvidesVision; // 0x11f0            
            uint8_t _pad11f1[0x7]; // 0x11f1
            std::uint64_t m_nPrevControllableMask; // 0x11f8            
            uint8_t _pad1200[0x8]; // 0x1200
            source2sdk::client::CountdownTimer m_TagTime; // 0x1208            
            source2sdk::client::CountdownTimer m_ClickedTime; // 0x1220            
            source2sdk::entity2::GameTime_t m_flIdleRunPoseStartTime[2]; // 0x1238            
            float m_flIdleRunPoseDuration[2]; // 0x1240            
            bool m_bAnimationTransitionActive; // 0x1248            
            uint8_t _pad1249[0x3]; // 0x1249
            std::int32_t m_nAnimationTransitionPoseParameters[2]; // 0x124c            
            std::int32_t m_nAnimationTransitionInjuredPoseParameters[2]; // 0x1254            
            std::int32_t m_nAnimationTransitionAggressivePoseParameters[2]; // 0x125c            
            uint8_t _pad1264[0x4c]; // 0x1264
            source2sdk::entity2::GameTime_t m_flTimeSinceLastAbilityNag; // 0x12b0            
            std::int32_t m_iAttackCapabilities; // 0x12b4            
            std::int32_t m_iSpecialAbility; // 0x12b8            
            std::int32_t m_iMoveCapabilities; // 0x12bc            
            source2sdk::client::PlayerID_t m_nPlayerOwnerID; // 0x12c0            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x12c4            
            source2sdk::entity2::GameTime_t m_flLastAttackTime; // 0x12c8            
            uint8_t _pad12cc[0x4]; // 0x12cc
            CUtlSymbolLarge m_iszMinimapIcon; // 0x12d0            
            uint8_t _pad12d8[0x8]; // 0x12d8
            float m_flMinimapIconSize; // 0x12e0            
            bool m_bMinimapDisableTint; // 0x12e4            
            bool m_bMinimapDisableRotation; // 0x12e5            
            Color m_colorHeroGlow; // 0x12e6            
            uint8_t _pad12ea[0x2]; // 0x12ea
            std::int32_t m_iNearShopMask; // 0x12ec            
            std::int32_t m_nPoseParameterTurn; // 0x12f0            
            std::int32_t m_nPoseParameterRun; // 0x12f4            
            float m_flLean; // 0x12f8            
            float m_flRun; // 0x12fc            
            std::int32_t m_anglediff; // 0x1300            
            bool m_bInfoKeyActive; // 0x1304            
            bool m_bNewUpdateAssetModifiersNetworked; // 0x1305            
            uint8_t _pad1306[0x2]; // 0x1306
            source2sdk::entity2::GameTick_t m_nAssetModifiersLastUpdatedTick; // 0x1308            
            bool m_bSuppressGlow; // 0x130c            
            bool m_bWasSinking; // 0x130d            
            uint8_t _pad130e[0x2]; // 0x130e
            float m_flRangeDisplayDist; // 0x1310            
            uint8_t _pad1314[0x1e4]; // 0x1314
            CUtlSymbolLarge m_szDefaultIdle; // 0x14f8            
            CUtlSymbolLarge m_szDefaultRareIdle; // 0x1500            
            source2sdk::client::CountdownTimer m_damagetimer; // 0x1508            
            float m_fZDelta; // 0x1520            
            source2sdk::entity2::GameTime_t m_flDeathTime; // 0x1524            
            bool m_bBaseStatsChanged; // 0x1528            
            bool m_bNeedsSoundEmitterRefresh; // 0x1529            
            uint8_t _pad152a[0x2]; // 0x152a
            float m_flPhysicalArmorValue; // 0x152c            
            float m_flMagicalResistanceValue; // 0x1530            
            std::int32_t m_nPrevSequenceParity; // 0x1534            
            uint8_t _pad1538[0xa0]; // 0x1538
            float m_flPrevInvisLevel; // 0x15d8            
            uint8_t _pad15dc[0x4]; // 0x15dc
            // m_nOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nOriginalModelIndex;
            char m_nOriginalModelIndex[0x8]; // 0x15e0            
            // m_nClientOriginalModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientOriginalModelIndex;
            char m_nClientOriginalModelIndex[0x8]; // 0x15e8            
            // m_nClientReplacementModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_nClientReplacementModelIndex;
            char m_nClientReplacementModelIndex[0x8]; // 0x15f0            
            bool m_bClientReplacementModelNeedsRebuild; // 0x15f8            
            uint8_t _pad15f9[0x3]; // 0x15f9
            std::int32_t m_nClientReplacementModelReloadCount; // 0x15fc            
            std::int8_t m_nUnitModelVariant; // 0x1600            
            std::int8_t m_nUnitModelVariantCount; // 0x1601            
            uint8_t _pad1602[0x2]; // 0x1602
            std::int32_t m_iPrevSequence; // 0x1604            
            char* m_pLastWeatherEffectName; // 0x1608            
            uint8_t _pad1610[0x8]; // 0x1610
            source2sdk::client::CountdownTimer m_VoiceBackgroundSoundTimer; // 0x1618            
            bool m_bIsWaitingToSpawn; // 0x1630            
            uint8_t _pad1631[0x7]; // 0x1631
            std::int64_t m_nTotalDamageTaken; // 0x1638            
            float m_flManaRegen; // 0x1640            
            float m_flHealthRegen; // 0x1644            
            bool m_bIsMoving; // 0x1648            
            uint8_t _pad1649[0x3]; // 0x1649
            float m_fRevealRadius; // 0x164c            
            bool m_bCanUseWards; // 0x1650            
            bool m_bCanUseAllItems; // 0x1651            
            uint8_t _pad1652[0x2]; // 0x1652
            std::int32_t m_iXPBounty; // 0x1654            
            std::int32_t m_iXPBountyExtra; // 0x1658            
            std::int32_t m_iGoldBountyMin; // 0x165c            
            std::int32_t m_iGoldBountyMax; // 0x1660            
            // m_hOwnerNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwnerNPC;
            char m_hOwnerNPC[0x4]; // 0x1664            
            // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGoalEntity;
            char m_hGoalEntity[0x4]; // 0x1668            
            // m_hNeutralSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_NeutralSpawner> m_hNeutralSpawner;
            char m_hNeutralSpawner[0x4]; // 0x166c            
            // m_hClientOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hClientOverrideMaterial;
            char m_hClientOverrideMaterial[0x8]; // 0x1670            
            bool m_bCombinerMaterialOverrideListChanged; // 0x1678            
            uint8_t _pad1679[0x3]; // 0x1679
            std::int32_t m_nBaseModelMeshCount; // 0x167c            
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x18]; // 0x1680            
            std::int8_t m_nArcanaLevel; // 0x1698            
            std::int8_t m_nDefaultArcanaLevel; // 0x1699            
            Color m_defaultColorGemColor; // 0x169a            
            uint8_t _pad169e[0x1a]; // 0x169e
            bool m_bHasBuiltWearableSpawnList; // 0x16b8            
            bool m_bHasCostume; // 0x16b9            
            bool m_bRecreateParticleSystemsOnModifiersChange; // 0x16ba            
            bool m_bWasRevealedFromFOWAsDead; // 0x16bb            
            source2sdk::entity2::GameTick_t m_nMostRecentTickWeAwokeFromDormancy; // 0x16bc            
            uint8_t _pad16c0[0x14]; // 0x16c0
            float m_flAdditionalSinkDelay; // 0x16d4            
            uint8_t _pad16d8[0x28]; // 0x16d8
            std::uint32_t m_nScepterUpgradeID; // 0x1700            
            std::uint32_t m_nShardUpgradeID; // 0x1704            
            uint8_t _pad1708[0xe0]; // 0x1708
            std::int32_t m_NetworkActivity; // 0x17e8            
            std::int32_t m_PrevNetworkActivity; // 0x17ec            
            std::int32_t m_NetworkSequenceIndex; // 0x17f0            
            bool m_bShouldDoFlyHeightVisual; // 0x17f4            
            uint8_t _pad17f5[0x3]; // 0x17f5
            float m_flStartSequenceCycle; // 0x17f8            
            uint8_t _pad17fc[0x4]; // 0x17fc
            // m_ActivityModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbol> m_ActivityModifiers;
            char m_ActivityModifiers[0x18]; // 0x1800            
            // m_hBackgroundSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hBackgroundSceneEnt;
            char m_hBackgroundSceneEnt[0x4]; // 0x1818            
            // m_hSpeakingSceneEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_SceneEntity> m_hSpeakingSceneEnt;
            char m_hSpeakingSceneEnt[0x4]; // 0x181c            
            uint8_t _pad1820[0x10]; // 0x1820
            // m_hOldWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_EconWearable>> m_hOldWearables;
            char m_hOldWearables[0x18]; // 0x1830            
            // m_hOldWearableSkins has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlStringToken> m_hOldWearableSkins;
            char m_hOldWearableSkins[0x18]; // 0x1848            
            char m_CustomHealthLabel[256]; // 0x1860            
            Color m_CustomHealthLabelColor; // 0x1960            
            source2sdk::client::OriginalModelFlags_t m_nIsOriginalModel; // 0x1964            
            uint8_t _pad1965[0x3]; // 0x1965
            source2sdk::client::item_definition_index_t m_nWearableDefIndex; // 0x1968            
            uint8_t _pad196c[0x1]; // 0x196c
            Color m_gibTintColor; // 0x196d            
            bool m_bForceMaterialCombine; // 0x1971            
            bool m_bShouldDrawParticlesWhileHidden; // 0x1972            
            bool m_bIsClientThinkPending; // 0x1973            
            bool m_bActivityModifiersDirty; // 0x1974            
            bool m_bUnitModelVariantChanged; // 0x1975            
            bool m_bWearablesAreTaunting; // 0x1976            
            bool m_bWearablesLoadoutOverride; // 0x1977            
            uint8_t _pad1978[0x10]; // 0x1978
            bool m_bShowCannotBeDisabledIcon; // 0x1988            
            uint8_t _pad1989[0x1f]; // 0x1989
            std::int32_t m_nVisionPreviewViewer; // 0x19a8            
            uint8_t _pad19ac[0x4];
            
            // Datamap fields:
            // uint8_t m_iTeamNum; // 0x3e7
            // CHandle< CBaseEntity > econ_owner; // 0x7fffffff
            // int32_t EconItemCount; // 0x7fffffff
            // bool inPortrait; // 0x7fffffff
            // bool EnableAutoStyles; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC) == 0x19b0);
    };
};
