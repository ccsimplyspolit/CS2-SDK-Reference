#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x360
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Trapper_SpiderShield : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x8]; // 0xd0
            source2sdk::entity2::GameTime_t m_flNextPulseTime; // 0xd8            
            uint8_t _pad00dc[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Trapper_SpiderShield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Trapper_SpiderShield) == 0x360);
    };
};
