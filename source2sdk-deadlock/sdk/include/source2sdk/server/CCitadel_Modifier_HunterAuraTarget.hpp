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
        // Size: 0x270
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HunterAuraTarget : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x180]; // 0xd0
            float m_flDebuffScale; // 0x250            
            uint8_t _pad0254[0x4]; // 0x254
            // m_AuraModifierHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_AuraModifierHandle;
            char m_AuraModifierHandle[0x18]; // 0x258            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HunterAuraTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HunterAuraTarget) == 0x270);
    };
};
