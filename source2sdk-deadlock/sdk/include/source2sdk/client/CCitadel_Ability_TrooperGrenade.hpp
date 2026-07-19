#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseAbilityServerOnly.hpp"

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
        // Size: 0x14d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_TrooperGrenade : public source2sdk::client::CCitadelBaseAbilityServerOnly
        {
        public:
            uint8_t _pad11d8[0x300];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_TrooperGrenade has no schema binary (size is a guess)
    };
};
