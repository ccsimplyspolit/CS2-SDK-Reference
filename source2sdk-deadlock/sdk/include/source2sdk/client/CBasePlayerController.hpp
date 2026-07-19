#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_CommandContext.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
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
        // Size: 0x7f0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_pEntity"
        // static metadata: MNetworkIncludeByName "m_flSimulationTime"
        // static metadata: MNetworkIncludeByName "m_flCreateTime"
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
        // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
        // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "uint32 m_nTickBase"
        // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
        // static metadata: MNetworkVarNames "bool m_bKnownTeamMismatch"
        // static metadata: MNetworkVarNames "PlayerConnectedState m_iConnected"
        // static metadata: MNetworkVarNames "char m_iszPlayerName"
        // static metadata: MNetworkVarNames "uint64 m_steamID"
        // static metadata: MNetworkVarNames "bool m_bNoClipEnabled"
        // static metadata: MNetworkVarNames "uint32 m_iDesiredFOV"
        // static metadata: MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            // metadata: MNotSaved
            source2sdk::client::C_CommandContext m_CommandContext; // 0x5f8            
            // metadata: MNotSaved
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x6b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "1"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNotSaved
            std::uint32_t m_nTickBase; // 0x6b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPawnChanged"
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x6bc            
            // metadata: MNetworkEnable
            bool m_bKnownTeamMismatch; // 0x6c0            
            uint8_t _pad06c1[0x3]; // 0x6c1
            // metadata: MNotSaved
            // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPredictedPawn;
            char m_hPredictedPawn[0x4]; // 0x6c4            
            // metadata: MNotSaved
            CSplitScreenSlot m_nSplitScreenSlot; // 0x6c8            
            // metadata: MNotSaved
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x6cc            
            // metadata: MNotSaved
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x6d0            
            bool m_bIsHLTV; // 0x6e8            
            uint8_t _pad06e9[0x3]; // 0x6e9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x6ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
            // metadata: MNotSaved
            char m_iszPlayerName[128]; // 0x6f0            
            uint8_t _pad0770[0x8]; // 0x770
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "fixed64"
            // metadata: MNetworkChangeCallback "OnSteamIDChanged"
            // metadata: MNotSaved
            std::uint64_t m_steamID; // 0x778            
            // metadata: MNotSaved
            bool m_bIsLocalPlayerController; // 0x780            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNoClipEnableChanged"
            bool m_bNoClipEnabled; // 0x781            
            uint8_t _pad0782[0x2]; // 0x782
            // metadata: MNetworkEnable
            std::uint32_t m_iDesiredFOV; // 0x784            
            uint8_t _pad0788[0x68];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
            // void m_pCurrentCommand; // 0x770
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBasePlayerController) == 0x7f0);
    };
};
