#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x8f8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerCallback : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08f0[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CTriggerCallback has no schema binary (size is a guess)
    };
};
