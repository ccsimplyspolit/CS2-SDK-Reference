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
        class CDOTA_Modifier_WitchDoctor_DeathWard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_damage; // 0x1a58            
            std::int32_t bonus_accuracy; // 0x1a5c            
            std::int32_t bonus_attack_range; // 0x1a60            
            bool m_bFirstAttack; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            std::int32_t initial_target_count; // 0x1a68            
            std::int32_t secondary_attack_damage_pct; // 0x1a6c            
            uint8_t _pad1a70[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_DeathWard because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_WitchDoctor_DeathWard) == 0x1aa8);
    };
};
