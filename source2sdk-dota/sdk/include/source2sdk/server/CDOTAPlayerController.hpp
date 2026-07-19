#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/client/ShopItemViewMode_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x980
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            uint8_t _pad07b8[0x8]; // 0x7b8
            std::int32_t m_iMinimapMove; // 0x7c0            
            std::int32_t m_iCursor[2]; // 0x7c4            
            std::int32_t m_iSpectatorClickBehavior; // 0x7cc            
            float m_flAspectRatio; // 0x7d0            
            // m_hSpectatorQueryUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpectatorQueryUnit;
            char m_hSpectatorQueryUnit[0x4]; // 0x7d4            
            std::int32_t m_iStatsPanel; // 0x7d8            
            std::int32_t m_iShopPanel; // 0x7dc            
            source2sdk::client::ShopItemViewMode_t m_iShopViewMode; // 0x7e0            
            std::int32_t m_iStatsDropdownCategory; // 0x7e4            
            std::int32_t m_iStatsDropdownSort; // 0x7e8            
            char m_szShopString[64]; // 0x7ec            
            bool m_bInShowCaseMode; // 0x82c            
            uint8_t _pad082d[0x3]; // 0x82d
            float m_flCameraZoomAmount; // 0x830            
            std::int32_t m_iHighPriorityScore; // 0x834            
            float m_flUnfilteredFrameTime; // 0x838            
            bool m_bUsingAssistedCameraOperator; // 0x83c            
            bool m_bUsingCameraMan; // 0x83d            
            uint8_t _pad083e[0x2]; // 0x83e
            std::int32_t m_nPlayerAssistFlags; // 0x840            
            float m_flHighPriorityScoreTimeStamp; // 0x844            
            float m_flExecuteOrdersLagCompensation; // 0x848            
            std::int32_t m_iMusicStatus; // 0x84c            
            float m_flMusicOperatorVals[3]; // 0x850            
            std::int32_t m_iMusicOperatorVals[4]; // 0x85c            
            uint8_t _pad086c[0x4]; // 0x86c
            source2sdk::server::CountdownTimer m_MusicRestTime; // 0x870            
            // m_hKillCamUnit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hKillCamUnit;
            char m_hKillCamUnit[0x4]; // 0x888            
            VectorWS m_vecCrosshairTracePos; // 0x88c            
            CEntityIndex m_iCrosshairEntity; // 0x898            
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x89c            
            // m_hAssignedHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssignedHero;
            char m_hAssignedHero[0x4]; // 0x8a0            
            uint8_t _pad08a4[0xc]; // 0x8a4
            bool m_bTeleportRequiresHalt; // 0x8b0            
            bool m_bChannelRequiresHalt; // 0x8b1            
            uint8_t _pad08b2[0x2e]; // 0x8b2
            bool m_bInteractionChannelsRequiresHalt; // 0x8e0            
            uint8_t _pad08e1[0x3]; // 0x8e1
            std::int32_t m_nServerOrderSequenceNumber; // 0x8e4            
            float m_flLastOrderTime; // 0x8e8            
            float m_flLastKnownActiveTime; // 0x8ec            
            std::uint32_t m_nLastOrderLatency; // 0x8f0            
            source2sdk::entity2::GameTime_t m_flLastReconnectTime; // 0x8f4            
            source2sdk::entity2::GameTime_t m_fLastSuggestionTime; // 0x8f8            
            uint8_t _pad08fc[0x1c]; // 0x8fc
            bool m_bWantsRandomHero; // 0x918            
            bool m_bFullyJoinedServer; // 0x919            
            uint8_t _pad091a[0x2]; // 0x91a
            std::int32_t m_nCheatDetectOrderReferenceCommandNumber; // 0x91c            
            source2sdk::client::PlayerID_t m_iSwapPreferencePlayerID; // 0x920            
            std::uint32_t m_nCoachListenMask; // 0x924            
            std::int32_t m_nCachedCoachedTeam; // 0x928            
            float m_flLastChatWheelTime[2]; // 0x92c            
            float m_flLastChatWheelAudioTime[2]; // 0x934            
            float m_flLastChatWheelAllChatAudioTime[2]; // 0x93c            
            float m_flLastChatWheelSprayTime; // 0x944            
            float m_flLastChatWheelLongCooldownTime; // 0x948            
            float m_flLastPingTime; // 0x94c            
            float m_flPingAllowance; // 0x950            
            float m_flLastMapLineTime; // 0x954            
            float m_flMapLineAllowance; // 0x958            
            float m_flLastWaypointPathPingTime; // 0x95c            
            float m_flWaypointPathPingAllowance; // 0x960            
            float m_flLastVersusBehaviorTime; // 0x964            
            float m_flVersusBehaviorAllowance; // 0x968            
            std::uint8_t m_pOrderRetirementHistory[10]; // 0x96c            
            std::uint16_t m_nOrderRetirementSum; // 0x976            
            std::int32_t m_nOrderRetirementLastTick; // 0x978            
            float m_flLastReportedMissedSnapshotRate; // 0x97c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPlayerController) == 0x980);
    };
};
