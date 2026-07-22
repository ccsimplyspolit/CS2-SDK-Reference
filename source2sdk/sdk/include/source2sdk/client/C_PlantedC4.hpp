#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_Multimeter;
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
        // Size: 0x1730
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_PlantedC4 : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad1180[0x20]; // 0x1180
            bool m_bBombTicking; // 0x11a0            
            uint8_t _pad11a1[0x3]; // 0x11a1
            std::int32_t m_nBombSite; // 0x11a4            
            std::int32_t m_nSourceSoundscapeHash; // 0x11a8            
            uint8_t _pad11ac[0x4]; // 0x11ac
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x11b0            
            source2sdk::entity2::GameTime_t m_flNextGlow; // 0x11c8            
            source2sdk::entity2::GameTime_t m_flNextBeep; // 0x11cc            
            source2sdk::entity2::GameTime_t m_flC4Blow; // 0x11d0            
            bool m_bCannotBeDefused; // 0x11d4            
            bool m_bHasExploded; // 0x11d5            
            uint8_t _pad11d6[0x2]; // 0x11d6
            float m_flTimerLength; // 0x11d8            
            bool m_bBeingDefused; // 0x11dc            
            uint8_t _pad11dd[0x3]; // 0x11dd
            float m_bTriggerWarning; // 0x11e0            
            float m_bExplodeWarning; // 0x11e4            
            bool m_bC4Activated; // 0x11e8            
            bool m_bTenSecWarning; // 0x11e9            
            uint8_t _pad11ea[0x2]; // 0x11ea
            float m_flDefuseLength; // 0x11ec            
            source2sdk::entity2::GameTime_t m_flDefuseCountDown; // 0x11f0            
            bool m_bBombDefused; // 0x11f4            
            uint8_t _pad11f5[0x3]; // 0x11f5
            // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hBombDefuser;
            char m_hBombDefuser[0x4]; // 0x11f8            
            uint8_t _pad11fc[0x4]; // 0x11fc
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0x1200            
            // m_hDefuserMultimeter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_Multimeter> m_hDefuserMultimeter;
            char m_hDefuserMultimeter[0x4]; // 0x16d0            
            source2sdk::entity2::GameTime_t m_flNextRadarFlashTime; // 0x16d4            
            bool m_bRadarFlash; // 0x16d8            
            uint8_t _pad16d9[0x3]; // 0x16d9
            // m_pBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_pBombDefuser;
            char m_pBombDefuser[0x4]; // 0x16dc            
            source2sdk::entity2::GameTime_t m_fLastDefuseTime; // 0x16e0            
            uint8_t _pad16e4[0x4]; // 0x16e4
            source2sdk::client::CBasePlayerController* m_pPredictionOwner; // 0x16e8            
            VectorWS m_vecC4ExplodeSpectatePos; // 0x16f0            
            QAngle m_vecC4ExplodeSpectateAng; // 0x16fc            
            float m_flC4ExplodeSpectateDuration; // 0x1708            
            uint8_t _pad170c[0x24];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlantedC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlantedC4) == 0x1730);
    };
};
