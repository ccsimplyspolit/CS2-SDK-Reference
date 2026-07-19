#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x10f0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Disruptive_Charge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x180];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Disruptive_Charge has no schema binary (size is a guess)
    };
};
