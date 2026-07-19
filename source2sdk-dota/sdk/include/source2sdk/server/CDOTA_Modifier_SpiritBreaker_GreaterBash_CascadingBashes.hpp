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
        // Size: 0x1a70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_GreaterBash_CascadingBashes : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage; // 0x1a58            
            float cascading_bashes_damage_multiplier; // 0x1a5c            
            float cascading_bashes_hero_hitbox; // 0x1a60            
            float cascading_bashes_creep_hitbox; // 0x1a64            
            float cascading_bashes_creep_penalty; // 0x1a68            
            std::int32_t m_nBashIndex; // 0x1a6c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_GreaterBash_CascadingBashes because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SpiritBreaker_GreaterBash_CascadingBashes) == 0x1a70);
    };
};
