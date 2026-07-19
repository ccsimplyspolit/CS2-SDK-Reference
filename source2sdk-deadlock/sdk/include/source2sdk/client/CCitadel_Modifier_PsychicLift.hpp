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
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PsychicLift : public source2sdk::client::CCitadel_Modifier_Stunned
        {
        public:
            Vector m_vDropStartLocation; // 0xc8            
            float m_flLiftDuration; // 0xd4            
            uint8_t _pad00d8[0x180]; // 0xd8
            Vector m_vecSlamDest; // 0x258            
            bool m_bImpacted; // 0x264            
            uint8_t _pad0265[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PsychicLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PsychicLift) == 0x268);
    };
};
