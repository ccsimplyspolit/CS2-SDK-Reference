#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ChatIgnoreType_t.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        // Size: 0x7b8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad0498[0x8]; // 0x498
            // metadata: MNotSaved
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x4a0            
            // metadata: MNotSaved
            std::uint32_t m_nTickBase; // 0x4a8            
            uint8_t _pad04ac[0x24]; // 0x4ac
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x4d0            
            bool m_bKnownTeamMismatch; // 0x4d4            
            uint8_t _pad04d5[0x3]; // 0x4d5
            // metadata: MNotSaved
            CSplitScreenSlot m_nSplitScreenSlot; // 0x4d8            
            // metadata: MNotSaved
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x4dc            
            // metadata: MNotSaved
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x4e0            
            bool m_bIsHLTV; // 0x4f8            
            uint8_t _pad04f9[0x3]; // 0x4f9
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x4fc            
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iMostConnected; // 0x500            
            // metadata: MNotSaved
            char m_iszPlayerName[128]; // 0x504            
            uint8_t _pad0584[0x4]; // 0x584
            // metadata: MNotSaved
            CUtlString m_szNetworkIDString; // 0x588            
            // metadata: MNotSaved
            float m_fLerpTime; // 0x590            
            // metadata: MNotSaved
            bool m_bLagCompensation; // 0x594            
            // metadata: MNotSaved
            bool m_bPredict; // 0x595            
            uint8_t _pad0596[0x6]; // 0x596
            // metadata: MNotSaved
            bool m_bIsLowViolence; // 0x59c            
            // metadata: MNotSaved
            bool m_bGamePaused; // 0x59d            
            uint8_t _pad059e[0x132]; // 0x59e
            // metadata: MNotSaved
            source2sdk::client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6d0            
            // metadata: MKV3TransferSaveOpsForField
            float m_flLastPlayerTalkTime; // 0x6d4            
            // metadata: MNotSaved
            float m_flLastEntitySteadyState; // 0x6d8            
            // metadata: MNotSaved
            std::int32_t m_nAvailableEntitySteadyState; // 0x6dc            
            // metadata: MNotSaved
            bool m_bHasAnySteadyStateEnts; // 0x6e0            
            uint8_t _pad06e1[0xf]; // 0x6e1
            // metadata: MNotSaved
            std::uint64_t m_steamID; // 0x6f0            
            bool m_bNoClipEnabled; // 0x6f8            
            uint8_t _pad06f9[0x3]; // 0x6f9
            std::uint32_t m_iDesiredFOV; // 0x6fc            
            uint8_t _pad0700[0xb8];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerController) == 0x7b8);
    };
};
