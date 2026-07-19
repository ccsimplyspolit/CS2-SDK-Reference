#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x308
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SlowingBullets_Proc : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad0208[0x100];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_SlowingBullets_Proc) == 0x308);
    };
};
