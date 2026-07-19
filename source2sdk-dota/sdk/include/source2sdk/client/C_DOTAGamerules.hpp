#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_AbilityDraftAbilityState.hpp"
#include "source2sdk/client/CDOTA_AbilityDraftHeroState.hpp"
#include "source2sdk/client/CDOTA_ItemStockInfo.hpp"
#include "source2sdk/client/CHeroStatueLiked.hpp"
#include "source2sdk/client/CHeroesPerPlayer.hpp"
#include "source2sdk/client/CTormentorSpawnPhase.hpp"
#include "source2sdk/client/C_MultiplayRules.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/DOTA_AssassinMinigameNetworkState.hpp"
#include "source2sdk/client/DOTA_HeroPickState.hpp"
#include "source2sdk/client/DOTA_PlayerDraftState.hpp"
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/NeutralSpawnBoxes_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/RegionTriggerBoxes_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        struct C_DOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_IngameEvent_Base;
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xfc98
        // Has VTable
        #pragma pack(push, 1)
        class C_DOTAGamerules : public source2sdk::client::C_MultiplayRules
        {
        public:
            std::int32_t m_nRuneCycle; // 0x40            
            std::int32_t m_iMiscHeroPickCounter; // 0x44            
            // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndGameCinematicEntity;
            char m_hEndGameCinematicEntity[0x4]; // 0x48            
            // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hOverlayHealthBarUnit;
            char m_hOverlayHealthBarUnit[0x4]; // 0x4c            
            std::int32_t m_nOverlayHealthBarType; // 0x50            
            bool m_bIsInCinematicMode; // 0x54            
            bool m_bIsInClientSideCinematicMode; // 0x55            
            bool m_bFreeCourierMode; // 0x56            
            uint8_t _pad0057[0x1]; // 0x57
            std::int32_t m_nStartingGold; // 0x58            
            std::int32_t m_nGoldPerTick; // 0x5c            
            float m_flGoldTickTime; // 0x60            
            bool m_bItemWhiteListChanged; // 0x64            
            bool m_bEnableSuggestAbilities; // 0x65            
            bool m_bEnableSuggestItems; // 0x66            
            uint8_t _pad0067[0x1]; // 0x67
            std::uint32_t m_unFanfareGoodGuys; // 0x68            
            std::uint32_t m_unFanfareBadGuys; // 0x6c            
            std::int32_t m_iMapType; // 0x70            
            std::int32_t m_nServerGameState; // 0x74            
            source2sdk::client::DOTA_HeroPickState m_nServerHeroPickState; // 0x78            
            std::int32_t m_nGameState; // 0x7c            
            source2sdk::client::DOTA_HeroPickState m_nHeroPickState; // 0x80            
            bool m_bAlternateHeroGridsEnabled; // 0x84            
            uint8_t _pad0085[0x3]; // 0x85
            source2sdk::entity2::GameTime_t m_flStateTransitionTime; // 0x88            
            float m_flOverride_dota_hero_selection_time; // 0x8c            
            float m_flOverride_dota_pregame_time; // 0x90            
            float m_flOverride_dota_postgame_time; // 0x94            
            float m_flOverride_dota_strategy_time; // 0x98            
            float m_flOverride_dota_team_showcase_duration; // 0x9c            
            float m_flOverride_dota_rune_spawn_time; // 0xa0            
            float m_flShowcaseTime[15]; // 0xa4            
            float m_flNeutralInitialSpawnOffset; // 0xe0            
            std::int32_t m_iGameMode; // 0xe4            
            // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGameModeEntity;
            char m_hGameModeEntity[0x4]; // 0xe8            
            // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCustomHeroPickRulesEntity;
            char m_hCustomHeroPickRulesEntity[0x4]; // 0xec            
            source2sdk::entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0xf0            
            uint8_t _pad00f4[0x4]; // 0xf4
            std::uint64_t m_iPlayerIDsInControl; // 0xf8            
            bool m_bSameHeroSelectionEnabled; // 0x100            
            bool m_bUseCustomHeroXPValue; // 0x101            
            bool m_bUseBaseGoldBountyOnHeroes; // 0x102            
            bool m_bUseUniversalShopMode; // 0x103            
            bool m_bHideKillMessageHeaders; // 0x104            
            uint8_t _pad0105[0x3]; // 0x105
            float m_flHeroMinimapIconScale; // 0x108            
            float m_flCreepMinimapIconScale; // 0x10c            
            bool m_bCreepSpawningEnabled; // 0x110            
            uint8_t _pad0111[0x3]; // 0x111
            float m_flRuneMinimapIconScale; // 0x114            
            char m_CustomVictoryMessage[256]; // 0x118            
            float m_flCustomGameEndDelay; // 0x218            
            float m_flCustomGameSetupAutoLaunchDelay; // 0x21c            
            float m_flCustomGameSetupTimeout; // 0x220            
            float m_flCustomVictoryMessageDuration; // 0x224            
            float m_flHeroSelectPenaltyTime; // 0x228            
            bool m_bCustomGameSetupAutoLaunchEnabled; // 0x22c            
            bool m_bCustomGameTeamSelectionLocked; // 0x22d            
            bool m_bCustomGameEnablePickRules; // 0x22e            
            bool m_bCustomGameAllowHeroPickMusic; // 0x22f            
            bool m_bCustomGameAllowMusicAtGameStart; // 0x230            
            bool m_bCustomGameAllowBattleMusic; // 0x231            
            bool m_bCustomGameDisableIK; // 0x232            
            bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x233            
            std::int32_t m_iCMModePickBanOrder; // 0x234            
            std::int32_t m_iCDModePickBanOrder; // 0x238            
            std::int32_t m_nGGTeam; // 0x23c            
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x240            
            bool m_bGGCalled; // 0x244            
            bool m_bWhiteListEnabled; // 0x245            
            uint8_t _pad0246[0x2]; // 0x246
            std::uint64_t m_bItemWhiteList[4]; // 0x248            
            std::int32_t m_nLastHitUIMode; // 0x268            
            bool m_bHUDTimerTutorialMode; // 0x26c            
            uint8_t _pad026d[0x3]; // 0x26d
            source2sdk::client::CountdownTimer m_HeroPickMiscTimer; // 0x270            
            source2sdk::client::CountdownTimer m_ExtraTimeTimer; // 0x288            
            float m_fExtraTimeRemaining[2]; // 0x2a0            
            bool m_bHeroRespawnEnabled; // 0x2a8            
            bool m_bIsRandomingEnabled; // 0x2a9            
            uint8_t _pad02aa[0x2]; // 0x2aa
            source2sdk::client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x2ac            
            source2sdk::client::HeroID_t m_BannedHeroes[24]; // 0x2b4            
            source2sdk::client::HeroID_t m_SelectedHeroes[24]; // 0x314            
            std::int32_t m_iActiveTeam; // 0x374            
            std::int32_t m_iStartingTeam; // 0x378            
            std::int32_t m_iPenaltyLevelRadiant; // 0x37c            
            std::int32_t m_iPenaltyLevelDire; // 0x380            
            bool m_bIsLoadingScenario; // 0x384            
            uint8_t _pad0385[0x3]; // 0x385
            // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecNewBannedHeroes;
            char m_vecNewBannedHeroes[0x18]; // 0x388            
            // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecWhitelistedHeroes;
            char m_vecWhitelistedHeroes[0x18]; // 0x3a0            
            // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBlacklistedHeroes;
            char m_vecBlacklistedHeroes[0x18]; // 0x3b8            
            bool m_bHideBlacklistedHeroes; // 0x3d0            
            uint8_t _pad03d1[0x3]; // 0x3d1
            std::int32_t m_nSeriesType; // 0x3d4            
            std::int32_t m_nRadiantSeriesWins; // 0x3d8            
            std::int32_t m_nDireSeriesWins; // 0x3dc            
            // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
            char m_vecAvailableHerosPerPlayerID[0x68]; // 0x3e0            
            // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
            char m_vecLockedHerosByPlayerID[0x68]; // 0x448            
            // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
            char m_vecDisabledRandomHerosByPlayerID[0x68]; // 0x4b0            
            source2sdk::client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x518            
            float m_flGoldTime; // 0x578            
            float m_flXPTime; // 0x57c            
            source2sdk::entity2::GameTime_t m_flCreepSpawntime; // 0x580            
            float m_flAnnounceStartTime; // 0x584            
            std::int32_t m_iGoodTomeCount; // 0x588            
            std::int32_t m_iBadTomeCount; // 0x58c            
            source2sdk::entity2::GameTime_t m_flPreGameStartTime; // 0x590            
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0x594            
            source2sdk::entity2::GameTime_t m_flGameEndTime; // 0x598            
            float m_flGameLoadTime; // 0x59c            
            std::int32_t m_iCustomGameScore[2]; // 0x5a0            
            std::int32_t m_nCustomGameDifficulty; // 0x5a8            
            bool m_bEnemyModifiersEnabled; // 0x5ac            
            uint8_t _pad05ad[0x3]; // 0x5ad
            std::int32_t m_iWaves; // 0x5b0            
            std::int32_t m_iCreepUpgradeState; // 0x5b4            
            source2sdk::entity2::GameTime_t m_fGoodGlyphCooldown; // 0x5b8            
            source2sdk::entity2::GameTime_t m_fBadGlyphCooldown; // 0x5bc            
            source2sdk::entity2::GameTime_t m_flGlyphCooldowns[15]; // 0x5c0            
            source2sdk::entity2::GameTime_t m_fGoodRadarCooldown; // 0x5fc            
            source2sdk::entity2::GameTime_t m_fBadRadarCooldown; // 0x600            
            source2sdk::entity2::GameTime_t m_flRadarCooldowns[15]; // 0x604            
            std::int32_t m_iGoodRadarCharges; // 0x640            
            std::int32_t m_iBadRadarCharges; // 0x644            
            std::int32_t m_iRadarCharges[15]; // 0x648            
            float m_flOutpostTimes[24]; // 0x684            
            bool m_bIsNightstalkerNight; // 0x6e4            
            bool m_bIsTemporaryNight; // 0x6e5            
            bool m_bIsTemporaryDay; // 0x6e6            
            uint8_t _pad06e7[0x1]; // 0x6e7
            std::int32_t m_nRiverType; // 0x6e8            
            source2sdk::client::HeroID_t m_nTemporaryDayNightSource; // 0x6ec            
            source2sdk::client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0x6f0            
            source2sdk::client::item_definition_index_t m_nTeamVersusScreen[15]; // 0x72c            
            float m_flGoldRedistributeTime; // 0x768            
            std::int32_t m_nGoldToRedistribute[2]; // 0x76c            
            source2sdk::entity2::GameTime_t m_flNextPreGameThink; // 0x774            
            source2sdk::entity2::GameTime_t m_flNextAllDraftGoldThink; // 0x778            
            uint8_t _pad077c[0x4]; // 0x77c
            double m_flTimeEnteredState; // 0x780            
            std::uint32_t m_unRiverAccountID; // 0x788            
            uint8_t _pad078c[0x4]; // 0x78c
            source2sdk::client::itemid_t m_ulRiverItemID; // 0x790            
            uint8_t _pad0798[0x40]; // 0x798
            // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_ItemStockInfo> m_vecItemStockInfo;
            char m_vecItemStockInfo[0x68]; // 0x7d8            
            source2sdk::client::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0x840            
            std::int32_t m_nGameWinner; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            source2sdk::client::MatchID_t m_unMatchID64; // 0x858            
            bool m_bMatchSignoutComplete; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSideShop1;
            char m_hSideShop1[0x4]; // 0x864            
            // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSideShop2;
            char m_hSideShop2[0x4]; // 0x868            
            // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecretShop1;
            char m_hSecretShop1[0x4]; // 0x86c            
            // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hSecretShop2;
            char m_hSecretShop2[0x4]; // 0x870            
            // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamFountains[15];
            char m_hTeamFountains[0x3c]; // 0x874            
            // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamForts[15];
            char m_hTeamForts[0x3c]; // 0x8b0            
            // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTeamShops[15];
            char m_hTeamShops[0x3c]; // 0x8ec            
            // m_hWatchers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseEntity>> m_hWatchers;
            char m_hWatchers[0x18]; // 0x928            
            // m_hWisdomShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisdomShrines[15];
            char m_hWisdomShrines[0x3c]; // 0x940            
            // m_hLotusPools has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLotusPools[15];
            char m_hLotusPools[0x3c]; // 0x97c            
            // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerGood;
            char m_hAnnouncerGood[0x4]; // 0x9b8            
            // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerBad;
            char m_hAnnouncerBad[0x4]; // 0x9bc            
            // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerSpectator;
            char m_hAnnouncerSpectator[0x4]; // 0x9c0            
            // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerGood_KillingSpree;
            char m_hAnnouncerGood_KillingSpree[0x4]; // 0x9c4            
            // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerBad_KillingSpree;
            char m_hAnnouncerBad_KillingSpree[0x4]; // 0x9c8            
            // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAnnouncerSpectator_KillingSpree;
            char m_hAnnouncerSpectator_KillingSpree[0x4]; // 0x9cc            
            bool m_arrTier1TowerDestroyed[15]; // 0x9d0            
            bool m_arrTier2TowerDestroyed[15]; // 0x9df            
            bool m_arrTier3TowerDestroyed[15]; // 0x9ee            
            bool m_arrMeleeBarracksDestroyed[15]; // 0x9fd            
            bool m_bTier1TowerDestroyed; // 0xa0c            
            bool m_bTier2TowerDestroyed; // 0xa0d            
            bool m_bTier3TowerDestroyed; // 0xa0e            
            bool m_bMeleeBarracksDestroyed; // 0xa0f            
            float m_fTimeOfDay; // 0xa10            
            std::int32_t m_iNetTimeOfDay; // 0xa14            
            float m_flDaytimeStart; // 0xa18            
            float m_flNighttimeStart; // 0xa1c            
            std::int32_t m_nLoadedPlayers; // 0xa20            
            std::int32_t m_nExpectedPlayers; // 0xa24            
            uint8_t _pad0a28[0x8]; // 0xa28
            std::int32_t m_iMinimapDebugGridState; // 0xa30            
            uint8_t _pad0a34[0x7c]; // 0xa34
            std::int32_t m_iFoWFrameNumber; // 0xab0            
            Vector m_vWeatherWindDirection; // 0xab4            
            source2sdk::client::CTormentorSpawnPhase m_tormentorSpawnPhase; // 0xac0            
            // m_vecTormentorSpawnPhases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CTormentorSpawnPhase> m_vecTormentorSpawnPhases;
            char m_vecTormentorSpawnPhases[0x68]; // 0xb00            
            // m_vecDeityBlessings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecDeityBlessings;
            char m_vecDeityBlessings[0x18]; // 0xb68            
            source2sdk::client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0xb80            
            source2sdk::client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0xbe0            
            bool m_bAllRequiredPlaytestHeroesPicked; // 0xc40            
            uint8_t _pad0c41[0x3]; // 0xc41
            std::int32_t m_nLastPlaytestPickPhase; // 0xc44            
            std::int32_t m_nCustomGameFowTeamCount; // 0xc48            
            bool m_bUseAlternateABRules; // 0xc4c            
            bool m_bLobbyIsAssociatedWithGame; // 0xc4d            
            uint8_t _pad0c4e[0x2]; // 0xc4e
            source2sdk::client::CountdownTimer m_BotDebugTimer; // 0xc50            
            std::uint8_t m_BotDebugPushLane[18]; // 0xc68            
            std::uint8_t m_BotDebugDefendLane[18]; // 0xc7a            
            std::uint8_t m_BotDebugFarmLane[6]; // 0xc8c            
            std::uint8_t m_BotDebugRoam[8]; // 0xc92            
            uint8_t _pad0c9a[0x2]; // 0xc9a
            // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBotDebugRoamTarget[2];
            char m_hBotDebugRoamTarget[0x8]; // 0xc9c            
            std::uint8_t m_BotDebugRoshan[2]; // 0xca4            
            uint8_t _pad0ca6[0x2]; // 0xca6
            source2sdk::client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0xca8            
            source2sdk::entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0xcac            
            // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
            char m_AbilityDraftAbilities[0x68]; // 0xcb0            
            // m_AbilityDraftHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CDOTA_AbilityDraftHeroState> m_AbilityDraftHeroes;
            char m_AbilityDraftHeroes[0x68]; // 0xd18            
            bool m_bAbilityDraftCurrentPlayerHasPicked; // 0xd80            
            uint8_t _pad0d81[0x3]; // 0xd81
            std::int32_t m_nAbilityDraftPlayerTracker; // 0xd84            
            std::int32_t m_nAbilityDraftRoundNumber; // 0xd88            
            std::int32_t m_nAbilityDraftAdvanceSteps; // 0xd8c            
            std::int32_t m_nAbilityDraftPhase; // 0xd90            
            bool m_bIsPlayerDraft; // 0xd94            
            uint8_t _pad0d95[0x3]; // 0xd95
            source2sdk::client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0xd98            
            uint8_t _pad0d9c[0x4]; // 0xd9c
            // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_vecPlayerDraftPickOrder;
            char m_vecPlayerDraftPickOrder[0x18]; // 0xda0            
            std::int32_t m_nPlayerDraftPick; // 0xdb8            
            std::int32_t m_nPlayerDraftActiveTeam; // 0xdbc            
            float m_flPlayerDraftTimeBank[2]; // 0xdc0            
            // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
            char m_vecARDMHeroes[0x30]; // 0xdc8            
            std::int32_t m_nARDMHeroesPrecached; // 0xdf8            
            float m_fLastARDMPrecache; // 0xdfc            
            std::int32_t m_nAllDraftPhase; // 0xe00            
            bool m_bAllDraftRadiantFirst; // 0xe04            
            bool m_bAllowOverrideVPK; // 0xe05            
            uint8_t _pad0e06[0x2]; // 0xe06
            std::int32_t m_nARDMHeroesRemaining[2]; // 0xe08            
            bool m_bUpdateHeroStatues; // 0xe10            
            uint8_t _pad0e11[0x27]; // 0xe11
            bool m_bExperimentalGameplay; // 0xe38            
            uint8_t _pad0e39[0x47]; // 0xe39
            std::uint32_t m_lobbyType; // 0xe80            
            source2sdk::client::LeagueID_t m_lobbyLeagueID; // 0xe84            
            char m_lobbyGameName[256]; // 0xe88            
            // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::CHeroStatueLiked> m_vecHeroStatueLiked;
            char m_vecHeroStatueLiked[0x68]; // 0xf88            
            std::int32_t m_CustomGameTeamMaxPlayers[15]; // 0xff0            
            std::int32_t m_iMutations[5]; // 0x102c            
            // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_IngameEvent_Base>> m_vecIngameEvents;
            char m_vecIngameEvents[0x18]; // 0x1040            
            std::int8_t m_nPrimaryIngameEventIndex; // 0x1058            
            uint8_t _pad1059[0x3]; // 0x1059
            // m_hObsoleteIngameEvent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_IngameEvent_Base> m_hObsoleteIngameEvent;
            char m_hObsoleteIngameEvent[0x4]; // 0x105c            
            std::uint32_t m_nOfrendaPledges; // 0x1060            
            std::uint32_t m_nRadiantOfrendas; // 0x1064            
            std::uint32_t m_nDireOfrendas; // 0x1068            
            bool m_bOfrendaEnabled; // 0x106c            
            uint8_t _pad106d[0x43]; // 0x106d
            // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
            char m_NeutralSpawnBoxes[0x18]; // 0x10b0            
            // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
            char m_RegionTriggerBoxes[0x18]; // 0x10c8            
            uint8_t _pad10e0[0xfb8]; // 0x10e0
            double m_flLastPerfSampleTime; // 0x2098            
            uint8_t _pad20a0[0x3ed0]; // 0x20a0
            std::int32_t m_nMultipleTickFrameCount; // 0x5f70            
            std::int32_t m_nTimesPlayersDisconnected; // 0x5f74            
            double m_flLastPerfSampleSendTime; // 0x5f78            
            bool m_bDidSeeStrategyTime; // 0x5f80            
            uint8_t _pad5f81[0x9d0f]; // 0x5f81
            double m_flLastUnfocusedSleepTime; // 0xfc90            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAGamerules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAGamerules) == 0xfc98);
    };
};
