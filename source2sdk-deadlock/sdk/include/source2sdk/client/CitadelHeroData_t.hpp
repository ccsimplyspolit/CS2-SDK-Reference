#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelStatsDisplay_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/client/EHeroType.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/HeroAnimGraphDefaultValueOverride_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroLevel_t.hpp"
#include "source2sdk/client/HeroPurchaseBonus_t.hpp"
#include "source2sdk/client/HeroScalingStat_t.hpp"
#include "source2sdk/client/HeroStatsDisplay_t.hpp"
#include "source2sdk/client/HeroStatsUI_t.hpp"
#include "source2sdk/client/ItemDraftWeight_t.hpp"
#include "source2sdk/client/ItemSlotInfo_t.hpp"
#include "source2sdk/client/ModCostBonuses_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCVSoundEventScriptList.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0xf08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        // static metadata: MVDataOverlayType "1"
        // static metadata: MVDataOutlinerLeafNameFn
        #pragma pack(push, 1)
        struct CitadelHeroData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecAnimGraphDefaultValueOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides;
            char m_vecAnimGraphDefaultValueOverrides[0x18]; // 0x8            
            uint8_t _pad0020[0x8]; // 0x20
            source2sdk::client::HeroID_t m_HeroID; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            CUtlString m_strHeroSortName; // 0x30            
            CUtlString m_strHeroSearchName; // 0x38            
            // metadata: MPropertyStartGroup "Screen Space Particle FX"
            // m_hDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle;
            char m_hDamageTakenParticle[0xe0]; // 0x40            
            // m_hGroundDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle;
            char m_hGroundDamageTakenParticle[0xe0]; // 0x120            
            // m_hDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle;
            char m_hDeathParticle[0xe0]; // 0x200            
            // m_hLowHealthParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle;
            char m_hLowHealthParticle[0xe0]; // 0x2e0            
            // metadata: MPropertyStartGroup "Visuals"
            CPanoramaImageName m_strIconImageSmall; // 0x3c0            
            CPanoramaImageName m_strIconHeroCard; // 0x3d0            
            CPanoramaImageName m_strIconHeroCardCritical; // 0x3e0            
            CPanoramaImageName m_strIconHeroCardGloat; // 0x3f0            
            CPanoramaImageName m_strMinimapImage; // 0x400            
            CPanoramaImageName m_strTopBarVertical; // 0x410            
            CPanoramaImageName m_strLogoImageEnglish; // 0x420            
            CPanoramaImageName m_strLogoImageLocalized; // 0x430            
            // m_hRespawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle;
            char m_hRespawnParticle[0xe0]; // 0x440            
            Color m_colorUI; // 0x520            
            uint8_t _pad0524[0x4]; // 0x524
            // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
            char m_strModelName[0xe0]; // 0x528            
            std::int32_t m_nModelSkin; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x610            
            // metadata: MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
            // m_strMainOnlyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strMainOnlyModelName;
            char m_strMainOnlyModelName[0xe0]; // 0x6f0            
            // metadata: MPropertyDescription "When set, also use the 'Main Only Model Name' in the Experimental branch"
            bool m_bUseMainOnlyModelForExperimental; // 0x7d0            
            uint8_t _pad07d1[0x7]; // 0x7d1
            // metadata: MPropertyStartGroup "UI"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIPortraitMap; // 0x7d8            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIShoppingMap; // 0x7e0            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUITeamRevealMap; // 0x7e8            
            // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
            CUtlString m_strUIPostgamePortraitMap; // 0x7f0            
            source2sdk::client::HeroStatsUI_t m_heroStatsUI; // 0x7f8            
            source2sdk::client::HeroStatsDisplay_t m_heroStatsDisplay; // 0x828            
            source2sdk::client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0x8b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDeathVOSound; // 0x960            
            CSoundEventName m_strDeathSound; // 0x970            
            CSoundEventName m_strLastHitSound; // 0x980            
            CSoundEventName m_strRosterSelectedSound; // 0x990            
            CSoundEventName m_strRosterRemovedSound; // 0x9a0            
            CSoundEventName m_strRosterAvoidedSound; // 0x9b0            
            CSoundEventName m_strVoteRevealSound; // 0x9c0            
            CSoundEventName m_strLowHealthSound; // 0x9d0            
            CSoundEventName m_strHeroSpecificLowHealthSound; // 0x9e0            
            CSoundEventName m_strMovementLoop; // 0x9f0            
            CSoundEventName m_strPostGameVictorySound; // 0xa00            
            CSoundEventName m_strPostGameDefeatSound; // 0xa10            
            // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
            // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
            char m_hGameSoundEventScript[0xe0]; // 0xa20            
            // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
            char m_hGeneratedVOEventScript[0xe0]; // 0xb00            
            float m_flStealthSpeedMetersPerSecond; // 0xbe0            
            // metadata: MPropertyStartGroup
            bool m_bInDevelopment; // 0xbe4            
            bool m_bAssignedPlayersOnly; // 0xbe5            
            bool m_bNewPlayerRecommended; // 0xbe6            
            bool m_bLaneTestingRecommended; // 0xbe7            
            bool m_bNeedsTesting; // 0xbe8            
            bool m_bLimitedTesting; // 0xbe9            
            bool m_bDisabled; // 0xbea            
            bool m_bPlayerSelectable; // 0xbeb            
            bool m_bPrereleaseOnly; // 0xbec            
            uint8_t _pad0bed[0x3]; // 0xbed
            std::int32_t m_nComplexity; // 0xbf0            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an ally bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nAllyBotDifficulty; // 0xbf4            
            // metadata: MPropertyDescription "Minimum bot match difficulty for this hero to appear as an enemy bot. -1 = never."
            // metadata: MPropertyAttributeRange "-1 4"
            std::int32_t m_nEnemyBotDifficulty; // 0xbf8            
            // metadata: MPropertyStartGroup "Low Health Settings"
            // metadata: MPropertyDescription "Percentage of health to be considered low health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinLowHealthPercentage; // 0xbfc            
            // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxLowHealthPercentage; // 0xc00            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health"
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMinMidHealthPercentage; // 0xc04            
            // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
            // metadata: MPropertyAttributeRange "0 1"
            float m_flMaxMidHealthPercentage; // 0xc08            
            // metadata: MPropertyDescription "Min Max Health for Remapped Value"
            float m_flMinHealthForThreshold; // 0xc0c            
            // metadata: MPropertyDescription "Max Max Health for remapped value"
            float m_flMaxHealthForThreshold; // 0xc10            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a player"
            float m_flInCombatWithHeroDuration; // 0xc14            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a non-player"
            float m_flInCombatWithNonHeroDuration; // 0xc18            
            // metadata: MPropertyDescription "How long a player is deemed in combat taking or dealing damage to a neutral trooper"
            float m_flInCombatWithNeutralDuration; // 0xc1c            
            // metadata: MPropertyDescription "Show N/A for falloff numbers in gun panel."
            bool m_bNAGunFalloffRange; // 0xc20            
            // metadata: MPropertyDescription "Can this hero make it into the tunnel areas without it being a bug."
            bool m_bAllowedInTunnels; // 0xc21            
            uint8_t _pad0c22[0x6]; // 0xc22
            // metadata: MPropertyStartGroup
            // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,float> m_mapStartingStats;
            char m_mapStartingStats[0x28]; // 0xc28            
            // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,source2sdk::client::HeroScalingStat_t> m_mapScalingStats;
            char m_mapScalingStats[0x28]; // 0xc50            
            CPiecewiseCurve m_groundDashPositionCurve; // 0xc78            
            // m_mapModCostBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::ModCostBonuses_t>> m_mapModCostBonuses;
            char m_mapModCostBonuses[0x28]; // 0xcb8            
            uint8_t _pad0ce0[0x18]; // 0xce0
            // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
            char m_mapBoundAbilities[0x28]; // 0xcf8            
            // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
            char m_mapWIPAbilities[0x28]; // 0xd20            
            // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,source2sdk::client::ItemSlotInfo_t> m_mapItemSlotInfo;
            char m_mapItemSlotInfo[0x28]; // 0xd48            
            uint8_t _pad0d70[0x50]; // 0xd70
            source2sdk::client::EAbilityResourceType m_eAbilityResourceType; // 0xdc0            
            uint8_t _pad0dc4[0x4]; // 0xdc4
            CUtlString m_strGunTag; // 0xdc8            
            // m_vecHeroTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroTags;
            char m_vecHeroTags[0x18]; // 0xdd0            
            source2sdk::client::EHeroType m_eHeroType; // 0xde8            
            uint8_t _pad0dec[0x4]; // 0xdec
            CUtlString m_strRosterBackgroundLayout; // 0xdf0            
            CUtlString m_strHideoutRichPresence; // 0xdf8            
            // metadata: MPropertyMapKeyLeafChoiceProviderFn
            // m_mapItemDraftCounterWeights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,float> m_mapItemDraftCounterWeights;
            char m_mapItemDraftCounterWeights[0x28]; // 0xe00            
            uint8_t _pad0e28[0x18]; // 0xe28
            // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
            char m_mapStandardLevelUpUpgrades[0x28]; // 0xe40            
            // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<std::int32_t,source2sdk::client::HeroLevel_t> m_mapLevelInfo;
            char m_mapLevelInfo[0x28]; // 0xe68            
            // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EItemSlotTypes_t,CUtlVector<source2sdk::client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
            char m_mapPurchaseBonuses[0x28]; // 0xe90            
            // metadata: MPropertyMapKeyLeafChoiceProviderFn
            // m_mapItemDraftBucketing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::ItemDraftWeight_t> m_mapItemDraftBucketing;
            char m_mapItemDraftBucketing[0x28]; // 0xeb8            
            uint8_t _pad0ee0[0x28];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecAnimGraphDefaultValueOverrides) == 0x8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_HeroID) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSortName) == 0x30);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSearchName) == 0x38);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDamageTakenParticle) == 0x40);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGroundDamageTakenParticle) == 0x120);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hDeathParticle) == 0x200);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hLowHealthParticle) == 0x2e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconImageSmall) == 0x3c0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconHeroCard) == 0x3d0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconHeroCardCritical) == 0x3e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strIconHeroCardGloat) == 0x3f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMinimapImage) == 0x400);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strTopBarVertical) == 0x410);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLogoImageEnglish) == 0x420);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLogoImageLocalized) == 0x430);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hRespawnParticle) == 0x440);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_colorUI) == 0x520);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strModelName) == 0x528);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nModelSkin) == 0x608);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strWIPModelName) == 0x610);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMainOnlyModelName) == 0x6f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bUseMainOnlyModelForExperimental) == 0x7d0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIPortraitMap) == 0x7d8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIShoppingMap) == 0x7e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUITeamRevealMap) == 0x7e8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strUIPostgamePortraitMap) == 0x7f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsUI) == 0x7f8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_heroStatsDisplay) == 0x828);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_ShopStatDisplay) == 0x8b8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strDeathVOSound) == 0x960);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strDeathSound) == 0x970);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLastHitSound) == 0x980);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterSelectedSound) == 0x990);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterRemovedSound) == 0x9a0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterAvoidedSound) == 0x9b0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strVoteRevealSound) == 0x9c0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strLowHealthSound) == 0x9d0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0x9e0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strMovementLoop) == 0x9f0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameVictorySound) == 0xa00);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strPostGameDefeatSound) == 0xa10);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGameSoundEventScript) == 0xa20);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xb00);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xbe0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bInDevelopment) == 0xbe4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xbe5);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNewPlayerRecommended) == 0xbe6);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLaneTestingRecommended) == 0xbe7);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNeedsTesting) == 0xbe8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bLimitedTesting) == 0xbe9);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bDisabled) == 0xbea);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPlayerSelectable) == 0xbeb);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bPrereleaseOnly) == 0xbec);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nComplexity) == 0xbf0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nAllyBotDifficulty) == 0xbf4);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_nEnemyBotDifficulty) == 0xbf8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xbfc);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xc00);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xc04);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xc08);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMinHealthForThreshold) == 0xc0c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xc10);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithHeroDuration) == 0xc14);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithNonHeroDuration) == 0xc18);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_flInCombatWithNeutralDuration) == 0xc1c);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bNAGunFalloffRange) == 0xc20);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_bAllowedInTunnels) == 0xc21);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStartingStats) == 0xc28);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapScalingStats) == 0xc50);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_groundDashPositionCurve) == 0xc78);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapModCostBonuses) == 0xcb8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapBoundAbilities) == 0xcf8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapWIPAbilities) == 0xd20);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapItemSlotInfo) == 0xd48);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eAbilityResourceType) == 0xdc0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strGunTag) == 0xdc8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_vecHeroTags) == 0xdd0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_eHeroType) == 0xde8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strRosterBackgroundLayout) == 0xdf0);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_strHideoutRichPresence) == 0xdf8);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapItemDraftCounterWeights) == 0xe00);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0xe40);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapLevelInfo) == 0xe68);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapPurchaseBonuses) == 0xe90);
        static_assert(offsetof(source2sdk::client::CitadelHeroData_t, m_mapItemDraftBucketing) == 0xeb8);
        
        static_assert(sizeof(source2sdk::client::CitadelHeroData_t) == 0xf08);
    };
};
