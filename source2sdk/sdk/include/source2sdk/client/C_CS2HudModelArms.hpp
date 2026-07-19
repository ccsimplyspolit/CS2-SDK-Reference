#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CS2HudModelBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1380
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_CS2HudModelArms : public source2sdk::client::C_CS2HudModelBase
        {
        public:
            uint8_t _pad1270[0x110];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: C_CS2HudModelArms has no schema binary (size is a guess)
    };
};
