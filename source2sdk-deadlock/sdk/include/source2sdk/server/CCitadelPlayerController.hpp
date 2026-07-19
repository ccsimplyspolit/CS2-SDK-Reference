#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelLobbyPlayerSlot_t.hpp"
#include "source2sdk/client/EGuidedBotMatchObjective.hpp"
#include "source2sdk/client/EPlayerPlayState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerController.hpp"
#include "source2sdk/server/PlayerDataGlobal_t.hpp"
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
        struct CCitadelPlayerPawn;
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
        // Size: 0xd28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EPlayerPlayState m_ePlayState"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchLastHits"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsSecured"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchOrbsDenied"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToGuardians"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageToPlayers"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchDamageTaken"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchNetWorth"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchModsPurchased"
        // static metadata: MNetworkVarNames "int m_iGuidedBotMatchAbilityUpgrades"
        // static metadata: MNetworkVarNames "float m_flGuideBotMatchLastTaskNagVO"
        // static metadata: MNetworkVarNames "float m_flGuideBotLastTimeTaskCompleted"
        // static metadata: MNetworkVarNames "EGuidedBotMatchObjective m_eGuidedBotMatchObjective"
        // static metadata: MNetworkVarNames "int m_nCurrentRank"
        // static metadata: MNetworkVarNames "int8 m_nAssignedLane"
        // static metadata: MNetworkVarNames "int8 m_nOriginalLaneAssignment"
        // static metadata: MNetworkVarNames "bool m_bBotDisconnectTakeover"
        // static metadata: MNetworkVarNames "bool m_bInTeamChat"
        // static metadata: MNetworkVarNames "bool m_bInPartyChat"
        // static metadata: MNetworkVarNames "bool m_bLaneSwapLocked"
        // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRequests"
        // static metadata: MNetworkVarNames "EHANDLE m_vecLaneSwapRejects"
        // static metadata: MNetworkVarNames "int32 m_vecMutedPlayers"
        // static metadata: MNetworkVarNames "bool m_bCommsRestricted"
        // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hHeroPawn"
        // static metadata: MNetworkVarNames "PlayerDataGlobal_t m_PlayerDataGlobal"
        // static metadata: MNetworkVarNames "int8 m_nDeathReplayAvailable"
        // static metadata: MNetworkVarNames "CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot"
        #pragma pack(push, 1)
        class CCitadelPlayerController : public source2sdk::server::CBasePlayerController
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::EPlayerPlayState m_ePlayState; // 0x7d0            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchLastHits; // 0x7d4            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchOrbsSecured; // 0x7d8            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchOrbsDenied; // 0x7dc            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageToGuardians; // 0x7e0            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageToPlayers; // 0x7e4            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchDamageTaken; // 0x7e8            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchNetWorth; // 0x7ec            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchModsPurchased; // 0x7f0            
            // metadata: MNetworkEnable
            std::int32_t m_iGuidedBotMatchAbilityUpgrades; // 0x7f4            
            // metadata: MNetworkEnable
            float m_flGuideBotMatchLastTaskNagVO; // 0x7f8            
            // metadata: MNetworkEnable
            float m_flGuideBotLastTimeTaskCompleted; // 0x7fc            
            // metadata: MNetworkEnable
            source2sdk::client::EGuidedBotMatchObjective m_eGuidedBotMatchObjective; // 0x800            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentRank; // 0x804            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AssignedLaneChanged"
            std::int8_t m_nAssignedLane; // 0x808            
            // metadata: MNetworkEnable
            std::int8_t m_nOriginalLaneAssignment; // 0x809            
            // metadata: MNetworkEnable
            bool m_bBotDisconnectTakeover; // 0x80a            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ChatGroupsChanged"
            bool m_bInTeamChat; // 0x80b            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "ChatGroupsChanged"
            bool m_bInPartyChat; // 0x80c            
            // metadata: MNetworkEnable
            bool m_bLaneSwapLocked; // 0x80d            
            uint8_t _pad080e[0x2]; // 0x80e
            // metadata: MNetworkEnable
            // m_vecLaneSwapRequests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecLaneSwapRequests;
            char m_vecLaneSwapRequests[0x18]; // 0x810            
            // metadata: MNetworkEnable
            // m_vecLaneSwapRejects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecLaneSwapRejects;
            char m_vecLaneSwapRejects[0x18]; // 0x828            
            // metadata: MNetworkEnable
            // m_vecMutedPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_vecMutedPlayers;
            char m_vecMutedPlayers[0x18]; // 0x840            
            // metadata: MNetworkEnable
            bool m_bCommsRestricted; // 0x858            
            uint8_t _pad0859[0x12b]; // 0x859
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroPawnChanged"
            // m_hHeroPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hHeroPawn;
            char m_hHeroPawn[0x4]; // 0x984            
            uint8_t _pad0988[0x40]; // 0x988
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::server::PlayerDataGlobal_t m_PlayerDataGlobal; // 0x9c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nDeathReplayAvailable; // 0xcf8            
            // metadata: MNetworkEnable
            source2sdk::client::CitadelLobbyPlayerSlot_t m_unLobbyPlayerSlot; // 0xcf9            
            uint8_t _pad0cfa[0x2]; // 0xcfa
            source2sdk::entity2::GameTime_t m_flLastCommsTime; // 0xcfc            
            source2sdk::entity2::GameTime_t m_flNextAllowedCommsTime; // 0xd00            
            source2sdk::entity2::GameTime_t m_flLastFailedCommsTime; // 0xd04            
            // m_vecRecentCommAttempts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_vecRecentCommAttempts;
            char m_vecRecentCommAttempts[0x18]; // 0xd08            
            std::int32_t m_nTotalCommsAttempted; // 0xd20            
            std::int32_t m_nGuideBotNumTasksComplete; // 0xd24            
            
            // Datamap fields:
            // void CCitadelPlayerControllerResourceDataThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayerController) == 0xd28);
    };
};
