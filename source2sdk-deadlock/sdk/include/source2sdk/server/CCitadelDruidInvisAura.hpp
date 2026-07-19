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
        // Size: 0x110
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDruidInvisAura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            std::int32_t nInvisID; // 0x108            
            uint8_t _pad010c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelDruidInvisAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelDruidInvisAura) == 0x110);
    };
};
