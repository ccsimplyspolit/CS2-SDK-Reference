#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNPC_Neutral_Weakpoint.hpp"

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
        // Size: 0x7c0
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_Neutral_Flying_Weakpoint : public source2sdk::server::CNPC_Neutral_Weakpoint
        {
        public:
            uint8_t _pad07a0[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNPC_Neutral_Flying_Weakpoint has no schema binary (size is a guess)
    };
};
