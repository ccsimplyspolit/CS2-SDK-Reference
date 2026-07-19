#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"

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
        // Size: 0x18b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_NPC_Observer_Ward : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iDuration; // 0x18a0            
            bool m_bPlacedInSpawnBox; // 0x18a4            
            uint8_t _pad18a5[0x3]; // 0x18a5
            source2sdk::entity2::GameTime_t m_flSpawnTime; // 0x18a8            
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPC_Observer_Ward) == 0x18b0);
    };
};
