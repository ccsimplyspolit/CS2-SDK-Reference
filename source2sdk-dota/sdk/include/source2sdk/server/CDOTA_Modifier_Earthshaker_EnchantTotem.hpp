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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_EnchantTotem : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_range; // 0x1a58            
            std::int32_t totem_damage_percentage; // 0x1a5c            
            std::int32_t scepter_cleave_pct; // 0x1a60            
            float scepter_cleave_starting_width; // 0x1a64            
            float scepter_cleave_ending_width; // 0x1a68            
            float scepter_cleave_distance; // 0x1a6c            
            uint8_t _pad1a70[0x14]; // 0x1a70
            bool bActive; // 0x1a84            
            uint8_t _pad1a85[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_EnchantTotem) == 0x1a88);
    };
};
