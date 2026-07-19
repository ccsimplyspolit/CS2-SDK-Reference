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
        // Size: 0x968
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSTeam : public source2sdk::client::C_Team
        {
        public:
            char m_szTeamMatchStat[512]; // 0x6b8            
            std::int32_t m_numMapVictories; // 0x8b8            
            bool m_bSurrendered; // 0x8bc            
            uint8_t _pad08bd[0x3]; // 0x8bd
            std::int32_t m_scoreFirstHalf; // 0x8c0            
            std::int32_t m_scoreSecondHalf; // 0x8c4            
            std::int32_t m_scoreOvertime; // 0x8c8            
            char m_szClanTeamname[129]; // 0x8cc            
            uint8_t _pad094d[0x3]; // 0x94d
            std::uint32_t m_iClanID; // 0x950            
            char m_szTeamFlagImage[8]; // 0x954            
            char m_szTeamLogoImage[8]; // 0x95c            
            uint8_t _pad0964[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSTeam) == 0x968);
    };
};
