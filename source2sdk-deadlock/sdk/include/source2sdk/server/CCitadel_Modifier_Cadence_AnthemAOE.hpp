#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x220
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Cadence_AnthemAOE : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x118];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_Cadence_AnthemAOE has no schema binary (size is a guess)
    };
};
