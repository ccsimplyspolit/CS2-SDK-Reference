#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ABILITY_TYPES.hpp"
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/DAMAGE_TYPES.hpp"
#include "source2sdk/client/DOTAOutgoingBonus_t.hpp"
#include "source2sdk/client/DOTA_ABILITY_BEHAVIOR.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_TEAM.hpp"
#include "source2sdk/client/DOTA_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/DotaAbilityRelationship_t.hpp"
#include "source2sdk/client/DotaGestureSlot_t.hpp"
#include "source2sdk/client/ItemQuality_t.hpp"
#include "source2sdk/client/ItemRecipe_t.hpp"
#include "source2sdk/client/SPELL_DISPELLABLE_TYPES.hpp"
#include "source2sdk/client/SPELL_IMMUNITY_TYPES.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct DOTASpecialAbility_t;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x2b8
        #pragma pack(push, 1)
        struct DOTAAbilityDefinition_t
        {
        public:
            CUtlString m_sAbilityName; // 0x0            
            CUtlString m_sBaseAbilityName; // 0x8            
            CUtlString m_sTextureName; // 0x10            
            CUtlString m_sSharedCooldownName; // 0x18            
            CUtlString m_sKeyOverride; // 0x20            
            CUtlString m_sItemRecipeName; // 0x28            
            CUtlString m_sLinkedAbility; // 0x30            
            CUtlString m_sTooltipSummaryProperties; // 0x38            
            std::int32_t m_castActivity; // 0x40            
            source2sdk::client::DotaGestureSlot_t m_castActivityGestureSlot; // 0x44            
            KeyValues* m_pKVData; // 0x48            
            source2sdk::client::AbilityID_t m_iAbilityID; // 0x50            
            source2sdk::client::ABILITY_TYPES m_iAbilityType; // 0x54            
            source2sdk::client::DOTA_ABILITY_BEHAVIOR m_iAbilityBehavior; // 0x58            
            source2sdk::client::DOTA_UNIT_TARGET_TEAM m_iAbilityTargetTeam; // 0x60            
            source2sdk::client::DOTA_UNIT_TARGET_TYPE m_iAbilityTargetType; // 0x64            
            source2sdk::client::DOTA_UNIT_TARGET_FLAGS m_iAbilityTargetFlags; // 0x68            
            source2sdk::client::DAMAGE_TYPES m_iAbilityDamageType; // 0x6c            
            source2sdk::client::SPELL_IMMUNITY_TYPES m_iAbilityImmunityType; // 0x70            
            source2sdk::client::SPELL_DISPELLABLE_TYPES m_iAbilityDispellableType; // 0x74            
            std::int32_t m_iFightRecapLevel; // 0x78            
            std::int32_t m_iTokenTier; // 0x7c            
            source2sdk::client::item_definition_index_t m_iAssociatedConsumableItemDef; // 0x80            
            source2sdk::client::item_definition_index_t m_iAssociatedLevelItemDef; // 0x84            
            std::uint32_t m_nRequiredEffectsMask; // 0x88            
            std::int32_t m_iAssociatedEventID; // 0x8c            
            std::int32_t m_iMaxLevel; // 0x90            
            std::int32_t m_iItemBaseLevel; // 0x94            
            float m_flItemLevelByGameTime; // 0x98            
            std::int32_t m_iItemCost; // 0x9c            
            std::int32_t m_iItemInitialCharges; // 0xa0            
            std::int32_t m_iItemNeutralTierIndex; // 0xa4            
            std::int32_t m_iItemStockMax; // 0xa8            
            float m_fItemStockTime; // 0xac            
            std::uint32_t* m_pItemShopTagKeys; // 0xb0            
            std::int32_t m_nNumShopTagKeys; // 0xb8            
            source2sdk::client::AbilityID_t m_nRecipeResultAbilityID; // 0xbc            
            // m_vecItemCombinesInto has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AbilityID_t> m_vecItemCombinesInto;
            char m_vecItemCombinesInto[0x18]; // 0xc0            
            // m_vecItemRecipes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemRecipe_t> m_vecItemRecipes;
            char m_vecItemRecipes[0x18]; // 0xd8            
            float m_flBackpackCooldownOverride; // 0xf0            
            std::int32_t m_nUpgradeGoal; // 0xf4            
            source2sdk::client::ItemQuality_t m_ItemQuality; // 0xf8            
            float m_flModifierValue; // 0xfc            
            float m_flModifierValueBonus; // 0x100            
            uint8_t _pad0104[0xd0]; // 0x104
            bool m_bHasScepterUpgrade; // 0x1d4            
            bool m_bHasShardUpgrade; // 0x1d5            
            uint8_t _pad01d6[0x2]; // 0x1d6
            std::int32_t m_nScepterUpgradeID; // 0x1d8            
            std::int32_t m_nShardUpgradeID; // 0x1dc            
            CUtlStringToken m_strScepterRequiredFacet; // 0x1e0            
            CUtlStringToken m_strShardRequiredFacet; // 0x1e4            
            CUtlStringToken m_strForbiddenTomeRequiredFacet; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            CUtlString m_strSubAbilityNames; // 0x1f0            
            CUtlString m_strFakeSubAbilityNames; // 0x1f8            
            bool m_bShowCooldownInTooltips; // 0x200            
            bool m_bSharedWithTeammates; // 0x201            
            uint8_t _pad0202[0x2]; // 0x202
            std::int32_t m_nCastRangeBuffer; // 0x204            
            std::int32_t m_nSpecialAbilities; // 0x208            
            uint8_t _pad020c[0x4]; // 0x20c
            source2sdk::client::DOTASpecialAbility_t* m_pSpecialAbilities; // 0x210            
            // m_OutgoingBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::DOTAOutgoingBonus_t> m_OutgoingBonuses;
            char m_OutgoingBonuses[0x18]; // 0x218            
            // m_mapRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringToken,source2sdk::client::DotaAbilityRelationship_t> m_mapRelationships;
            char m_mapRelationships[0x28]; // 0x230            
            CUtlString m_sModelName; // 0x258            
            CUtlString m_sModelAlternateName; // 0x260            
            CUtlString m_sEffectName; // 0x268            
            CUtlString m_sPingOverrideText; // 0x270            
            CUtlString m_sRequiredCustomShopName; // 0x278            
            CUtlString m_sLinkedScepterAbility; // 0x280            
            CUtlString m_sLinkedShardAbility; // 0x288            
            CUtlString m_sLinkedForbiddenTomeAbility; // 0x290            
            CUtlString m_sDependentOnAbility; // 0x298            
            std::int32_t m_nKillToastOverride; // 0x2a0            
            std::int32_t m_iLevelsBetweenUpgrades; // 0x2a4            
            std::int32_t m_iRequiredLevel; // 0x2a8            
            // start of bitfield block
            uint64_t m_bIsItem: 1;
            uint64_t m_bItemIsRecipe: 1;
            uint64_t m_bItemIsRecipeGenerated: 1;
            uint64_t m_bItemRecipeConsumesCharges: 1;
            uint64_t m_bItemAvailableAtSecretShop: 1;
            uint64_t m_bItemAvailableAtGlobalShop: 1;
            uint64_t m_bItemAvailableAtSideShop: 1;
            uint64_t m_bItemAvailableAtCustomShop: 1;
            uint64_t m_bItemIsPureSupport: 1;
            uint64_t m_bItemIsPurchasable: 1;
            uint64_t m_bItemIsUpgradeable: 1;
            uint64_t m_bItemStackable: 1;
            uint64_t m_bDisplayAdditionalHeroes: 1;
            uint64_t m_bItemContributesToNetWorthWhenDropped: 1;
            uint64_t m_bOnCastbar: 1;
            uint64_t m_bOnLearnbar: 1;
            uint64_t m_bIsGrantedByScepter: 1;
            uint64_t m_bIsGrantedByShard: 1;
            uint64_t m_bIsCastableWhileHidden: 1;
            uint64_t m_bAnimationIgnoresModelScale: 1;
            uint64_t m_bIsPlayerSpecificCooldown: 1;
            uint64_t m_bIsAllowedInBackpack: 1;
            uint64_t m_bCanSkipBackpackCooldown: 1;
            uint64_t m_bIsObsolete: 1;
            uint64_t m_bItemRequiresCustomShop: 1;
            uint64_t m_bSuggestPregame: 1;
            uint64_t m_bSuggestEarlygame: 1;
            uint64_t m_bSuggestLategame: 1;
            uint64_t m_bSuggestNotMaingame: 1;
            uint64_t m_bIsAffectedByAoEIncrease: 1;
            uint64_t m_bHasCastAnimation: 1;
            uint64_t m_bItemHasPassive: 1;
            uint64_t m_bDisplayOverheadAlertOnReceived: 1;
            uint64_t m_bInnate: 1;
            uint64_t m_bIsSpeciallyAllowedInNeutralSlot: 1;
            uint64_t m_bIsSpeciallyBannedFromNeutralSlot: 1;
            uint64_t m_bIsCooldownPausedOutOfInventory: 1;
            uint64_t m_bAllowCombineFromGround: 1;
            uint64_t m_bRestrictToMaxLevel: 1;
            uint64_t m_bHasDynamicValue: 1;
            uint64_t m_bBreakable: 1;
            uint64_t m_bActiveNeutral: 1;
            uint64_t m_bPassiveNeutral: 1;
            uint64_t m_bShowGiveIndicatorOnTargetCast: 1;
            uint64_t m_bImbueRequiresAOE: 1;
            uint64_t m_bEnableChargeDisplayOverride: 1;
            // end of bitfield block// 46 bits
            uint8_t _pad02b4[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sAbilityName) == 0x0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sBaseAbilityName) == 0x8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sTextureName) == 0x10);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sSharedCooldownName) == 0x18);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sKeyOverride) == 0x20);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sItemRecipeName) == 0x28);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sLinkedAbility) == 0x30);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sTooltipSummaryProperties) == 0x38);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivity) == 0x40);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_castActivityGestureSlot) == 0x44);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pKVData) == 0x48);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityID) == 0x50);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityType) == 0x54);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityBehavior) == 0x58);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetTeam) == 0x60);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetType) == 0x64);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityTargetFlags) == 0x68);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDamageType) == 0x6c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityImmunityType) == 0x70);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAbilityDispellableType) == 0x74);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iFightRecapLevel) == 0x78);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iTokenTier) == 0x7c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedConsumableItemDef) == 0x80);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedLevelItemDef) == 0x84);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRequiredEffectsMask) == 0x88);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iAssociatedEventID) == 0x8c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iMaxLevel) == 0x90);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemBaseLevel) == 0x94);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flItemLevelByGameTime) == 0x98);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemCost) == 0x9c);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemInitialCharges) == 0xa0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemNeutralTierIndex) == 0xa4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iItemStockMax) == 0xa8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_fItemStockTime) == 0xac);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pItemShopTagKeys) == 0xb0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nNumShopTagKeys) == 0xb8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nRecipeResultAbilityID) == 0xbc);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemCombinesInto) == 0xc0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_vecItemRecipes) == 0xd8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flBackpackCooldownOverride) == 0xf0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nUpgradeGoal) == 0xf4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_ItemQuality) == 0xf8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValue) == 0xfc);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_flModifierValueBonus) == 0x100);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasScepterUpgrade) == 0x1d4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bHasShardUpgrade) == 0x1d5);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nScepterUpgradeID) == 0x1d8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nShardUpgradeID) == 0x1dc);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strScepterRequiredFacet) == 0x1e0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strShardRequiredFacet) == 0x1e4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strForbiddenTomeRequiredFacet) == 0x1e8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strSubAbilityNames) == 0x1f0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_strFakeSubAbilityNames) == 0x1f8);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bShowCooldownInTooltips) == 0x200);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_bSharedWithTeammates) == 0x201);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nCastRangeBuffer) == 0x204);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nSpecialAbilities) == 0x208);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_pSpecialAbilities) == 0x210);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_OutgoingBonuses) == 0x218);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_mapRelationships) == 0x230);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sModelName) == 0x258);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sModelAlternateName) == 0x260);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sEffectName) == 0x268);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sPingOverrideText) == 0x270);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sRequiredCustomShopName) == 0x278);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sLinkedScepterAbility) == 0x280);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sLinkedShardAbility) == 0x288);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sLinkedForbiddenTomeAbility) == 0x290);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_sDependentOnAbility) == 0x298);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_nKillToastOverride) == 0x2a0);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iLevelsBetweenUpgrades) == 0x2a4);
        static_assert(offsetof(source2sdk::client::DOTAAbilityDefinition_t, m_iRequiredLevel) == 0x2a8);
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsItem
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsRecipe
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsRecipeGenerated
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemRecipeConsumesCharges
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtSecretShop
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtGlobalShop
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtSideShop
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemAvailableAtCustomShop
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsPureSupport
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsPurchasable
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemIsUpgradeable
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemStackable
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bDisplayAdditionalHeroes
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemContributesToNetWorthWhenDropped
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bOnCastbar
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bOnLearnbar
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsGrantedByScepter
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsGrantedByShard
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsCastableWhileHidden
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bAnimationIgnoresModelScale
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsPlayerSpecificCooldown
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsAllowedInBackpack
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bCanSkipBackpackCooldown
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsObsolete
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemRequiresCustomShop
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestPregame
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestEarlygame
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestLategame
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bSuggestNotMaingame
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsAffectedByAoEIncrease
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bHasCastAnimation
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bItemHasPassive
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bDisplayOverheadAlertOnReceived
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bInnate
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsSpeciallyAllowedInNeutralSlot
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsSpeciallyBannedFromNeutralSlot
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bIsCooldownPausedOutOfInventory
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bAllowCombineFromGround
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bRestrictToMaxLevel
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bHasDynamicValue
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bBreakable
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bActiveNeutral
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bPassiveNeutral
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bShowGiveIndicatorOnTargetCast
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bImbueRequiresAOE
        // Cannot assert offset of bitfield DOTAAbilityDefinition_t::m_bEnableChargeDisplayOverride
        
        static_assert(sizeof(source2sdk::client::DOTAAbilityDefinition_t) == 0x2b8);
    };
};
