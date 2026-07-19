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
        // Size: 0x7d0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CBasePlayerController : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04a8[0x8]; // 0x4a8
            // metadata: MNotSaved
            std::uint64_t m_nInButtonsWhichAreToggles; // 0x4b0            
            // metadata: MNotSaved
            std::uint32_t m_nTickBase; // 0x4b8            
            uint8_t _pad04bc[0x24]; // 0x4bc
            // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPawn;
            char m_hPawn[0x4]; // 0x4e0            
            bool m_bKnownTeamMismatch; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            // metadata: MNotSaved
            CSplitScreenSlot m_nSplitScreenSlot; // 0x4e8            
            // metadata: MNotSaved
            // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerController> m_hSplitOwner;
            char m_hSplitOwner[0x4]; // 0x4ec            
            // metadata: MNotSaved
            // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerController>> m_hSplitScreenPlayers;
            char m_hSplitScreenPlayers[0x18]; // 0x4f0            
            bool m_bIsHLTV; // 0x508            
            uint8_t _pad0509[0x3]; // 0x509
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iConnected; // 0x50c            
            // metadata: MNotSaved
            source2sdk::client::PlayerConnectedState m_iMostConnected; // 0x510            
            // metadata: MNotSaved
            char m_iszPlayerName[128]; // 0x514            
            uint8_t _pad0594[0x4]; // 0x594
            // metadata: MNotSaved
            CUtlString m_szNetworkIDString; // 0x598            
            // metadata: MNotSaved
            float m_fLerpTime; // 0x5a0            
            // metadata: MNotSaved
            bool m_bLagCompensation; // 0x5a4            
            // metadata: MNotSaved
            bool m_bPredict; // 0x5a5            
            uint8_t _pad05a6[0x6]; // 0x5a6
            // metadata: MNotSaved
            bool m_bIsLowViolence; // 0x5ac            
            // metadata: MNotSaved
            bool m_bGamePaused; // 0x5ad            
            uint8_t _pad05ae[0x13a]; // 0x5ae
            // metadata: MNotSaved
            source2sdk::client::ChatIgnoreType_t m_iIgnoreGlobalChat; // 0x6e8            
            // metadata: MKV3TransferSaveOpsForField
            float m_flLastPlayerTalkTime; // 0x6ec            
            // metadata: MNotSaved
            float m_flLastEntitySteadyState; // 0x6f0            
            // metadata: MNotSaved
            std::int32_t m_nAvailableEntitySteadyState; // 0x6f4            
            // metadata: MNotSaved
            bool m_bHasAnySteadyStateEnts; // 0x6f8            
            uint8_t _pad06f9[0xf]; // 0x6f9
            // metadata: MNotSaved
            std::uint64_t m_steamID; // 0x708            
            bool m_bNoClipEnabled; // 0x710            
            uint8_t _pad0711[0x3]; // 0x711
            std::uint32_t m_iDesiredFOV; // 0x714            
            uint8_t _pad0718[0xb8];
            
            // Datamap fields:
            // bool fakeclient; // 0x7fffffff
            // bool is_hltv; // 0x7fffffff
            // const char * playername; // 0x7fffffff
            // bool reserving; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerController) == 0x7d0);
    };
};
