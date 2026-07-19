#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_LateUpdatedAnimating.hpp"

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
        // Size: 0x1270
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class C_CS2HudModelBase : public source2sdk::client::C_LateUpdatedAnimating
        {
        public:
            uint8_t _pad1240[0x30];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_CS2HudModelBase) == 0x1270);
    };
};
