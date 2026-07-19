#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

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
        // Size: 0xd80
        // Has VTable
        #pragma pack(push, 1)
        class CInfoTutorialController : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0cd0[0xb0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CInfoTutorialController has no schema binary (size is a guess)
    };
};
