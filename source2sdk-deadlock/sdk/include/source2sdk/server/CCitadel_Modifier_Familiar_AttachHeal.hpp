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
        class CCitadel_Modifier_Familiar_AttachHeal : public source2sdk::server::CCitadelModifier
        {
        public:
            float m_flTotalPendingHeal; // 0xd0            
            float m_flTotalHeal; // 0xd4            
            uint8_t _pad00d8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Familiar_AttachHeal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Familiar_AttachHeal) == 0x1d8);
    };
};
