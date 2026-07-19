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
        // Size: 0x358
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Bull_Heal_Target : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x280]; // 0xd0
            float m_flTetherRangeSquared; // 0x350            
            uint8_t _pad0354[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Heal_Target because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Bull_Heal_Target) == 0x358);
    };
};
