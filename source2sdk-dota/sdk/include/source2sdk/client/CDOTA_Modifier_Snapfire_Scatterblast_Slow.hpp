#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a68
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_Scatterblast_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsPointBlank; // 0x1a58            
            uint8_t _pad1a59[0x3]; // 0x1a59
            std::int32_t movement_slow_pct; // 0x1a5c            
            std::int32_t attack_slow_pct; // 0x1a60            
            std::int32_t point_blank_debuff_duration_pct; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_Scatterblast_Slow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Snapfire_Scatterblast_Slow) == 0x1a68);
    };
};
