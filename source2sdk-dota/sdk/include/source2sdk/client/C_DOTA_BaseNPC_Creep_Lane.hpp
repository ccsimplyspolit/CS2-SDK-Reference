#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Creep.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"

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
        // Size: 0x19c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_Creep_Lane : public source2sdk::client::C_DOTA_BaseNPC_Creep
        {
        public:
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x19b8            
            uint8_t _pad19bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creep_Lane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_Creep_Lane) == 0x19c0);
    };
};
