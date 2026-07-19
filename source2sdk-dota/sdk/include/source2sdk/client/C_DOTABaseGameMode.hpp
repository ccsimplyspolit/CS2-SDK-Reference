#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTACustomShopInfo.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/HeroFacetID_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
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
        // Size: 0x7d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DOTABaseGameMode : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlString m_ForcedHUDSkin; // 0x5f0            
            source2sdk::client::HeroID_t m_nCustomGameForceHeroSelectionId; // 0x5f8            
            source2sdk::client::HeroFacetID_t m_nCustomGameForceHeroVariant; // 0x5fc            
            bool m_bAlwaysShowPlayerInventory; // 0x600            
            bool m_bGoldSoundDisabled; // 0x601            
            bool m_bRecommendedItemsDisabled; // 0x602            
            bool m_bStickyItemDisabled; // 0x603            
            bool m_bStashPurchasingDisabled; // 0x604            
            bool m_bFogOfWarDisabled; // 0x605            
            bool m_bUseUnseenFOW; // 0x606            
            bool m_bUseCustomBuybackCost; // 0x607            
            bool m_bUseCustomBuybackCooldown; // 0x608            
            bool m_bBuybackEnabled; // 0x609            
            bool m_bUseTurboCouriers; // 0x60a            
            uint8_t _pad060b[0x1]; // 0x60b
            float m_flCameraDistanceOverride; // 0x60c            
            std::int32_t m_nCameraSmoothCountOverride; // 0x610            
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x4]; // 0x614            
            bool m_bTopBarTeamValuesOverride; // 0x618            
            bool m_bTopBarTeamValuesVisible; // 0x619            
            uint8_t _pad061a[0x2]; // 0x61a
            std::int32_t m_nTeamGoodGuysTopBarValue; // 0x61c            
            std::int32_t m_nTeamBadGuysTopBarValue; // 0x620            
            bool m_bAlwaysShowPlayerNames; // 0x624            
            bool m_bUseCustomHeroLevels; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            // m_nCustomXPRequiredToReachNextLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_nCustomXPRequiredToReachNextLevel;
            char m_nCustomXPRequiredToReachNextLevel[0x18]; // 0x628            
            bool m_bTowerBackdoorProtectionEnabled; // 0x640            
            bool m_bBotThinkingEnabled; // 0x641            
            bool m_bAnnouncerDisabled; // 0x642            
            bool m_bAnnouncerGameModeAnnounceDisabled; // 0x643            
            bool m_bDeathTipsDisabled; // 0x644            
            bool m_bFilterPlayerHeroAvailability; // 0x645            
            bool m_bKillingSpreeAnnouncerDisabled; // 0x646            
            uint8_t _pad0647[0x1]; // 0x647
            float m_flFixedRespawnTime; // 0x648            
            float m_flBuybackCostScale; // 0x64c            
            float m_flRespawnTimeScale; // 0x650            
            bool m_bLoseGoldOnDeath; // 0x654            
            bool m_bKillableTombstones; // 0x655            
            uint8_t _pad0656[0x2]; // 0x656
            std::uint32_t m_nHUDVisibilityBits; // 0x658            
            float m_flMinimumAttackSpeed; // 0x65c            
            float m_flMaximumAttackSpeed; // 0x660            
            bool m_bIsDaynightCycleDisabled; // 0x664            
            uint8_t _pad0665[0x3]; // 0x665
            float m_flDaynightCycleAdvanceRate; // 0x668            
            bool m_bAreWeatherEffectsDisabled; // 0x66c            
            bool m_bDisableHudFlip; // 0x66d            
            bool m_bEnableFriendlyBuildingMoveTo; // 0x66e            
            bool m_bIsDeathOverlayDisabled; // 0x66f            
            bool m_bIsHudCombatEventsDisabled; // 0x670            
            uint8_t _pad0671[0x7]; // 0x671
            CUtlString m_strDefaultStickyItem; // 0x678            
            CUtlString m_sCustomTerrainWeatherEffect; // 0x680            
            CUtlString m_strTPScrollSlotItemOverride; // 0x688            
            float m_flStrengthDamage; // 0x690            
            float m_flStrengthHP; // 0x694            
            float m_flStrengthHPRegen; // 0x698            
            float m_flAgilityDamage; // 0x69c            
            float m_flAgilityArmor; // 0x6a0            
            float m_flAgilityAttackSpeed; // 0x6a4            
            float m_flAgilityMovementSpeedPercent; // 0x6a8            
            float m_flIntelligenceDamage; // 0x6ac            
            float m_flIntelligenceMana; // 0x6b0            
            float m_flIntelligenceManaRegen; // 0x6b4            
            float m_flIntelligenceMres; // 0x6b8            
            float m_flIntelligenceSpellAmpPercent; // 0x6bc            
            float m_flStrengthMagicResistancePercent; // 0x6c0            
            float m_flAttributeAllDamage; // 0x6c4            
            float m_flDraftingHeroPickSelectTimeOverride; // 0x6c8            
            float m_flDraftingBanningTimeOverride; // 0x6cc            
            bool m_bPauseEnabled; // 0x6d0            
            uint8_t _pad06d1[0x3]; // 0x6d1
            std::int32_t m_iCustomScanMaxCharges; // 0x6d4            
            float m_flCustomScanCooldown; // 0x6d8            
            float m_flCustomGlyphCooldown; // 0x6dc            
            float m_flCustomBackpackSwapCooldown; // 0x6e0            
            float m_flCustomBackpackCooldownPercent; // 0x6e4            
            bool m_bDefaultRuneSpawnLogic; // 0x6e8            
            bool m_bEnableFreeCourierMode; // 0x6e9            
            bool m_bAllowNeutralItemDrops; // 0x6ea            
            bool m_bEnableNeutralStash; // 0x6eb            
            bool m_bEnableNeutralStashTeamViewOnly; // 0x6ec            
            bool m_bEnableNeutralItemHideUndiscovered; // 0x6ed            
            bool m_bEnableSendToStash; // 0x6ee            
            bool m_bForceRightClickAttackDisabled; // 0x6ef            
            // m_vecCustomShopInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTACustomShopInfo> m_vecCustomShopInfo;
            char m_vecCustomShopInfo[0x68]; // 0x6f0            
            bool m_bCanSellAnywhere; // 0x758            
            uint8_t _pad0759[0x3]; // 0x759
            float m_flCameraNearZ; // 0x75c            
            float m_flCameraFarZ; // 0x760            
            std::int32_t m_nCustomRadiantScore; // 0x764            
            std::int32_t m_nCustomDireScore; // 0x768            
            bool m_bAbilityUpgradeWhitelistEnabled; // 0x76c            
            uint8_t _pad076d[0x3]; // 0x76d
            // m_vecAbilityUpgradeWhitelist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecAbilityUpgradeWhitelist;
            char m_vecAbilityUpgradeWhitelist[0x18]; // 0x770            
            bool m_bGiveFreeTPOnDeath; // 0x788            
            uint8_t _pad0789[0x3]; // 0x789
            std::int32_t m_nInnateMeleeDamageBlockPct; // 0x78c            
            std::int32_t m_nInnateMeleeDamageBlockAmount; // 0x790            
            std::int32_t m_nInnateMeleeDamageBlockPerLevelAmount; // 0x794            
            float m_flWaterRuneSpawnInterval; // 0x798            
            uint8_t _pad079c[0x4]; // 0x79c
            // m_vecBigHealthBarUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_DOTA_BaseNPC>> m_vecBigHealthBarUnits;
            char m_vecBigHealthBarUnits[0x18]; // 0x7a0            
            uint8_t _pad07b8[0x18]; // 0x7b8
            std::uint32_t m_nHUDVisibilityBitsPrevious; // 0x7d0            
            uint8_t _pad07d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABaseGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABaseGameMode) == 0x7d8);
    };
};
