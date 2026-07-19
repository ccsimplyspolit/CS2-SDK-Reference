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
        class CDOTA_Modifier_Rubick_Might_And_Magus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t magic_resist_bonus; // 0x1a58            
            float aoe_bonus; // 0x1a5c            
            float aoe_bonus_duration; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_Might_And_Magus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rubick_Might_And_Magus) == 0x1a68);
    };
};
