#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

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
        // Size: 0xd20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CAdditionalWearable : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0d10[0x10];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CAdditionalWearable has no schema binary (size is a guess)
    };
};
