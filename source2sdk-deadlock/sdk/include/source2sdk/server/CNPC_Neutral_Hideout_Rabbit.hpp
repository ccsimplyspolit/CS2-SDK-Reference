#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_Neutral_Hideout_Cat.hpp"

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
        // Size: 0xca0
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_Neutral_Hideout_Rabbit : public source2sdk::server::CNPC_Neutral_Hideout_Cat
        {
        public:
            uint8_t _pad0c90[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNPC_Neutral_Hideout_Rabbit has no schema binary (size is a guess)
    };
};
