#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTeam.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTATeam : public source2sdk::server::CTeam
        {
        public:
            uint8_t _pad0550[0x10]; // 0x550
            std::int32_t m_iHeroKills; // 0x560            
            std::int32_t m_iTowerKills; // 0x564            
            std::int32_t m_iBarracksKills; // 0x568            
            std::uint32_t m_unTournamentTeamID; // 0x56c            
            std::uint64_t m_ulTeamLogo; // 0x570            
            std::uint64_t m_ulTeamBaseLogo; // 0x578            
            std::uint64_t m_ulTeamBannerLogo; // 0x580            
            bool m_bTeamComplete; // 0x588            
            bool m_bTeamIsHomeTeam; // 0x589            
            bool m_bTeamCanSeeExactRoshanTimer; // 0x58a            
            bool m_bTeamCanSeeNextPowerRune; // 0x58b            
            std::int32_t m_nTeamCanSeeNextPowerRuneRefs; // 0x58c            
            Color m_CustomHealthbarColor; // 0x590            
            char m_szTag[33]; // 0x594            
            uint8_t _pad05b5[0x3]; // 0x5b5
            std::int32_t m_event_lobby_updated; // 0x5b8            
            std::int32_t m_nKillStreak; // 0x5bc            
            std::int32_t m_iRecentKillCount; // 0x5c0            
            uint8_t _pad05c4[0x4]; // 0x5c4
            source2sdk::server::CountdownTimer m_RecentHeroKillTimer; // 0x5c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTATeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTATeam) == 0x5e0);
    };
};
