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
        // Size: 0x420
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Familiar_SpotlightAura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad0108[0x8]; // 0x108
            VectorWS m_vRightVectorWS; // 0x110            
            uint8_t _pad011c[0x304];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Familiar_SpotlightAura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Familiar_SpotlightAura) == 0x420);
    };
};
