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
        class CDOTA_Modifier_Techies_MutuallyAssuredDestruction : public source2sdk::client::CDOTA_Buff
        {
        public:
            float explosion_delay; // 0x1a58            
            float max_mana_pct_as_damage; // 0x1a5c            
            float radius; // 0x1a60            
            float bonus_mana_as_mana_regen; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_MutuallyAssuredDestruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_MutuallyAssuredDestruction) == 0x1a68);
    };
};
