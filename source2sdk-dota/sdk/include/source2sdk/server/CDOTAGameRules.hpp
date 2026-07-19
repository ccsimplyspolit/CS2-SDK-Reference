#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/CDOTA_ReconnectInfo.hpp"
#include "source2sdk/client/DOTA_HeroPickState.hpp"
#include "source2sdk/client/DOTA_PlayerDraftState.hpp"
#include "source2sdk/client/ERoshanSpawnPhase.hpp"
#include "source2sdk/client/HeroDeathRecord_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroPickRecord_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/client/NeutralSpawnBoxes_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/RegionTriggerBoxes_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/itemid_t.hpp"
#include "source2sdk/client/sMuertaPartingShotSoulDef.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_AbilityDraftAbilityState.hpp"
#include "source2sdk/server/CDOTA_AbilityDraftHeroState.hpp"
#include "source2sdk/server/CDOTA_ItemStockInfo.hpp"
#include "source2sdk/server/CHeroStatueLiked.hpp"
#include "source2sdk/server/CHeroesPerPlayer.hpp"
#include "source2sdk/server/CMultiplayRules.hpp"
#include "source2sdk/server/CTormentorSpawnPhase.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/DOTA_AssassinMinigameNetworkState.hpp"
#include "source2sdk/server/EngineCountdownTimer.hpp"
#include "source2sdk/server/GameChatLogEntry_t.hpp"
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
        struct CDOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Building;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Pet;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Tower;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CIngameEvent_Base;
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
        // Standard-layout class: false
        // Size: 0x9938
        // Has VTable
        #pragma pack(push, 1)
        class CDOTAGameRules : public source2sdk::server::CMultiplayRules
        {
        public:
            uint8_t _pad00d0[0x50]; // 0xd0
            std::int32_t m_nRuneCycle; // 0x120            
            std::int32_t m_nNextPowerRuneType; // 0x124            
            std::int32_t m_nNextPowerRuneSpawnIndex; // 0x128            
            uint8_t _pad012c[0x4]; // 0x12c
            double m_flPauseTime; // 0x130            
            source2sdk::client::PlayerID_t m_pausingPlayerId; // 0x138            
            source2sdk::client::PlayerID_t m_unpausingPlayerId; // 0x13c            
            float m_fPauseRawTime; // 0x140            
            float m_fPauseCurTime; // 0x144            
            float m_fUnpauseRawTime; // 0x148            
            float m_fUnpauseCurTime; // 0x14c            
            std::int32_t m_nPausesRemaining[64]; // 0x150            
            float m_nLastPauseTime[64]; // 0x250            
            uint8_t _pad0350[0x8]; // 0x350
            std::int32_t m_iMiscHeroPickCounter; // 0x358            
            // m_hEndGameCinematicEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEndGameCinematicEntity;
            char m_hEndGameCinematicEntity[0x4]; // 0x35c            
            source2sdk::server::CountdownTimer m_EndGameCinematicTimer; // 0x360            
            // m_hOverlayHealthBarUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hOverlayHealthBarUnit;
            char m_hOverlayHealthBarUnit[0x4]; // 0x378            
            std::int32_t m_nOverlayHealthBarType; // 0x37c            
            bool m_bIsInCinematicMode; // 0x380            
            bool m_bIsInClientSideCinematicMode; // 0x381            
            bool m_bFreeCourierMode; // 0x382            
            uint8_t _pad0383[0x1]; // 0x383
            std::int32_t m_nStartingGold; // 0x384            
            std::int32_t m_nGoldPerTick; // 0x388            
            float m_flGoldTickTime; // 0x38c            
            bool m_bEnableSuggestAbilities; // 0x390            
            bool m_bEnableSuggestItems; // 0x391            
            uint8_t _pad0392[0x1e]; // 0x392
            std::uint32_t m_unFanfareGoodGuys; // 0x3b0            
            std::uint32_t m_unFanfareBadGuys; // 0x3b4            
            source2sdk::entity2::GameTime_t m_flFanfareTime; // 0x3b8            
            bool m_bSpeechUseSpawnInsteadOfRespawnConcept; // 0x3bc            
            bool m_bSpeechSendTeamSpeaksToSpectators; // 0x3bd            
            bool m_bIgnoreLobbyTeamsInCustomGames; // 0x3be            
            uint8_t _pad03bf[0x1]; // 0x3bf
            std::int32_t m_nCustomGameBansPerTeam; // 0x3c0            
            std::int32_t m_iFOWDefeatedTempViewer; // 0x3c4            
            uint8_t _pad03c8[0x48]; // 0x3c8
            std::int32_t m_nGameState; // 0x410            
            source2sdk::client::DOTA_HeroPickState m_nHeroPickState; // 0x414            
            bool m_bAlternateHeroGridsEnabled; // 0x418            
            uint8_t _pad0419[0x3]; // 0x419
            source2sdk::entity2::GameTime_t m_flStateTransitionTime; // 0x41c            
            float m_flOverride_dota_hero_selection_time; // 0x420            
            float m_flOverride_dota_pregame_time; // 0x424            
            float m_flOverride_dota_postgame_time; // 0x428            
            float m_flOverride_dota_strategy_time; // 0x42c            
            float m_flOverride_dota_team_showcase_duration; // 0x430            
            float m_flOverride_dota_rune_spawn_time; // 0x434            
            float m_flShowcaseTime[15]; // 0x438            
            float m_flNeutralInitialSpawnOffset; // 0x474            
            float m_flOverride_dota_tree_regrow_time; // 0x478            
            std::int32_t m_iGameMode; // 0x47c            
            // m_hGameModeEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameModeEntity;
            char m_hGameModeEntity[0x4]; // 0x480            
            // m_hCustomHeroPickRulesEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCustomHeroPickRulesEntity;
            char m_hCustomHeroPickRulesEntity[0x4]; // 0x484            
            source2sdk::entity2::GameTime_t m_flHeroPickStateTransitionTime; // 0x488            
            uint8_t _pad048c[0x4]; // 0x48c
            std::uint64_t m_iPlayerIDsInControl; // 0x490            
            bool m_bSameHeroSelectionEnabled; // 0x498            
            bool m_bUseCustomHeroXPValue; // 0x499            
            bool m_bUseBaseGoldBountyOnHeroes; // 0x49a            
            bool m_bUseUniversalShopMode; // 0x49b            
            bool m_bHideKillMessageHeaders; // 0x49c            
            uint8_t _pad049d[0x3]; // 0x49d
            float m_flHeroMinimapIconScale; // 0x4a0            
            float m_flCreepMinimapIconScale; // 0x4a4            
            bool m_bCreepSpawningEnabled; // 0x4a8            
            uint8_t _pad04a9[0x3]; // 0x4a9
            float m_flRuneMinimapIconScale; // 0x4ac            
            char m_CustomVictoryMessage[256]; // 0x4b0            
            float m_flCustomGameEndDelay; // 0x5b0            
            float m_flCustomGameSetupAutoLaunchDelay; // 0x5b4            
            float m_flCustomGameSetupTimeout; // 0x5b8            
            float m_flCustomVictoryMessageDuration; // 0x5bc            
            float m_flHeroSelectPenaltyTime; // 0x5c0            
            bool m_bCustomGameSetupAutoLaunchEnabled; // 0x5c4            
            bool m_bCustomGameTeamSelectionLocked; // 0x5c5            
            bool m_bCustomGameEnablePickRules; // 0x5c6            
            bool m_bCustomGameAllowHeroPickMusic; // 0x5c7            
            bool m_bCustomGameAllowMusicAtGameStart; // 0x5c8            
            bool m_bCustomGameAllowBattleMusic; // 0x5c9            
            bool m_bCustomGameDisableIK; // 0x5ca            
            bool m_bCustomGameAllowSecondaryAbilitiesOnOtherUnits; // 0x5cb            
            std::int32_t m_iCMModePickBanOrder; // 0x5cc            
            std::int32_t m_iCDModePickBanOrder; // 0x5d0            
            std::int32_t m_nGGTeam; // 0x5d4            
            source2sdk::entity2::GameTime_t m_flGGEndsAtTime; // 0x5d8            
            bool m_bGGCalled; // 0x5dc            
            bool m_bWhiteListEnabled; // 0x5dd            
            uint8_t _pad05de[0x2]; // 0x5de
            std::uint64_t m_bItemWhiteList[4]; // 0x5e0            
            std::int32_t m_nLastHitUIMode; // 0x600            
            bool m_bHUDTimerTutorialMode; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            source2sdk::server::CountdownTimer m_HeroPickMiscTimer; // 0x608            
            source2sdk::server::CountdownTimer m_ExtraTimeTimer; // 0x620            
            float m_fExtraTimeRemaining[2]; // 0x638            
            bool m_bHeroRespawnEnabled; // 0x640            
            bool m_bIsRandomingEnabled; // 0x641            
            uint8_t _pad0642[0x6]; // 0x642
            // m_HeroPickPhaseBitfield has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_HeroPickPhaseBitfield;
            char m_HeroPickPhaseBitfield[0x18]; // 0x648            
            bool m_bHasSwapped[64]; // 0x660            
            source2sdk::client::PlayerID_t m_iCaptainPlayerIDs[2]; // 0x6a0            
            source2sdk::client::HeroID_t m_BannedHeroes[24]; // 0x6a8            
            source2sdk::client::HeroID_t m_SelectedHeroes[24]; // 0x708            
            std::int32_t m_iActiveTeam; // 0x768            
            std::int32_t m_iStartingTeam; // 0x76c            
            std::int32_t m_iPenaltyLevelRadiant; // 0x770            
            std::int32_t m_iPenaltyLevelDire; // 0x774            
            bool m_bIsLoadingScenario; // 0x778            
            uint8_t _pad0779[0x7]; // 0x779
            // m_vecBanNominatedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroID_t> m_vecBanNominatedHeroes;
            char m_vecBanNominatedHeroes[0x18]; // 0x780            
            // m_vecNewBannedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecNewBannedHeroes;
            char m_vecNewBannedHeroes[0x18]; // 0x798            
            // m_vecWhitelistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecWhitelistedHeroes;
            char m_vecWhitelistedHeroes[0x18]; // 0x7b0            
            // m_vecBlacklistedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecBlacklistedHeroes;
            char m_vecBlacklistedHeroes[0x18]; // 0x7c8            
            bool m_bHideBlacklistedHeroes; // 0x7e0            
            uint8_t _pad07e1[0x3]; // 0x7e1
            std::int32_t m_nSeriesType; // 0x7e4            
            std::int32_t m_nRadiantSeriesWins; // 0x7e8            
            std::int32_t m_nDireSeriesWins; // 0x7ec            
            // m_vecAvailableHerosPerPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecAvailableHerosPerPlayerID;
            char m_vecAvailableHerosPerPlayerID[0x88]; // 0x7f0            
            // m_vecLockedHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecLockedHerosByPlayerID;
            char m_vecLockedHerosByPlayerID[0x88]; // 0x878            
            // m_vecDisabledRandomHerosByPlayerID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroesPerPlayer> m_vecDisabledRandomHerosByPlayerID;
            char m_vecDisabledRandomHerosByPlayerID[0x88]; // 0x900            
            source2sdk::client::HeroID_t m_CustomGameForceSelectHero[24]; // 0x988            
            float m_flGoldTime; // 0x9e8            
            float m_flXPTime; // 0x9ec            
            source2sdk::entity2::GameTime_t m_flCreepSpawntime; // 0x9f0            
            float m_flAnnounceStartTime; // 0x9f4            
            std::int32_t m_iGoodTomeCount; // 0x9f8            
            std::int32_t m_iBadTomeCount; // 0x9fc            
            source2sdk::entity2::GameTime_t m_flPreGameStartTime; // 0xa00            
            source2sdk::entity2::GameTime_t m_flGameStartTime; // 0xa04            
            source2sdk::entity2::GameTime_t m_flGameEndTime; // 0xa08            
            float m_flGameLoadTime; // 0xa0c            
            std::int32_t m_iCustomGameScore[2]; // 0xa10            
            std::int32_t m_nCustomGameDifficulty; // 0xa18            
            bool m_bEnemyModifiersEnabled; // 0xa1c            
            uint8_t _pad0a1d[0x3]; // 0xa1d
            std::int32_t m_iWaves; // 0xa20            
            std::int32_t m_iCreepUpgradeState; // 0xa24            
            source2sdk::entity2::GameTime_t m_fGoodGlyphCooldown; // 0xa28            
            source2sdk::entity2::GameTime_t m_fBadGlyphCooldown; // 0xa2c            
            source2sdk::entity2::GameTime_t m_flGlyphCooldowns[15]; // 0xa30            
            source2sdk::entity2::GameTime_t m_fGoodRadarCooldown; // 0xa6c            
            source2sdk::entity2::GameTime_t m_fBadRadarCooldown; // 0xa70            
            source2sdk::entity2::GameTime_t m_flRadarCooldowns[15]; // 0xa74            
            std::int32_t m_iGoodRadarCharges; // 0xab0            
            std::int32_t m_iBadRadarCharges; // 0xab4            
            std::int32_t m_iRadarCharges[15]; // 0xab8            
            float m_flOutpostTimes[24]; // 0xaf4            
            bool m_bIsNightstalkerNight; // 0xb54            
            bool m_bIsTemporaryNight; // 0xb55            
            bool m_bIsTemporaryDay; // 0xb56            
            uint8_t _pad0b57[0x1]; // 0xb57
            std::int32_t m_nRiverType; // 0xb58            
            source2sdk::client::HeroID_t m_nTemporaryDayNightSource; // 0xb5c            
            source2sdk::client::PlayerID_t m_nTeamFeaturedPlayerID[15]; // 0xb60            
            source2sdk::client::item_definition_index_t m_nTeamVersusScreen[15]; // 0xb9c            
            float m_flGoldRedistributeTime; // 0xbd8            
            std::int32_t m_nGoldToRedistribute[2]; // 0xbdc            
            source2sdk::entity2::GameTime_t m_flNextPreGameThink; // 0xbe4            
            source2sdk::entity2::GameTime_t m_flNextAllDraftGoldThink; // 0xbe8            
            uint8_t _pad0bec[0x4]; // 0xbec
            double m_flTimeEnteredState; // 0xbf0            
            std::uint32_t m_unRiverAccountID; // 0xbf8            
            uint8_t _pad0bfc[0x4]; // 0xbfc
            source2sdk::client::itemid_t m_ulRiverItemID; // 0xc00            
            uint8_t _pad0c08[0x40]; // 0xc08
            // m_vecItemStockInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_ItemStockInfo> m_vecItemStockInfo;
            char m_vecItemStockInfo[0x88]; // 0xc48            
            source2sdk::server::DOTA_AssassinMinigameNetworkState m_AssassinMiniGameNetData; // 0xcd0            
            std::int32_t m_nGameWinner; // 0xce0            
            uint8_t _pad0ce4[0x4]; // 0xce4
            source2sdk::client::MatchID_t m_unMatchID64; // 0xce8            
            bool m_bMatchSignoutComplete; // 0xcf0            
            uint8_t _pad0cf1[0x3]; // 0xcf1
            // m_hSideShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop1;
            char m_hSideShop1[0x4]; // 0xcf4            
            // m_hSideShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSideShop2;
            char m_hSideShop2[0x4]; // 0xcf8            
            // m_hSecretShop1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop1;
            char m_hSecretShop1[0x4]; // 0xcfc            
            // m_hSecretShop2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSecretShop2;
            char m_hSecretShop2[0x4]; // 0xd00            
            // m_hTeamFountains has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamFountains[15];
            char m_hTeamFountains[0x3c]; // 0xd04            
            // m_hTeamForts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamForts[15];
            char m_hTeamForts[0x3c]; // 0xd40            
            // m_hTeamShops has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeamShops[15];
            char m_hTeamShops[0x3c]; // 0xd7c            
            // m_hWatchers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hWatchers;
            char m_hWatchers[0x18]; // 0xdb8            
            // m_hWisdomShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWisdomShrines[15];
            char m_hWisdomShrines[0x3c]; // 0xdd0            
            // m_hLotusPools has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLotusPools[15];
            char m_hLotusPools[0x3c]; // 0xe0c            
            // m_hAnnouncerGood has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood;
            char m_hAnnouncerGood[0x4]; // 0xe48            
            // m_hAnnouncerBad has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad;
            char m_hAnnouncerBad[0x4]; // 0xe4c            
            // m_hAnnouncerSpectator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator;
            char m_hAnnouncerSpectator[0x4]; // 0xe50            
            // m_hAnnouncerGood_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerGood_KillingSpree;
            char m_hAnnouncerGood_KillingSpree[0x4]; // 0xe54            
            // m_hAnnouncerBad_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerBad_KillingSpree;
            char m_hAnnouncerBad_KillingSpree[0x4]; // 0xe58            
            // m_hAnnouncerSpectator_KillingSpree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAnnouncerSpectator_KillingSpree;
            char m_hAnnouncerSpectator_KillingSpree[0x4]; // 0xe5c            
            bool m_arrTier1TowerDestroyed[15]; // 0xe60            
            bool m_arrTier2TowerDestroyed[15]; // 0xe6f            
            bool m_arrTier3TowerDestroyed[15]; // 0xe7e            
            bool m_arrMeleeBarracksDestroyed[15]; // 0xe8d            
            bool m_bTier1TowerDestroyed; // 0xe9c            
            bool m_bTier2TowerDestroyed; // 0xe9d            
            bool m_bTier3TowerDestroyed; // 0xe9e            
            bool m_bMeleeBarracksDestroyed; // 0xe9f            
            float m_fTimeOfDay; // 0xea0            
            std::int32_t m_iNetTimeOfDay; // 0xea4            
            float m_flDaytimeStart; // 0xea8            
            float m_flNighttimeStart; // 0xeac            
            std::int32_t m_nLoadedPlayers; // 0xeb0            
            std::int32_t m_nExpectedPlayers; // 0xeb4            
            uint8_t _pad0eb8[0x8]; // 0xeb8
            std::int32_t m_iMinimapDebugGridState; // 0xec0            
            uint8_t _pad0ec4[0x7c]; // 0xec4
            std::int32_t m_iFoWFrameNumber; // 0xf40            
            Vector m_vWeatherWindDirection; // 0xf44            
            source2sdk::server::CTormentorSpawnPhase m_tormentorSpawnPhase; // 0xf50            
            // m_vecTormentorSpawnPhases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CTormentorSpawnPhase> m_vecTormentorSpawnPhases;
            char m_vecTormentorSpawnPhases[0x88]; // 0xf90            
            // m_vecDeityBlessings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_vecDeityBlessings;
            char m_vecDeityBlessings[0x18]; // 0x1018            
            KeyValues* m_pKVPostGameTable; // 0x1030            
            KeyValues* m_pKVEventMatchMetadata; // 0x1038            
            KeyValues* m_pKVEventSignout; // 0x1040            
            uint8_t _pad1048[0x48]; // 0x1048
            source2sdk::client::HeroID_t m_vecRequiredPlaytestHeroesStorage[24]; // 0x1090            
            source2sdk::client::HeroID_t m_vecRecommendedPlaytestHeroesStorage[24]; // 0x10f0            
            bool m_bAllRequiredPlaytestHeroesPicked; // 0x1150            
            uint8_t _pad1151[0x3]; // 0x1151
            std::int32_t m_nLastPlaytestPickPhase; // 0x1154            
            std::int32_t m_nCustomGameFowTeamCount; // 0x1158            
            bool m_bUseAlternateABRules; // 0x115c            
            bool m_bLobbyIsAssociatedWithGame; // 0x115d            
            uint8_t _pad115e[0x2]; // 0x115e
            source2sdk::server::CountdownTimer m_BotDebugTimer; // 0x1160            
            std::uint8_t m_BotDebugPushLane[18]; // 0x1178            
            std::uint8_t m_BotDebugDefendLane[18]; // 0x118a            
            std::uint8_t m_BotDebugFarmLane[6]; // 0x119c            
            std::uint8_t m_BotDebugRoam[8]; // 0x11a2            
            uint8_t _pad11aa[0x2]; // 0x11aa
            // m_hBotDebugRoamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBotDebugRoamTarget[2];
            char m_hBotDebugRoamTarget[0x8]; // 0x11ac            
            std::uint8_t m_BotDebugRoshan[2]; // 0x11b4            
            uint8_t _pad11b6[0x2]; // 0x11b6
            source2sdk::client::ERoshanSpawnPhase m_nRoshanRespawnPhase; // 0x11b8            
            source2sdk::entity2::GameTime_t m_flRoshanRespawnPhaseEndTime; // 0x11bc            
            // m_AbilityDraftAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftAbilityState> m_AbilityDraftAbilities;
            char m_AbilityDraftAbilities[0x88]; // 0x11c0            
            // m_AbilityDraftHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CDOTA_AbilityDraftHeroState> m_AbilityDraftHeroes;
            char m_AbilityDraftHeroes[0x88]; // 0x1248            
            bool m_bAbilityDraftCurrentPlayerHasPicked; // 0x12d0            
            uint8_t _pad12d1[0x3]; // 0x12d1
            std::int32_t m_nAbilityDraftPlayerTracker; // 0x12d4            
            std::int32_t m_nAbilityDraftRoundNumber; // 0x12d8            
            std::int32_t m_nAbilityDraftAdvanceSteps; // 0x12dc            
            std::int32_t m_nAbilityDraftPhase; // 0x12e0            
            bool m_bIsPlayerDraft; // 0x12e4            
            uint8_t _pad12e5[0x3]; // 0x12e5
            source2sdk::client::DOTA_PlayerDraftState m_ePlayerDraftState; // 0x12e8            
            uint8_t _pad12ec[0x4]; // 0x12ec
            // m_vecPlayerDraftPickOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPlayerDraftPickOrder;
            char m_vecPlayerDraftPickOrder[0x18]; // 0x12f0            
            std::int32_t m_nPlayerDraftPick; // 0x1308            
            std::int32_t m_nPlayerDraftActiveTeam; // 0x130c            
            float m_flPlayerDraftTimeBank[2]; // 0x1310            
            // m_vecARDMHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<KeyValues*> m_vecARDMHeroes[2];
            char m_vecARDMHeroes[0x30]; // 0x1318            
            std::int32_t m_nARDMHeroesPrecached; // 0x1348            
            float m_fLastARDMPrecache; // 0x134c            
            std::int32_t m_nAllDraftPhase; // 0x1350            
            bool m_bAllDraftRadiantFirst; // 0x1354            
            bool m_bAllowOverrideVPK; // 0x1355            
            uint8_t _pad1356[0x2]; // 0x1356
            std::int32_t m_nARDMHeroesRemaining[2]; // 0x1358            
            // m_hGlobalPetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Pet>> m_hGlobalPetList;
            char m_hGlobalPetList[0x18]; // 0x1360            
            uint8_t _pad1378[0x50]; // 0x1378
            std::int32_t m_nRadiantRoshanKills; // 0x13c8            
            std::int32_t m_nDireRoshanKills; // 0x13cc            
            std::int32_t m_nRoshanKillsDay; // 0x13d0            
            std::int32_t m_nRoshanKillsNight; // 0x13d4            
            std::int32_t m_nTormentorKills; // 0x13d8            
            std::int32_t m_nOutpostCaptures; // 0x13dc            
            uint8_t _pad13e0[0xc]; // 0x13e0
            std::int32_t m_nDistanceCalculations; // 0x13ec            
            bool m_bLaneVictoryPredicted; // 0x13f0            
            uint8_t _pad13f1[0x7]; // 0x13f1
            // m_mapSuccessfulSmokes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,std::int32_t> m_mapSuccessfulSmokes;
            char m_mapSuccessfulSmokes[0x28]; // 0x13f8            
            uint8_t _pad1420[0x20]; // 0x1420
            bool m_bExperimentalGameplay; // 0x1440            
            uint8_t _pad1441[0x1f]; // 0x1441
            // m_vecHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecHeroPickRecord;
            char m_vecHeroPickRecord[0x18]; // 0x1460            
            uint8_t _pad1478[0x28]; // 0x1478
            // m_vecHeroDeathRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroDeathRecord_t> m_vecHeroDeathRecord;
            char m_vecHeroDeathRecord[0x18]; // 0x14a0            
            uint8_t _pad14b8[0x18]; // 0x14b8
            // m_BadResultPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_BadResultPositionTriggers;
            char m_BadResultPositionTriggers[0x18]; // 0x14d0            
            // m_RoshanPositionTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_RoshanPositionTriggers;
            char m_RoshanPositionTriggers[0x18]; // 0x14e8            
            // m_vecAllDraftHeroPickRecord has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::HeroPickRecord_t> m_vecAllDraftHeroPickRecord;
            char m_vecAllDraftHeroPickRecord[0x18]; // 0x1500            
            // m_vecAbilityDraftOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::PlayerID_t,CUtlVector<source2sdk::client::AbilityID_t>> m_vecAbilityDraftOrder;
            char m_vecAbilityDraftOrder[0x28]; // 0x1518            
            uint8_t _pad1540[0x18]; // 0x1540
            std::int32_t m_nAllDraftHeroPickCollisionsThisPhase; // 0x1558            
            uint8_t _pad155c[0x4]; // 0x155c
            // m_hRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hRuneSpawners;
            char m_hRuneSpawners[0x18]; // 0x1560            
            // m_hBountyRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hBountyRuneSpawners;
            char m_hBountyRuneSpawners[0x18]; // 0x1578            
            // m_hXPRuneSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hXPRuneSpawners;
            char m_hXPRuneSpawners[0x18]; // 0x1590            
            // m_hNeutralSpawners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hNeutralSpawners[2];
            char m_hNeutralSpawners[0x30]; // 0x15a8            
            std::int32_t m_iPreviousRune1; // 0x15d8            
            std::int32_t m_iPreviousRune2; // 0x15dc            
            // m_vecAvailableRunes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAvailableRunes;
            char m_vecAvailableRunes[0x18]; // 0x15e0            
            float m_fNextPowerupRuneSpawnTime; // 0x15f8            
            float m_fNextBountyRuneSpawnTime; // 0x15fc            
            float m_fNextBountyRunePrepTime; // 0x1600            
            float m_fNextXPRuneSpawnTime; // 0x1604            
            bool m_aNeutralChoicesLoaded[5]; // 0x1608            
            bool m_bFirstPowerupRune; // 0x160d            
            bool m_bFirstBountyRune; // 0x160e            
            bool m_bFilterMoreGold; // 0x160f            
            bool m_bAllowOutpostXP; // 0x1610            
            uint8_t _pad1611[0x3]; // 0x1611
            // m_hRoshanSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRoshanSpawner;
            char m_hRoshanSpawner[0x4]; // 0x1614            
            std::int32_t m_iPreviousSpectators; // 0x1618            
            std::uint32_t m_nMaxSpectators; // 0x161c            
            // m_hDroppedItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hDroppedItems;
            char m_hDroppedItems[0x18]; // 0x1620            
            // m_hWards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hWards;
            char m_hWards[0x18]; // 0x1638            
            // m_hGameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGameEvents;
            char m_hGameEvents[0x4]; // 0x1650            
            uint8_t _pad1654[0x1c]; // 0x1654
            // m_Towers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Towers;
            char m_Towers[0x18]; // 0x1670            
            // m_TeamTowers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Tower>> m_TeamTowers[10];
            char m_TeamTowers[0xf0]; // 0x1688            
            // m_Outposts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Outposts;
            char m_Outposts[0x18]; // 0x1778            
            // m_TeamTowerPositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_TeamTowerPositions[10];
            char m_TeamTowerPositions[0xf0]; // 0x1790            
            // m_TeamTowerLevels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLevels[10];
            char m_TeamTowerLevels[0xf0]; // 0x1880            
            // m_TeamTowerLanes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_TeamTowerLanes[10];
            char m_TeamTowerLanes[0xf0]; // 0x1970            
            // m_TeamBarracks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamBarracks[10];
            char m_TeamBarracks[0xf0]; // 0x1a60            
            // m_TeamShrines has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC_Building>> m_TeamShrines[10];
            char m_TeamShrines[0xf0]; // 0x1b50            
            source2sdk::server::CountdownTimer m_TempDayTimer; // 0x1c40            
            source2sdk::server::CountdownTimer m_TempNightTimer; // 0x1c58            
            source2sdk::server::CountdownTimer m_NightstalkerNightTimer; // 0x1c70            
            source2sdk::server::CountdownTimer m_TempRiverTimer; // 0x1c88            
            bool m_bUseLenientAFK[2]; // 0x1ca0            
            bool m_bFirstBlood; // 0x1ca2            
            uint8_t _pad1ca3[0x1]; // 0x1ca3
            std::int32_t m_nFirstBloodTime; // 0x1ca4            
            source2sdk::server::CountdownTimer m_CheckIdleTimer; // 0x1ca8            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickRadiantPlayerID; // 0x1cc0            
            source2sdk::client::PlayerID_t m_nAnnounceHeroPickDirePlayerID; // 0x1cc4            
            CUtlString m_pszLastUsedAbility[64]; // 0x1cc8            
            // m_reconnectinfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_ReconnectInfo> m_reconnectinfos;
            char m_reconnectinfos[0x18]; // 0x1ec8            
            // m_hEnemyCreepsInBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemyCreepsInBase[10];
            char m_hEnemyCreepsInBase[0xf0]; // 0x1ee0            
            bool m_bTeamHasAbandonedPlayer[10]; // 0x1fd0            
            bool m_bLobbyHasLeaverDetected; // 0x1fda            
            bool m_bGameIsForcedSafeToLeave; // 0x1fdb            
            bool m_bLobbyHasDicardMatchResults; // 0x1fdc            
            uint8_t _pad1fdd[0x3]; // 0x1fdd
            std::int32_t m_iGameEndReason; // 0x1fe0            
            bool m_bNotifiedPlayerLeaverStatus[64]; // 0x1fe4            
            bool m_bUploadedReplay; // 0x2024            
            uint8_t _pad2025[0x3]; // 0x2025
            float m_flLobbyWaitTime; // 0x2028            
            bool m_bGameWasLoaded; // 0x202c            
            uint8_t _pad202d[0x3]; // 0x202d
            std::int32_t m_nLoadPauseFrameCount; // 0x2030            
            uint8_t _pad2034[0x4]; // 0x2034
            double m_flDemoModeStartTime; // 0x2038            
            uint8_t _pad2040[0x8]; // 0x2040
            double m_flStateFallbackTransitionTime; // 0x2048            
            source2sdk::server::EngineCountdownTimer m_timerFinishReplay; // 0x2050            
            // m_vecChatLog has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::GameChatLogEntry_t> m_vecChatLog;
            char m_vecChatLog[0x18]; // 0x2068            
            uint8_t _pad2080[0x2630]; // 0x2080
            bool m_bFatalErrorAbortGame; // 0x46b0            
            bool m_bFillEmptySlotsWithBots; // 0x46b1            
            uint8_t _pad46b2[0x2]; // 0x46b2
            std::uint32_t m_dotaMapSpawnGroup; // 0x46b4            
            uint8_t _pad46b8[0x28]; // 0x46b8
            std::uint32_t m_lobbyType; // 0x46e0            
            source2sdk::client::LeagueID_t m_lobbyLeagueID; // 0x46e4            
            char m_lobbyGameName[256]; // 0x46e8            
            // m_vecHeroStatueLiked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::CHeroStatueLiked> m_vecHeroStatueLiked;
            char m_vecHeroStatueLiked[0x88]; // 0x47e8            
            std::int32_t m_CustomGameTeamMaxPlayers[15]; // 0x4870            
            uint8_t _pad48ac[0x44]; // 0x48ac
            std::int32_t m_iMutations[5]; // 0x48f0            
            uint8_t _pad4904[0x4]; // 0x4904
            // m_vecIngameEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CIngameEvent_Base>> m_vecIngameEvents;
            char m_vecIngameEvents[0x18]; // 0x4908            
            std::int8_t m_nPrimaryIngameEventIndex; // 0x4920            
            uint8_t _pad4921[0x3]; // 0x4921
            std::uint32_t m_nOfrendaPledges; // 0x4924            
            std::uint32_t m_nRadiantOfrendas; // 0x4928            
            std::uint32_t m_nDireOfrendas; // 0x492c            
            bool m_bOfrendaEnabled; // 0x4930            
            uint8_t _pad4931[0x7]; // 0x4931
            // m_vecMuertaPartingShotSouls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sMuertaPartingShotSoulDef> m_vecMuertaPartingShotSouls;
            char m_vecMuertaPartingShotSouls[0x18]; // 0x4938            
            uint8_t _pad4950[0x18]; // 0x4950
            // m_NeutralSpawnBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::NeutralSpawnBoxes_t> m_NeutralSpawnBoxes;
            char m_NeutralSpawnBoxes[0x60]; // 0x4968            
            // m_RegionTriggerBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::RegionTriggerBoxes_t> m_RegionTriggerBoxes;
            char m_RegionTriggerBoxes[0x60]; // 0x49c8            
            double m_flLastItemSuggestionRequestTime[15]; // 0x4a28            
            uint8_t _pad4aa0[0xfb8]; // 0x4aa0
            double m_flLastPerfSampleTime; // 0x5a58            
            uint8_t _pad5a60[0x3ed0]; // 0x5a60
            std::int32_t m_nMultipleTickFrameCount; // 0x9930            
            std::int32_t m_nTimesPlayersDisconnected; // 0x9934            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAGameRules) == 0x9938);
    };
};
