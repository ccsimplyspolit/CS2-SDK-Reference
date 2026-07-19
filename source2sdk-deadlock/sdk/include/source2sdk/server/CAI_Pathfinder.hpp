#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4930
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Pathfinder
        {
        public:
            uint8_t _pad0000[0x4918]; // 0x0
            float m_flPathMaxDetour; // 0x4918            
            uint8_t _pad491c[0x14];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAI_Pathfinder, m_flPathMaxDetour) == 0x4918);
        
        static_assert(sizeof(source2sdk::server::CAI_Pathfinder) == 0x4930);
    };
};
