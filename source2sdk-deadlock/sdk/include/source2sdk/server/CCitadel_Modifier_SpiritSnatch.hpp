#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x390
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_SpiritSnatch : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            float m_flCooldownDuration; // 0x208            
            uint8_t _pad020c[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SpiritSnatch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_SpiritSnatch) == 0x390);
    };
};
