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
        // Size: 0xfa0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelPregameHeroDraftButton : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0ef0[0xb0];
            // No schema binary for binding
        };
        #pragma pack(pop)


        // size assertion omitted: CCitadelPregameHeroDraftButton has no schema binary (size is a guess)
    };
};
