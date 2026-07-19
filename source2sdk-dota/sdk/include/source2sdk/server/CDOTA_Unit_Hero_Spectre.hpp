#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1f10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_Spectre : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            bool m_bArcanaKillstreakCompleted; // 0x1f00            
            std::uint8_t m_unCurrentArcanaKillStreak; // 0x1f01            
            std::uint8_t m_unBestArcanaKillStreak; // 0x1f02            
            uint8_t _pad1f03[0x1]; // 0x1f03
            source2sdk::client::PlayerID_t m_nVictimPlayerID; // 0x1f04            
            bool m_bArcanaKillstreakRecordBroken; // 0x1f08            
            uint8_t _pad1f09[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_Spectre because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_Spectre) == 0x1f10);
    };
};
