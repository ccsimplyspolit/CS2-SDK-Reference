#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_ChainLightningEffect.hpp"

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
        // Size: 0x430
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Galvanic_Storm_Effect : public source2sdk::server::CCitadel_Modifier_ChainLightningEffect
        {
        public:
            uint8_t _pad03b0[0x80];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Galvanic_Storm_Effect) == 0x430);
    };
};
