#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAura.hpp"

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
        // Size: 0x120
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Item_AOESilence : public source2sdk::client::CCitadelModifierAura
        {
        public:
            float m_flStartRadius; // 0x110            
            float m_flEndRadius; // 0x114            
            float m_flSpreadDuration; // 0x118            
            uint8_t _pad011c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Item_AOESilence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Item_AOESilence) == 0x120);
    };
};
