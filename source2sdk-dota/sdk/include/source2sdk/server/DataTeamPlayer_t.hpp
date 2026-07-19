#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/HeroFacetKey_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/OverworldID_t.hpp"
#include "source2sdk/client/OverworldTarotCardID_t.hpp"
#include "source2sdk/client/OverworldTokenID_t.hpp"
#include "source2sdk/client/WeightedAbilitySuggestion_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTACourierController.hpp"
#include "source2sdk/server/CDOTA_UnitInventory.hpp"
#include "source2sdk/server/CQuickBuyController.hpp"
#include "source2sdk/server/PlayerNeutralChoices_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x13d0
        // Has VTable
        #pragma pack(push, 1)
        struct DataTeamPlayer_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::int32_t m_iReliableGold; // 0x30            
            std::int32_t m_iUnreliableGold; // 0x34            
            std::int32_t m_iStartingPosition; // 0x38            
            std::int32_t m_iTotalEarnedGold; // 0x3c            
            std::int32_t m_iTotalEarnedXP; // 0x40            
            std::int32_t m_iSharedGold; // 0x44            
            std::int32_t m_iHeroKillGold; // 0x48            
            std::int32_t m_iCreepKillGold; // 0x4c            
            std::int32_t m_iSummonKillGold; // 0x50            
            std::int32_t m_iNeutralKillGold; // 0x54            
            std::int32_t m_iCourierGold; // 0x58            
            std::int32_t m_iBountyGold; // 0x5c            
            std::int32_t m_iRoshanGold; // 0x60            
            std::int32_t m_iBuildingGold; // 0x64            
            std::int32_t m_iOtherGold; // 0x68            
            std::int32_t m_iComebackGold; // 0x6c            
            std::int32_t m_iExperimentalGold; // 0x70            
            std::int32_t m_iExperimental2Gold; // 0x74            
            std::int32_t m_iCreepDenyGold; // 0x78            
            std::int32_t m_iTPScrollsPurchased; // 0x7c            
            float m_flCustomStats; // 0x80            
            std::int32_t m_iIncomeGold; // 0x84            
            std::int32_t m_iWardKillGold; // 0x88            
            std::int32_t m_iAbilityGold; // 0x8c            
            std::int32_t m_iNetWorth; // 0x90            
            std::int32_t m_iDenyCount; // 0x94            
            std::int32_t m_iLastHitCount; // 0x98            
            std::int32_t m_iLastHitStreak; // 0x9c            
            std::int32_t m_iLastHitMultikill; // 0xa0            
            std::int32_t m_iNearbyCreepDeathCount; // 0xa4            
            std::int32_t m_iClaimedDenyCount; // 0xa8            
            std::int32_t m_iClaimedMissCount; // 0xac            
            std::int32_t m_iMissCount; // 0xb0            
            source2sdk::client::HeroID_t m_nPossibleHeroSelection; // 0xb4            
            source2sdk::client::HeroFacetKey_t m_nPossibleHeroFacetSelection; // 0xb8            
            source2sdk::entity2::GameTime_t m_flBuybackCooldownTime; // 0xc0            
            source2sdk::entity2::GameTime_t m_flBuybackGoldLimitTime; // 0xc4            
            float m_flBuybackCostTime; // 0xc8            
            float m_flCustomBuybackCooldown; // 0xcc            
            float m_fStuns; // 0xd0            
            float m_fHealing; // 0xd4            
            float m_fRegeneratedHealth; // 0xd8            
            std::int32_t m_iTowerKills; // 0xdc            
            std::int32_t m_iRoshanKills; // 0xe0            
            // m_hCameraTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCameraTarget;
            char m_hCameraTarget[0x4]; // 0xe4            
            // m_hOverrideSelectionEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOverrideSelectionEntity;
            char m_hOverrideSelectionEntity[0x4]; // 0xe8            
            std::int32_t m_iObserverWardsPlaced; // 0xec            
            std::int32_t m_iSentryWardsPlaced; // 0xf0            
            std::int32_t m_iCreepsStacked; // 0xf4            
            std::int32_t m_iCampsStacked; // 0xf8            
            std::int32_t m_iRunePickups; // 0xfc            
            std::int32_t m_iGoldSpentOnSupport; // 0x100            
            float m_flHeroDamage; // 0x104            
            float m_flTowerDamage; // 0x108            
            std::int32_t m_iWardsPurchased; // 0x10c            
            std::int32_t m_iWardsDestroyed; // 0x110            
            uint8_t _pad0114[0x4]; // 0x114
            source2sdk::server::CDOTA_UnitInventory m_PreGameInventory; // 0x118            
            std::int32_t m_nKillsPerOpposingTeamMember[24]; // 0x210            
            source2sdk::client::AbilityID_t m_iSuggestedAbilities[5]; // 0x270            
            float m_fSuggestedAbilityWeights[5]; // 0x284            
            source2sdk::client::AbilityID_t m_iSuggestedPregameItems[15]; // 0x298            
            source2sdk::client::AbilityID_t m_iSuggestedItemSequence[50]; // 0x2d4            
            source2sdk::client::AbilityID_t m_iSuggestedItemSequenceVariants[150]; // 0x39c            
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedItemOptions[250]; // 0x5f4            
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedGeneralItems[30]; // 0xdc4            
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralTrinkets[5]; // 0xeb4            
            source2sdk::client::WeightedAbilitySuggestion_t m_iSuggestedNeutralEnhancements[5]; // 0xedc            
            source2sdk::client::HeroID_t m_iSuggestedHeroes[10]; // 0xf04            
            float m_flSuggestedHeroesWeights[10]; // 0xf2c            
            float m_flDamageByTypeReceivedPreReduction[3]; // 0xf54            
            float m_flDamageByTypeReceivedPostReduction[3]; // 0xf60            
            float m_flOutgoingDamageByTypePreReduction[3]; // 0xf6c            
            float m_flOutgoingDamageByTypePostReduction[3]; // 0xf78            
            source2sdk::client::OverworldID_t m_uSelectedOverworldID; // 0xf84            
            source2sdk::client::OverworldTokenID_t m_uSelectedOverworldTokenRewards[3]; // 0xf85            
            source2sdk::client::OverworldTarotCardID_t m_uOverworldFortune[3]; // 0xf88            
            uint8_t _pad0f8b[0x1]; // 0xf8b
            std::int32_t m_iCommandsIssued; // 0xf8c            
            std::int32_t m_iGoldSpentOnConsumables; // 0xf90            
            std::int32_t m_iGoldSpentOnItems; // 0xf94            
            std::int32_t m_iGoldSpentOnBuybacks; // 0xf98            
            std::int32_t m_iGoldLostToDeath; // 0xf9c            
            bool m_bIsNewPlayer; // 0xfa0            
            bool m_bIsGuidePlayer; // 0xfa1            
            uint8_t _pad0fa2[0x6]; // 0xfa2
            std::uint64_t m_iPlayerSteamID; // 0xfa8            
            std::int32_t m_iSmokesUsed; // 0xfb0            
            std::int32_t m_iNeutralTokensFound; // 0xfb4            
            std::int32_t m_iWatchersTaken; // 0xfb8            
            std::int32_t m_iLotusesTaken; // 0xfbc            
            std::int32_t m_iTormentorKills; // 0xfc0            
            std::int32_t m_iCourierKills; // 0xfc4            
            std::int32_t m_nAcquiredMadstone; // 0xfc8            
            std::int32_t m_nCurrentMadstone; // 0xfcc            
            source2sdk::server::PlayerNeutralChoices_t m_NeutralChoices; // 0xfd0            
            source2sdk::server::CDOTACourierController m_CourierController; // 0x1180            
            source2sdk::server::CQuickBuyController m_quickBuyController; // 0x1240            
            source2sdk::client::AbilityID_t m_nSelectedBlessing; // 0x13c8            
            uint8_t _pad13cc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iReliableGold) == 0x30);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iUnreliableGold) == 0x34);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iStartingPosition) == 0x38);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTotalEarnedGold) == 0x3c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTotalEarnedXP) == 0x40);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSharedGold) == 0x44);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iHeroKillGold) == 0x48);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepKillGold) == 0x4c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSummonKillGold) == 0x50);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNeutralKillGold) == 0x54);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCourierGold) == 0x58);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iBountyGold) == 0x5c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRoshanGold) == 0x60);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iBuildingGold) == 0x64);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iOtherGold) == 0x68);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iComebackGold) == 0x6c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iExperimentalGold) == 0x70);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iExperimental2Gold) == 0x74);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepDenyGold) == 0x78);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTPScrollsPurchased) == 0x7c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flCustomStats) == 0x80);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iIncomeGold) == 0x84);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardKillGold) == 0x88);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iAbilityGold) == 0x8c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNetWorth) == 0x90);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iDenyCount) == 0x94);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitCount) == 0x98);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitStreak) == 0x9c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLastHitMultikill) == 0xa0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNearbyCreepDeathCount) == 0xa4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iClaimedDenyCount) == 0xa8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iClaimedMissCount) == 0xac);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iMissCount) == 0xb0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nPossibleHeroSelection) == 0xb4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nPossibleHeroFacetSelection) == 0xb8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackCooldownTime) == 0xc0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackGoldLimitTime) == 0xc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flBuybackCostTime) == 0xc8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flCustomBuybackCooldown) == 0xcc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fStuns) == 0xd0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fHealing) == 0xd4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fRegeneratedHealth) == 0xd8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTowerKills) == 0xdc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRoshanKills) == 0xe0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_hCameraTarget) == 0xe4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_hOverrideSelectionEntity) == 0xe8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iObserverWardsPlaced) == 0xec);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSentryWardsPlaced) == 0xf0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCreepsStacked) == 0xf4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCampsStacked) == 0xf8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iRunePickups) == 0xfc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnSupport) == 0x100);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flHeroDamage) == 0x104);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flTowerDamage) == 0x108);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardsPurchased) == 0x10c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWardsDestroyed) == 0x110);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_PreGameInventory) == 0x118);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nKillsPerOpposingTeamMember) == 0x210);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedAbilities) == 0x270);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_fSuggestedAbilityWeights) == 0x284);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedPregameItems) == 0x298);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemSequence) == 0x2d4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemSequenceVariants) == 0x39c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedItemOptions) == 0x5f4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedGeneralItems) == 0xdc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedNeutralTrinkets) == 0xeb4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedNeutralEnhancements) == 0xedc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSuggestedHeroes) == 0xf04);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flSuggestedHeroesWeights) == 0xf2c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flDamageByTypeReceivedPreReduction) == 0xf54);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flDamageByTypeReceivedPostReduction) == 0xf60);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flOutgoingDamageByTypePreReduction) == 0xf6c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_flOutgoingDamageByTypePostReduction) == 0xf78);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_uSelectedOverworldID) == 0xf84);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_uSelectedOverworldTokenRewards) == 0xf85);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_uOverworldFortune) == 0xf88);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCommandsIssued) == 0xf8c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnConsumables) == 0xf90);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnItems) == 0xf94);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldSpentOnBuybacks) == 0xf98);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iGoldLostToDeath) == 0xf9c);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_bIsNewPlayer) == 0xfa0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_bIsGuidePlayer) == 0xfa1);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iPlayerSteamID) == 0xfa8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iSmokesUsed) == 0xfb0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iNeutralTokensFound) == 0xfb4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iWatchersTaken) == 0xfb8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iLotusesTaken) == 0xfbc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iTormentorKills) == 0xfc0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_iCourierKills) == 0xfc4);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nAcquiredMadstone) == 0xfc8);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nCurrentMadstone) == 0xfcc);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_NeutralChoices) == 0xfd0);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_CourierController) == 0x1180);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_quickBuyController) == 0x1240);
        static_assert(offsetof(source2sdk::server::DataTeamPlayer_t, m_nSelectedBlessing) == 0x13c8);
        
        static_assert(sizeof(source2sdk::server::DataTeamPlayer_t) == 0x13d0);
    };
};
