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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DoomBringer_Lvl_Pain_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_damage; // 0x1a58            
            float spread_radius; // 0x1a5c            
            float bonus_damage_pct_base; // 0x1a60            
            float bonus_at_level_pct; // 0x1a64            
            std::int32_t level_multiplier; // 0x1a68            
            uint8_t _pad1a6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DoomBringer_Lvl_Pain_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DoomBringer_Lvl_Pain_Debuff) == 0x1a70);
    };
};
