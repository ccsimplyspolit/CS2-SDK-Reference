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
        // Size: 0x1d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_MysticReverbExplosion : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bNoDeath; // 0xd0            
            bool m_bDamageInProgress; // 0xd1            
            uint8_t _pad00d2[0x2]; // 0xd2
            float m_flDamage; // 0xd4            
            uint8_t _pad00d8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_MysticReverbExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_MysticReverbExplosion) == 0x1d8);
    };
};
