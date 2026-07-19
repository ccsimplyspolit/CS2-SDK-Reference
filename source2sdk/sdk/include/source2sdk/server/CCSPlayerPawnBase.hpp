#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CTouchExpansionComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_PingServices;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSPlayerPawnBase : public source2sdk::server::CBasePlayerPawn
        {
        public:
            uint8_t _pad0be0[0x10]; // 0xbe0
            source2sdk::server::CTouchExpansionComponent m_CTouchExpansionComponent; // 0xbf0            
            source2sdk::server::CCSPlayer_PingServices* m_pPingServices; // 0xc40            
            source2sdk::entity2::GameTime_t m_blindUntilTime; // 0xc48            
            source2sdk::entity2::GameTime_t m_blindStartTime; // 0xc4c            
            source2sdk::client::CSPlayerState m_iPlayerState; // 0xc50            
            uint8_t _pad0c54[0xac]; // 0xc54
            bool m_bRespawning; // 0xd00            
            bool m_bHasMovedSinceSpawn; // 0xd01            
            uint8_t _pad0d02[0x2]; // 0xd02
            std::int32_t m_iNumSpawns; // 0xd04            
            uint8_t _pad0d08[0x4]; // 0xd08
            float m_flIdleTimeSinceLastAction; // 0xd0c            
            float m_fNextRadarUpdateTime; // 0xd10            
            float m_flFlashDuration; // 0xd14            
            float m_flFlashMaxAlpha; // 0xd18            
            float m_flProgressBarStartTime; // 0xd1c            
            std::int32_t m_iProgressBarDuration; // 0xd20            
            // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerController> m_hOriginalController;
            char m_hOriginalController[0x4]; // 0xd24            
            uint8_t _pad0d28[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerPawnBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerPawnBase) == 0xd30);
    };
};
