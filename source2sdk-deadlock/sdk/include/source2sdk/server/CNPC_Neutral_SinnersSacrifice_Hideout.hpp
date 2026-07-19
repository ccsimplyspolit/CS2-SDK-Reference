#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_Neutral_SinnersSacrifice.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1b60
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_Neutral_SinnersSacrifice_Hideout : public source2sdk::server::CNPC_Neutral_SinnersSacrifice
        {
        public:
            uint8_t _pad1b50[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_SinnersSacrifice_Hideout) == 0x1b60);
    };
};
