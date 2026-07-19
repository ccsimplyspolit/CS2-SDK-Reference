#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"

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
        // Size: 0x11a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Boho_PrimaryWeapon : public source2sdk::server::CCitadel_Ability_PrimaryWeapon
        {
        public:
            uint8_t _pad1198[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Boho_PrimaryWeapon has no schema binary (size is a guess)
    };
};
