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
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Dust_Storm_Aura_Apply : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flDamagePerTick; // 0xd0            
            bool m_bFirstTick; // 0xd4            
            uint8_t _pad00d5[0x183];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Dust_Storm_Aura_Apply because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Dust_Storm_Aura_Apply) == 0x258);
    };
};
