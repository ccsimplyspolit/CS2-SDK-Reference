#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xa90
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerPassthroughFakeWall : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0a78[0x18];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CTriggerPassthroughFakeWall has no schema binary (size is a guess)
    };
};
