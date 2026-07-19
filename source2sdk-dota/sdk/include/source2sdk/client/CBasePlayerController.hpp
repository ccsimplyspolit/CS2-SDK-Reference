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
        // Size: 0x7e0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f0[0x8]; // 0x5f0
            // metadata: MNotSaved
            source2sdk::client::C_CommandContext m_CommandContext; // 0x5f8            
            // metadata: MNotSaved
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x698            
            // metadata: MNotSaved
            std::uint32_t m_nTickBase; // 0x6a0            
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x6a4            
            bool m_bKnownTeamMismatch; // 0x6a8            
            uint8_t _pad06a9[0x3]; // 0x6a9
            // metadata: MNotSaved
            // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPredictedPawn;
            char m_hPredictedPawn[0x4]; // 0x6ac            
            // metadata: MNotSaved
            CSplitScreenSlot m_nSplitScreenSlot; // 0x6b0            
            // metadata: MNotSaved
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x6b4            
            // metadata: MNotSaved
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x6b8            
            bool m_bIsHLTV; // 0x6d0            
            uint8_t _pad06d1[0x3]; // 0x6d1
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x6d4            
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iMostConnected; // 0x6d8            
            // metadata: MNotSaved
            char m_iszPlayerName[128]; // 0x6dc            
            uint8_t _pad075c[0xc]; // 0x75c
            // metadata: MNotSaved
            std::uint64_t m_steamID; // 0x768            
            // metadata: MNotSaved
            bool m_bIsLocalPlayerController; // 0x770            
            bool m_bNoClipEnabled; // 0x771            
            uint8_t _pad0772[0x2]; // 0x772
            std::uint32_t m_iDesiredFOV; // 0x774            
            uint8_t _pad0778[0x68];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBasePlayerController) == 0x7e0);
    };
};
