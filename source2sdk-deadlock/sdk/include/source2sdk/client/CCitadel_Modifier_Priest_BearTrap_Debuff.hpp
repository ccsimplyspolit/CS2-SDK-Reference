#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x140
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Priest_BearTrap_Debuff : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_Priest_BearTrap_Debuff has no schema binary (size is a guess)
    };
};
