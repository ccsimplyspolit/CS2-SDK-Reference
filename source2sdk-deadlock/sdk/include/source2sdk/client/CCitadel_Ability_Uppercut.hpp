#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"

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
        // Size: 0x1968
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Uppercut : public source2sdk::client::CCitadel_Ability_Melee_Base
        {
        public:
            uint8_t _pad12e8[0x680];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Uppercut has no schema binary (size is a guess)
    };
};
