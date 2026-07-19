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
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Rutger_ForceField_PushOut : public source2sdk::client::CCitadelModifier
        {
        public:
            Vector m_vStart; // 0xc0            
            Vector m_vDest; // 0xcc            
            Vector m_vCenter; // 0xd8            
            uint8_t _pad00e4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Rutger_ForceField_PushOut because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Rutger_ForceField_PushOut) == 0x268);
    };
};
