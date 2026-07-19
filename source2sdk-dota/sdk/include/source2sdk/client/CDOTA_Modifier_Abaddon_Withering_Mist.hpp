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
        class CDOTA_Modifier_Abaddon_Withering_Mist : public source2sdk::client::CDOTA_Buff
        {
        public:
            float hp_threshold_pct; // 0x1a58            
            float duration; // 0x1a5c            
            float cooldown_reduction_creeps; // 0x1a60            
            float cooldown_reduction_heroes; // 0x1a64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Abaddon_Withering_Mist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Abaddon_Withering_Mist) == 0x1a68);
    };
};
