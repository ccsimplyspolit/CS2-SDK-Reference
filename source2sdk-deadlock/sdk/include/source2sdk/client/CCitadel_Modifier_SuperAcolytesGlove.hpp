#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x280
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SuperAcolytesGlove : public source2sdk::client::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad01f8[0x88];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_SuperAcolytesGlove has no schema binary (size is a guess)
    };
};
