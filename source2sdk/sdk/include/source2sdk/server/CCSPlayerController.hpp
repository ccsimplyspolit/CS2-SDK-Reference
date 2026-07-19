#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/QuestProgress_Reason.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSObserverPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_DamageServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_InGameMoneyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController_InventoryServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0xaa8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            uint8_t _pad07d0[0x10]; // 0x7d0
            source2sdk::server::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x7e0            
            source2sdk::server::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x7e8            
            source2sdk::server::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x7f0            
            source2sdk::server::CCSPlayerController_DamageServices* m_pDamageServices; // 0x7f8            
            std::uint32_t m_iPing; // 0x800            
            bool m_bHasCommunicationAbuseMute; // 0x804            
            uint8_t _pad0805[0x3]; // 0x805
            std::uint32_t m_uiCommunicationMuteFlags; // 0x808            
            uint8_t _pad080c[0x4]; // 0x80c
            CUtlSymbolLarge m_szCrosshairCodes; // 0x810            
            std::uint8_t m_iPendingTeamNum; // 0x818            
            uint8_t _pad0819[0x3]; // 0x819
            source2sdk::entity2::GameTime_t m_flForceTeamTime; // 0x81c            
            std::int32_t m_iCompTeammateColor; // 0x820            
            bool m_bEverPlayedOnTeam; // 0x824            
            bool m_bAttemptedToGetColor; // 0x825            
            uint8_t _pad0826[0x2]; // 0x826
            std::int32_t m_iTeammatePreferredColor; // 0x828            
            bool m_bTeamChanged; // 0x82c            
            bool m_bInSwitchTeam; // 0x82d            
            bool m_bHasSeenJoinGame; // 0x82e            
            bool m_bJustBecameSpectator; // 0x82f            
            bool m_bSwitchTeamsOnNextRoundReset; // 0x830            
            bool m_bRemoveAllItemsOnNextRoundReset; // 0x831            
            uint8_t _pad0832[0x2]; // 0x832
            source2sdk::entity2::GameTime_t m_flLastJoinTeamTime; // 0x834            
            CUtlSymbolLarge m_szClan; // 0x838            
            std::int32_t m_iCoachingTeam; // 0x840            
            uint8_t _pad0844[0x4]; // 0x844
            std::uint64_t m_nPlayerDominated; // 0x848            
            std::uint64_t m_nPlayerDominatingMe; // 0x850            
            std::int32_t m_iCompetitiveRanking; // 0x858            
            std::int32_t m_iCompetitiveWins; // 0x85c            
            std::int8_t m_iCompetitiveRankType; // 0x860            
            uint8_t _pad0861[0x3]; // 0x861
            std::int32_t m_iCompetitiveRankingPredicted_Win; // 0x864            
            std::int32_t m_iCompetitiveRankingPredicted_Loss; // 0x868            
            std::int32_t m_iCompetitiveRankingPredicted_Tie; // 0x86c            
            std::int32_t m_nEndMatchNextMapVote; // 0x870            
            std::uint16_t m_unActiveQuestId; // 0x874            
            uint8_t _pad0876[0x2]; // 0x876
            std::uint32_t m_rtActiveMissionPeriod; // 0x878            
            source2sdk::client::QuestProgress_Reason m_nQuestProgressReason; // 0x87c            
            std::uint32_t m_unPlayerTvControlFlags; // 0x880            
            uint8_t _pad0884[0x2c]; // 0x884
            std::int32_t m_iDraftIndex; // 0x8b0            
            std::uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8b4            
            std::uint32_t m_uiAbandonRecordedReason; // 0x8b8            
            std::uint32_t m_eNetworkDisconnectionReason; // 0x8bc            
            bool m_bCannotBeKicked; // 0x8c0            
            bool m_bEverFullyConnected; // 0x8c1            
            bool m_bAbandonAllowsSurrender; // 0x8c2            
            bool m_bAbandonOffersInstantSurrender; // 0x8c3            
            bool m_bDisconnection1MinWarningPrinted; // 0x8c4            
            bool m_bScoreReported; // 0x8c5            
            uint8_t _pad08c6[0x2]; // 0x8c6
            std::int32_t m_nDisconnectionTick; // 0x8c8            
            uint8_t _pad08cc[0xc]; // 0x8cc
            bool m_bControllingBot; // 0x8d8            
            bool m_bHasControlledBotThisRound; // 0x8d9            
            bool m_bHasBeenControlledByPlayerThisRound; // 0x8da            
            uint8_t _pad08db[0x1]; // 0x8db
            std::int32_t m_nBotsControlledThisRound; // 0x8dc            
            bool m_bCanControlObservedBot; // 0x8e0            
            uint8_t _pad08e1[0x3]; // 0x8e1
            // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPlayerPawn;
            char m_hPlayerPawn[0x4]; // 0x8e4            
            // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSObserverPawn> m_hObserverPawn;
            char m_hObserverPawn[0x4]; // 0x8e8            
            std::int32_t m_DesiredObserverMode; // 0x8ec            
            CEntityHandle m_hDesiredObserverTarget; // 0x8f0            
            bool m_bPawnIsAlive; // 0x8f4            
            uint8_t _pad08f5[0x3]; // 0x8f5
            std::uint32_t m_iPawnHealth; // 0x8f8            
            std::int32_t m_iPawnArmor; // 0x8fc            
            bool m_bPawnHasDefuser; // 0x900            
            bool m_bPawnHasHelmet; // 0x901            
            std::uint16_t m_nPawnCharacterDefIndex; // 0x902            
            std::int32_t m_iPawnLifetimeStart; // 0x904            
            std::int32_t m_iPawnLifetimeEnd; // 0x908            
            std::int32_t m_iPawnBotDifficulty; // 0x90c            
            // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
            char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x910            
            std::int32_t m_iScore; // 0x914            
            std::int32_t m_iRoundScore; // 0x918            
            std::int32_t m_iRoundsWon; // 0x91c            
            std::uint8_t m_recentKillQueue[8]; // 0x920            
            std::uint8_t m_nFirstKill; // 0x928            
            std::uint8_t m_nKillCount; // 0x929            
            bool m_bMvpNoMusic; // 0x92a            
            uint8_t _pad092b[0x1]; // 0x92b
            std::int32_t m_eMvpReason; // 0x92c            
            std::int32_t m_iMusicKitID; // 0x930            
            std::int32_t m_iMusicKitMVPs; // 0x934            
            std::int32_t m_iMVPs; // 0x938            
            std::int32_t m_nUpdateCounter; // 0x93c            
            float m_flSmoothedPing; // 0x940            
            uint8_t _pad0944[0x4]; // 0x944
            source2sdk::server::IntervalTimer m_lastHeldVoteTimer; // 0x948            
            uint8_t _pad0958[0x8]; // 0x958
            bool m_bShowHints; // 0x960            
            uint8_t _pad0961[0x3]; // 0x961
            std::int32_t m_iNextTimeCheck; // 0x964            
            bool m_bJustDidTeamKill; // 0x968            
            bool m_bPunishForTeamKill; // 0x969            
            bool m_bGaveTeamDamageWarning; // 0x96a            
            bool m_bGaveTeamDamageWarningThisRound; // 0x96b            
            uint8_t _pad096c[0x4]; // 0x96c
            double m_dblLastReceivedPacketPlatFloatTime; // 0x970            
            source2sdk::entity2::GameTime_t m_LastTeamDamageWarningTime; // 0x978            
            source2sdk::entity2::GameTime_t m_LastTimePlayerWasDisconnectedForPawnsRemove; // 0x97c            
            std::uint32_t m_nSuspiciousHitCount; // 0x980            
            std::uint32_t m_nNonSuspiciousHitStreak; // 0x984            
            uint8_t _pad0988[0xa1]; // 0x988
            bool m_bFireBulletsSeedSynchronized; // 0xa29            
            uint8_t _pad0a2a[0x7e];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerController) == 0xaa8);
    };
};
