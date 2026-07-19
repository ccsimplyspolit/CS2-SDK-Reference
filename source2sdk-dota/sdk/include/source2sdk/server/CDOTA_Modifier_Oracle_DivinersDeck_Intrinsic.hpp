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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x38]; // 0x1a58
            bool enabled; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            float duration; // 0x1a94            
            float spell_amplification; // 0x1a98            
            float gold_bonus_pct; // 0x1a9c            
            float int_bonus_pct; // 0x1aa0            
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Oracle_DivinersDeck_Intrinsic) == 0x1aa8);
    };
};
