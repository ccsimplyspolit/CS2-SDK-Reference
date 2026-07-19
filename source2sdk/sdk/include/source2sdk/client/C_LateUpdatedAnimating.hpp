#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1240
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class C_LateUpdatedAnimating : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad1180[0xc0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_LateUpdatedAnimating has no schema binary (size is a guess)
    };
};
