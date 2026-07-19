#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"

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
        // Size: 0x1e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_VacuumAuraTarget : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            uint8_t _pad00c8[0x100]; // 0xc8
            float m_flMaxDist; // 0x1c8            
            Vector m_vecOffsetDir; // 0x1cc            
            Vector m_vecStartPosition; // 0x1d8            
            float m_flAOERadius; // 0x1e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAuraTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_VacuumAuraTarget) == 0x1e8);
    };
};
