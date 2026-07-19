#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CDOTACustomShopInfo.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDOTABaseGameMode : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x18]; // 0x498
            CUtlString m_ForcedHUDSkin; // 0x4b0            
            source2sdk::client::HeroID_t m_nCustomGameForceHeroSelectionId; // 0x4b8            
            source2sdk::client::HeroFacetID_t m_nCustomGameForceHeroVariant; // 0x4bc            
            bool m_bAlwaysShowPlayerInventory; // 0x4c0            
            bool m_bGoldSoundDisabled; // 0x4c1            
            bool m_bRecommendedItemsDisabled; // 0x4c2            
            bool m_bStickyItemDisabled; // 0x4c3            
            bool m_bStashPurchasingDisabled; // 0x4c4            
            bool m_bFogOfWarDisabled; // 0x4c5            
            bool m_bUseUnseenFOW; // 0x4c6            
            bool m_bUseCustomBuybackCost; // 0x4c7            
            bool m_bUseCustomBuybackCooldown; // 0x4c8            
            bool m_bBuybackEnabled; // 0x4c9            
            bool m_bUseTurboCouriers; // 0x4ca            
            uint8_t _pad04cb[0x1]; // 0x4cb
            float m_flCameraDistanceOverride; // 0x4cc            
            std::int32_t m_nCameraSmoothCountOverride; // 0x4d0            
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x4]; // 0x4d4            
            bool m_bTopBarTeamValuesOverride; // 0x4d8            
            bool m_bTopBarTeamValuesVisible; // 0x4d9            
            uint8_t _pad04da[0x2]; // 0x4da
            std::int32_t m_nTeamGoodGuysTopBarValue; // 0x4dc            
            std::int32_t m_nTeamBadGuysTopBarValue; // 0x4e0            
            bool m_bAlwaysShowPlayerNames; // 0x4e4            
            bool m_bUseCustomHeroLevels; // 0x4e5            
            uint8_t _pad04e6[0x2]; // 0x4e6
            // m_nCustomXPRequiredToReachNextLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_nCustomXPRequiredToReachNextLevel;
            char m_nCustomXPRequiredToReachNextLevel[0x18]; // 0x4e8            
            bool m_bTowerBackdoorProtectionEnabled; // 0x500            
            bool m_bBotThinkingEnabled; // 0x501            
            bool m_bAnnouncerDisabled; // 0x502            
            bool m_bAnnouncerGameModeAnnounceDisabled; // 0x503            
            bool m_bDeathTipsDisabled; // 0x504            
            bool m_bFilterPlayerHeroAvailability; // 0x505            
            bool m_bKillingSpreeAnnouncerDisabled; // 0x506            
            uint8_t _pad0507[0x1]; // 0x507
            float m_flFixedRespawnTime; // 0x508            
            float m_flBuybackCostScale; // 0x50c            
            float m_flRespawnTimeScale; // 0x510            
            bool m_bLoseGoldOnDeath; // 0x514            
            bool m_bKillableTombstones; // 0x515            
            uint8_t _pad0516[0x2]; // 0x516
            std::uint32_t m_nHUDVisibilityBits; // 0x518            
            float m_flMinimumAttackSpeed; // 0x51c            
            float m_flMaximumAttackSpeed; // 0x520            
            bool m_bIsDaynightCycleDisabled; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            float m_flDaynightCycleAdvanceRate; // 0x528            
            bool m_bAreWeatherEffectsDisabled; // 0x52c            
            bool m_bDisableHudFlip; // 0x52d            
            bool m_bEnableFriendlyBuildingMoveTo; // 0x52e            
            bool m_bIsDeathOverlayDisabled; // 0x52f            
            bool m_bIsHudCombatEventsDisabled; // 0x530            
            uint8_t _pad0531[0x7]; // 0x531
            CUtlString m_strDefaultStickyItem; // 0x538            
            CUtlString m_sCustomTerrainWeatherEffect; // 0x540            
            CUtlString m_strTPScrollSlotItemOverride; // 0x548            
            float m_flStrengthDamage; // 0x550            
            float m_flStrengthHP; // 0x554            
            float m_flStrengthHPRegen; // 0x558            
            float m_flAgilityDamage; // 0x55c            
            float m_flAgilityArmor; // 0x560            
            float m_flAgilityAttackSpeed; // 0x564            
            float m_flAgilityMovementSpeedPercent; // 0x568            
            float m_flIntelligenceDamage; // 0x56c            
            float m_flIntelligenceMana; // 0x570            
            float m_flIntelligenceManaRegen; // 0x574            
            float m_flIntelligenceMres; // 0x578            
            float m_flIntelligenceSpellAmpPercent; // 0x57c            
            float m_flStrengthMagicResistancePercent; // 0x580            
            float m_flAttributeAllDamage; // 0x584            
            float m_flDraftingHeroPickSelectTimeOverride; // 0x588            
            float m_flDraftingBanningTimeOverride; // 0x58c            
            bool m_bPauseEnabled; // 0x590            
            uint8_t _pad0591[0x3]; // 0x591
            std::int32_t m_iCustomScanMaxCharges; // 0x594            
            float m_flCustomScanCooldown; // 0x598            
            float m_flCustomGlyphCooldown; // 0x59c            
            float m_flCustomBackpackSwapCooldown; // 0x5a0            
            float m_flCustomBackpackCooldownPercent; // 0x5a4            
            bool m_bDefaultRuneSpawnLogic; // 0x5a8            
            bool m_bEnableFreeCourierMode; // 0x5a9            
            bool m_bAllowNeutralItemDrops; // 0x5aa            
            bool m_bEnableNeutralStash; // 0x5ab            
            bool m_bEnableNeutralStashTeamViewOnly; // 0x5ac            
            bool m_bEnableNeutralItemHideUndiscovered; // 0x5ad            
            bool m_bEnableSendToStash; // 0x5ae            
            bool m_bForceRightClickAttackDisabled; // 0x5af            
            // m_vecCustomShopInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTACustomShopInfo> m_vecCustomShopInfo;
            char m_vecCustomShopInfo[0x68]; // 0x5b0            
            bool m_bCanSellAnywhere; // 0x618            
            uint8_t _pad0619[0x3]; // 0x619
            float m_flCameraNearZ; // 0x61c            
            float m_flCameraFarZ; // 0x620            
            std::int32_t m_nCustomRadiantScore; // 0x624            
            std::int32_t m_nCustomDireScore; // 0x628            
            bool m_bAbilityUpgradeWhitelistEnabled; // 0x62c            
            uint8_t _pad062d[0x3]; // 0x62d
            // m_vecAbilityUpgradeWhitelist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecAbilityUpgradeWhitelist;
            char m_vecAbilityUpgradeWhitelist[0x18]; // 0x630            
            bool m_bGiveFreeTPOnDeath; // 0x648            
            uint8_t _pad0649[0x3]; // 0x649
            std::int32_t m_nInnateMeleeDamageBlockPct; // 0x64c            
            std::int32_t m_nInnateMeleeDamageBlockAmount; // 0x650            
            std::int32_t m_nInnateMeleeDamageBlockPerLevelAmount; // 0x654            
            float m_flWaterRuneSpawnInterval; // 0x658            
            uint8_t _pad065c[0x4]; // 0x65c
            // m_vecBigHealthBarUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_vecBigHealthBarUnits;
            char m_vecBigHealthBarUnits[0x18]; // 0x660            
            uint8_t _pad0678[0x30]; // 0x678
            bool m_bSelectionGoldPenaltyEnabled; // 0x6a8            
            bool m_bRemoveIllusionsOnDeath; // 0x6a9            
            bool m_bRandomHeroBonusItemGrantDisabled; // 0x6aa            
            bool m_bDisableClumpingBehaviorByDefault; // 0x6ab            
            bool m_bRuneTypeEnabled[10]; // 0x6ac            
            bool m_bOverrideBotLateGame; // 0x6b6            
            bool m_bBotsAlwaysPushWithHuman; // 0x6b7            
            bool m_bBotsInLateGame; // 0x6b8            
            uint8_t _pad06b9[0x3]; // 0x6b9
            std::int32_t m_nBotMaxPushTier; // 0x6bc            
            float m_flFountainPercentageHealthRegen; // 0x6c0            
            float m_flFountainPercentageManaRegen; // 0x6c4            
            float m_flFountainConstantManaRegen; // 0x6c8            
            float m_flPowerRuneSpawnInterval; // 0x6cc            
            float m_flBountyRuneSpawnInterval; // 0x6d0            
            float m_flXPRuneSpawnInterval; // 0x6d4            
            float m_flThinkInterval; // 0x6d8            
            std::int32_t m_nForcedHeroCapOnReset; // 0x6dc            
            uint8_t _pad06e0[0xf8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABaseGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABaseGameMode) == 0x7d8);
    };
};
