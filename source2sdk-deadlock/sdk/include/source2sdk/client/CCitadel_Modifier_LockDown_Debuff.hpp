#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x3d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_LockDown_Debuff : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x300]; // 0xc0
            Vector m_vEscapeTarget; // 0x3c0            
            uint8_t _pad03cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LockDown_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_LockDown_Debuff) == 0x3d0);
    };
};
