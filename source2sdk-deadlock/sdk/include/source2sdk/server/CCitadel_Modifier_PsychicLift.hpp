#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"

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
        // Size: 0x278
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PsychicLift : public source2sdk::server::CCitadel_Modifier_Stunned
        {
        public:
            Vector m_vDropStartLocation; // 0xd8            
            float m_flLiftDuration; // 0xe4            
            uint8_t _pad00e8[0x180]; // 0xe8
            Vector m_vecSlamDest; // 0x268            
            bool m_bImpacted; // 0x274            
            uint8_t _pad0275[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PsychicLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PsychicLift) == 0x278);
    };
};
