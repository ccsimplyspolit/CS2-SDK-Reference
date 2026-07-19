#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_Team.hpp"

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
        // Size: 0x700
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTATeam : public source2sdk::client::C_Team
        {
        public:
            std::int32_t m_iHeroKills; // 0x6a8            
            std::int32_t m_iTowerKills; // 0x6ac            
            std::int32_t m_iBarracksKills; // 0x6b0            
            std::uint32_t m_unTournamentTeamID; // 0x6b4            
            std::uint64_t m_ulTeamLogo; // 0x6b8            
            std::uint64_t m_ulTeamBaseLogo; // 0x6c0            
            std::uint64_t m_ulTeamBannerLogo; // 0x6c8            
            bool m_bTeamComplete; // 0x6d0            
            bool m_bTeamIsHomeTeam; // 0x6d1            
            bool m_bTeamCanSeeExactRoshanTimer; // 0x6d2            
            bool m_bTeamCanSeeNextPowerRune; // 0x6d3            
            Color m_CustomHealthbarColor; // 0x6d4            
            char m_szTag[33]; // 0x6d8            
            uint8_t _pad06f9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTATeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTATeam) == 0x700);
    };
};
