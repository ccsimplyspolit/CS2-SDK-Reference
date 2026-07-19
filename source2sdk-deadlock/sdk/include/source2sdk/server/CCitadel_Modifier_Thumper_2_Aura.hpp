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
        // Size: 0x230
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Thumper_2_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            Vector m_vecOrigin; // 0x108            
            Vector m_vecWorldSpaceMins; // 0x114            
            Vector m_vecWorldSpaceMaxs; // 0x120            
            float m_flBarbedWireAuraRadius; // 0x12c            
            uint8_t _pad0130[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_2_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Thumper_2_Aura) == 0x230);
    };
};
