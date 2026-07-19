#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon_ScalingAltFire.hpp"

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
        // Size: 0x1218
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_ClawWeapon : public source2sdk::server::CCitadel_Ability_PrimaryWeapon_ScalingAltFire
        {
        public:
            uint8_t _pad1198[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Ability_Werewolf_ClawWeapon has no schema binary (size is a guess)
    };
};
