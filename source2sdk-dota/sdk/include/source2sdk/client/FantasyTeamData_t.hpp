#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELeagueRegion.hpp"

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
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyTeamData_t
        {
        public:
            // metadata: MPropertyDescription "Team ID of the Team"
            std::uint32_t m_unTeamID; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyDescription "Name of the Team"
            CUtlString m_strTeamName; // 0x8            
            // metadata: MPropertyDescription "What region is this team from"
            source2sdk::client::ELeagueRegion m_eRegion; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyTeamData_t, m_unTeamID) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyTeamData_t, m_strTeamName) == 0x8);
        static_assert(offsetof(source2sdk::client::FantasyTeamData_t, m_eRegion) == 0x10);
        
        static_assert(sizeof(source2sdk::client::FantasyTeamData_t) == 0x18);
    };
};
