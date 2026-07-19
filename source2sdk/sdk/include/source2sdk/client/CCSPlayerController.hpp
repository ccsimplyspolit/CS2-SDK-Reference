#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePlayerController.hpp"
#include "source2sdk/client/QuestProgress_Reason.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_DamageServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_InGameMoneyServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController_InventoryServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSObserverPawn;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
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
        // Size: 0x960
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSPlayerController : public source2sdk::client::CBasePlayerController
        {
        public:
            uint8_t _pad07f8[0x18]; // 0x7f8
            source2sdk::client::CCSPlayerController_InGameMoneyServices* m_pInGameMoneyServices; // 0x810            
            source2sdk::client::CCSPlayerController_InventoryServices* m_pInventoryServices; // 0x818            
            source2sdk::client::CCSPlayerController_ActionTrackingServices* m_pActionTrackingServices; // 0x820            
            source2sdk::client::CCSPlayerController_DamageServices* m_pDamageServices; // 0x828            
            std::uint32_t m_iPing; // 0x830            
            bool m_bHasCommunicationAbuseMute; // 0x834            
            uint8_t _pad0835[0x3]; // 0x835
            std::uint32_t m_uiCommunicationMuteFlags; // 0x838            
            uint8_t _pad083c[0x4]; // 0x83c
            CUtlSymbolLarge m_szCrosshairCodes; // 0x840            
            std::uint8_t m_iPendingTeamNum; // 0x848            
            uint8_t _pad0849[0x3]; // 0x849
            source2sdk::entity2::GameTime_t m_flForceTeamTime; // 0x84c            
            std::int32_t m_iCompTeammateColor; // 0x850            
            bool m_bEverPlayedOnTeam; // 0x854            
            uint8_t _pad0855[0x3]; // 0x855
            source2sdk::entity2::GameTime_t m_flPreviousForceJoinTeamTime; // 0x858            
            uint8_t _pad085c[0x4]; // 0x85c
            CUtlSymbolLarge m_szClan; // 0x860            
            CUtlString m_sSanitizedPlayerName; // 0x868            
            std::int32_t m_iCoachingTeam; // 0x870            
            uint8_t _pad0874[0x4]; // 0x874
            std::uint64_t m_nPlayerDominated; // 0x878            
            std::uint64_t m_nPlayerDominatingMe; // 0x880            
            std::int32_t m_iCompetitiveRanking; // 0x888            
            std::int32_t m_iCompetitiveWins; // 0x88c            
            std::int8_t m_iCompetitiveRankType; // 0x890            
            uint8_t _pad0891[0x3]; // 0x891
            std::int32_t m_iCompetitiveRankingPredicted_Win; // 0x894            
            std::int32_t m_iCompetitiveRankingPredicted_Loss; // 0x898            
            std::int32_t m_iCompetitiveRankingPredicted_Tie; // 0x89c            
            std::int32_t m_nEndMatchNextMapVote; // 0x8a0            
            std::uint16_t m_unActiveQuestId; // 0x8a4            
            uint8_t _pad08a6[0x2]; // 0x8a6
            std::uint32_t m_rtActiveMissionPeriod; // 0x8a8            
            source2sdk::client::QuestProgress_Reason m_nQuestProgressReason; // 0x8ac            
            std::uint32_t m_unPlayerTvControlFlags; // 0x8b0            
            uint8_t _pad08b4[0x2c]; // 0x8b4
            std::int32_t m_iDraftIndex; // 0x8e0            
            std::uint32_t m_msQueuedModeDisconnectionTimestamp; // 0x8e4            
            std::uint32_t m_uiAbandonRecordedReason; // 0x8e8            
            std::uint32_t m_eNetworkDisconnectionReason; // 0x8ec            
            bool m_bCannotBeKicked; // 0x8f0            
            bool m_bEverFullyConnected; // 0x8f1            
            bool m_bAbandonAllowsSurrender; // 0x8f2            
            bool m_bAbandonOffersInstantSurrender; // 0x8f3            
            bool m_bDisconnection1MinWarningPrinted; // 0x8f4            
            bool m_bScoreReported; // 0x8f5            
            uint8_t _pad08f6[0x2]; // 0x8f6
            std::int32_t m_nDisconnectionTick; // 0x8f8            
            uint8_t _pad08fc[0xc]; // 0x8fc
            bool m_bControllingBot; // 0x908            
            bool m_bHasControlledBotThisRound; // 0x909            
            bool m_bHasBeenControlledByPlayerThisRound; // 0x90a            
            uint8_t _pad090b[0x1]; // 0x90b
            std::int32_t m_nBotsControlledThisRound; // 0x90c            
            bool m_bCanControlObservedBot; // 0x910            
            uint8_t _pad0911[0x3]; // 0x911
            // m_hPlayerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPlayerPawn;
            char m_hPlayerPawn[0x4]; // 0x914            
            // m_hObserverPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSObserverPawn> m_hObserverPawn;
            char m_hObserverPawn[0x4]; // 0x918            
            bool m_bPawnIsAlive; // 0x91c            
            uint8_t _pad091d[0x3]; // 0x91d
            std::uint32_t m_iPawnHealth; // 0x920            
            std::int32_t m_iPawnArmor; // 0x924            
            bool m_bPawnHasDefuser; // 0x928            
            bool m_bPawnHasHelmet; // 0x929            
            std::uint16_t m_nPawnCharacterDefIndex; // 0x92a            
            std::int32_t m_iPawnLifetimeStart; // 0x92c            
            std::int32_t m_iPawnLifetimeEnd; // 0x930            
            std::int32_t m_iPawnBotDifficulty; // 0x934            
            // m_hOriginalControllerOfCurrentPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hOriginalControllerOfCurrentPawn;
            char m_hOriginalControllerOfCurrentPawn[0x4]; // 0x938            
            std::int32_t m_iScore; // 0x93c            
            std::uint8_t m_recentKillQueue[8]; // 0x940            
            std::uint8_t m_nFirstKill; // 0x948            
            std::uint8_t m_nKillCount; // 0x949            
            bool m_bMvpNoMusic; // 0x94a            
            uint8_t _pad094b[0x1]; // 0x94b
            std::int32_t m_eMvpReason; // 0x94c            
            std::int32_t m_iMusicKitID; // 0x950            
            std::int32_t m_iMusicKitMVPs; // 0x954            
            std::int32_t m_iMVPs; // 0x958            
            bool m_bIsPlayerNameDirty; // 0x95c            
            bool m_bFireBulletsSeedSynchronized; // 0x95d            
            uint8_t _pad095e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController) == 0x960);
    };
};
