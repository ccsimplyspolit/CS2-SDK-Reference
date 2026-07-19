#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rubick_FadeBoltBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x18]; // 0x1a58
            float m_flTotalDamage; // 0x1a70            
            float duration; // 0x1a74            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_FadeBoltBuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rubick_FadeBoltBuff) == 0x1a78);
    };
};
