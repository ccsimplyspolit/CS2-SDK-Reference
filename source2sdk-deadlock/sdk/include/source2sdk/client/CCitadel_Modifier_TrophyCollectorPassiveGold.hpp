#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"

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
        // Size: 0x1c8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TrophyCollectorPassiveGold : public source2sdk::client::CCitadel_Modifier_Intrinsic_Base
        {
        public:
            uint8_t _pad00c0[0x100]; // 0xc0
            float m_flCurrentThinkRate; // 0x1c0            
            uint8_t _pad01c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TrophyCollectorPassiveGold because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_TrophyCollectorPassiveGold) == 0x1c8);
    };
};
