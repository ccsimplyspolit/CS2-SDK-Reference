#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sven_GreatCleave : public source2sdk::client::CDOTA_Buff
        {
        public:
            float cleave_starting_width; // 0x1a58            
            float cleave_ending_width; // 0x1a5c            
            float cleave_distance; // 0x1a60            
            float great_cleave_damage; // 0x1a64            
            std::int32_t strength_bonus; // 0x1a68            
            source2sdk::client::AttackRecord_t m_nLastCleaveRecord; // 0x1a6c            
            uint8_t _pad1a6e[0x2]; // 0x1a6e
            std::int32_t m_nLastCleaveKills; // 0x1a70            
            uint8_t _pad1a74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sven_GreatCleave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sven_GreatCleave) == 0x1a78);
    };
};
