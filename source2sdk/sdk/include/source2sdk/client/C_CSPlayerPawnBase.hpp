#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_PingServices;
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
        // Size: 0x1480
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSPlayerPawnBase : public source2sdk::client::C_BasePlayerPawn
        {
        public:
            uint8_t _pad13e0[0x10]; // 0x13e0
            source2sdk::client::CCSPlayer_PingServices* m_pPingServices; // 0x13f0            
            source2sdk::client::CSPlayerState m_previousPlayerState; // 0x13f8            
            source2sdk::client::CSPlayerState m_iPlayerState; // 0x13fc            
            bool m_bHasMovedSinceSpawn; // 0x1400            
            uint8_t _pad1401[0x3]; // 0x1401
            source2sdk::entity2::GameTime_t m_flLastSpawnTimeIndex; // 0x1404            
            std::int32_t m_iProgressBarDuration; // 0x1408            
            float m_flProgressBarStartTime; // 0x140c            
            source2sdk::entity2::GameTime_t m_flClientDeathTime; // 0x1410            
            float m_flFlashBangTime; // 0x1414            
            float m_flFlashScreenshotAlpha; // 0x1418            
            float m_flFlashOverlayAlpha; // 0x141c            
            bool m_bFlashBuildUp; // 0x1420            
            bool m_bFlashDspHasBeenCleared; // 0x1421            
            bool m_bFlashScreenshotHasBeenGrabbed; // 0x1422            
            uint8_t _pad1423[0x1]; // 0x1423
            float m_flFlashMaxAlpha; // 0x1424            
            float m_flFlashDuration; // 0x1428            
            source2sdk::entity2::GameTime_t m_flClientHealthFadeChangeTimestamp; // 0x142c            
            std::int32_t m_nClientHealthFadeParityValue; // 0x1430            
            float m_fNextThinkPushAway; // 0x1434            
            uint8_t _pad1438[0x4]; // 0x1438
            float m_flCurrentMusicStartTime; // 0x143c            
            float m_flMusicRoundStartTime; // 0x1440            
            bool m_bDeferStartMusicOnWarmup; // 0x1444            
            uint8_t _pad1445[0x3]; // 0x1445
            float m_flLastSmokeOverlayAlpha; // 0x1448            
            float m_flLastSmokeAge; // 0x144c            
            Vector m_vLastSmokeOverlayColor; // 0x1450            
            uint8_t _pad145c[0x1c]; // 0x145c
            // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hOriginalController;
            char m_hOriginalController[0x4]; // 0x1478            
            uint8_t _pad147c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerPawnBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerPawnBase) == 0x1480);
    };
};
