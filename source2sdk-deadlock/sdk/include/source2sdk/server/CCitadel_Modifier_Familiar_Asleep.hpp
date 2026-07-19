#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Sleep.hpp"

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
        // Size: 0x300
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Familiar_Asleep : public source2sdk::server::CCitadel_Modifier_Sleep
        {
        public:
            uint8_t _pad0100[0x200];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Familiar_Asleep) == 0x300);
    };
};
