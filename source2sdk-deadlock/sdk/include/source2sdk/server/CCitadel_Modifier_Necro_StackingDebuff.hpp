#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x458
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Necro_StackingDebuff : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x388];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CCitadel_Modifier_Necro_StackingDebuff has no schema binary (size is a guess)
    };
};
