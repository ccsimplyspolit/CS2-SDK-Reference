#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EStreetBrawlGameState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EStreetBrawlGameState m_eStreetBrawlState"
        // static metadata: MNetworkVarNames "GameTime_t m_flStreetBrawlStateStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
        // static metadata: MNetworkVarNames "float m_flStreetBrawlTotalNonCombatTime"
        // static metadata: MNetworkVarNames "int m_iRound"
        // static metadata: MNetworkVarNames "int m_iLastBuyCountDown"
        // static metadata: MNetworkVarNames "int m_iTeamSapphireScore"
        // static metadata: MNetworkVarNames "int m_iTeamAmberScore"
        #pragma pack(push, 1)
        class CStreetBrawlController
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "streetBrawlStateChanged"
            source2sdk::client::EStreetBrawlGameState m_eStreetBrawlState; // 0x8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStreetBrawlStateStartTime; // 0xc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextStateTime; // 0x10            
            // metadata: MNetworkEnable
            float m_flStreetBrawlTotalNonCombatTime; // 0x14            
            // metadata: MNetworkEnable
            std::int32_t m_iRound; // 0x18            
            // metadata: MNetworkEnable
            std::int32_t m_iLastBuyCountDown; // 0x1c            
            // metadata: MNetworkEnable
            std::int32_t m_iTeamSapphireScore; // 0x20            
            // metadata: MNetworkEnable
            std::int32_t m_iTeamAmberScore; // 0x24            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_eStreetBrawlState) == 0x8);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_flStreetBrawlStateStartTime) == 0xc);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_flNextStateTime) == 0x10);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_flStreetBrawlTotalNonCombatTime) == 0x14);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_iRound) == 0x18);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_iLastBuyCountDown) == 0x1c);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_iTeamSapphireScore) == 0x20);
        static_assert(offsetof(source2sdk::client::CStreetBrawlController, m_iTeamAmberScore) == 0x24);
        
        static_assert(sizeof(source2sdk::client::CStreetBrawlController) == 0x28);
    };
};
