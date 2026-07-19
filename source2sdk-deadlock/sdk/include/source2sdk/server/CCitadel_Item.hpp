#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xf78
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bEquipped; // 0xf70            
            uint8_t _pad0f71[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item) == 0xf78);
    };
};
