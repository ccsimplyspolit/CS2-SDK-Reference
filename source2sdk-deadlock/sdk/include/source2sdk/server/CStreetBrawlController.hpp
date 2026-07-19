#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EStreetBrawlGameState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x130
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
            float m_tNoTrooperTime; // 0x28            
            bool m_bOvertime; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            std::int32_t m_nScoringTeam; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // m_vTeamSapphireBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vTeamSapphireBoss;
            char m_vTeamSapphireBoss[0x18]; // 0x38            
            // m_vTeamAmberBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vTeamAmberBoss;
            char m_vTeamAmberBoss[0x18]; // 0x50            
            uint8_t _pad0068[0x28]; // 0x68
            // m_mapOriginalConVarVals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,CUtlString> m_mapOriginalConVarVals;
            char m_mapOriginalConVarVals[0x28]; // 0x90            
            // m_vecOfferedLegendaries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOfferedLegendaries;
            char m_vecOfferedLegendaries[0x18]; // 0xb8            
            // m_vecOfferedRares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOfferedRares;
            char m_vecOfferedRares[0x18]; // 0xd0            
            // m_vecOfferedEnhanced has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecOfferedEnhanced;
            char m_vecOfferedEnhanced[0x18]; // 0xe8            
            std::int32_t m_nShuffleSeed; // 0x100            
            uint8_t _pad0104[0x2c];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_eStreetBrawlState) == 0x8);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_flStreetBrawlStateStartTime) == 0xc);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_flNextStateTime) == 0x10);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_flStreetBrawlTotalNonCombatTime) == 0x14);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_iRound) == 0x18);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_iLastBuyCountDown) == 0x1c);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_iTeamSapphireScore) == 0x20);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_iTeamAmberScore) == 0x24);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_tNoTrooperTime) == 0x28);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_bOvertime) == 0x2c);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_nScoringTeam) == 0x30);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_vTeamSapphireBoss) == 0x38);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_vTeamAmberBoss) == 0x50);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_mapOriginalConVarVals) == 0x90);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_vecOfferedLegendaries) == 0xb8);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_vecOfferedRares) == 0xd0);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_vecOfferedEnhanced) == 0xe8);
        static_assert(offsetof(source2sdk::server::CStreetBrawlController, m_nShuffleSeed) == 0x100);
        
        static_assert(sizeof(source2sdk::server::CStreetBrawlController) == 0x130);
    };
};
