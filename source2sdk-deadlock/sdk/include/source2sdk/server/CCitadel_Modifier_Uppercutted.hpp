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
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Uppercutted : public source2sdk::server::CCitadelModifier
        {
        public:
            Vector m_vecFromBebop; // 0xd0            
            float m_flDamage; // 0xdc            
            bool m_bExplodeOnLand; // 0xe0            
            uint8_t _pad00e1[0x187];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Uppercutted because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Uppercutted) == 0x268);
    };
};
