#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xab0
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_Neutral_Bug : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a90[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CNPC_Neutral_Bug has no schema binary (size is a guess)
    };
};
