#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"

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
        // Size: 0x1298
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_HealingSlash : public source2sdk::server::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0f78[0x320];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HealingSlash) == 0x1298);
    };
};
