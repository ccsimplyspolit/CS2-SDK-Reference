#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0xd80
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CPlantedC4 : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0960[0x58]; // 0x960
            bool m_bBombTicking; // 0x9b8            
            uint8_t _pad09b9[0x3]; // 0x9b9
            source2sdk::entity2::GameTime_t m_flC4Blow; // 0x9bc            
            std::int32_t m_nBombSite; // 0x9c0            
            std::int32_t m_nSourceSoundscapeHash; // 0x9c4            
            bool m_bAbortDetonationBecauseWorldIsFrozen; // 0x9c8            
            uint8_t _pad09c9[0x7]; // 0x9c9
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0x9d0            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefused; // 0xcc8            
            source2sdk::entity2::CEntityIOOutput m_OnBombBeginDefuse; // 0xce0            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefuseAborted; // 0xcf8            
            bool m_bCannotBeDefused; // 0xd10            
            uint8_t _pad0d11[0x7]; // 0xd11
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0xd18            
            std::int32_t m_nSpotRules; // 0xd30            
            bool m_bHasExploded; // 0xd34            
            bool m_bBombDefused; // 0xd35            
            bool m_bTrainingPlacedByPlayer; // 0xd36            
            uint8_t _pad0d37[0x1]; // 0xd37
            float m_flTimerLength; // 0xd38            
            bool m_bBeingDefused; // 0xd3c            
            uint8_t _pad0d3d[0x7]; // 0xd3d
            source2sdk::entity2::GameTime_t m_fLastDefuseTime; // 0xd44            
            uint8_t _pad0d48[0x4]; // 0xd48
            float m_flDefuseLength; // 0xd4c            
            source2sdk::entity2::GameTime_t m_flDefuseCountDown; // 0xd50            
            // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hBombDefuser;
            char m_hBombDefuser[0x4]; // 0xd54            
            std::int32_t m_iProgressBarTime; // 0xd58            
            bool m_bVoiceAlertFired; // 0xd5c            
            bool m_bVoiceAlertPlayed[4]; // 0xd5d            
            uint8_t _pad0d61[0x3]; // 0xd61
            source2sdk::entity2::GameTime_t m_flNextBotBeepTime; // 0xd64            
            uint8_t _pad0d68[0x4]; // 0xd68
            QAngle m_angCatchUpToPlayerEye; // 0xd6c            
            source2sdk::entity2::GameTime_t m_flLastSpinDetectionTime; // 0xd78            
            uint8_t _pad0d7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlantedC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlantedC4) == 0xd80);
    };
};
