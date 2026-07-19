#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"

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
        // Size: 0x14b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_PrimaryWeapon : public source2sdk::client::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad1430[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Nano_PrimaryWeapon) == 0x14b0);
    };
};
