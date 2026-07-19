#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_EbbAndFlow : public source2sdk::client::CDOTA_Buff
        {
        public:
            float flStrengthBonus; // 0x1a58            
            float flAgilityBonus; // 0x1a5c            
            float stats_pct; // 0x1a60            
            float model_scale; // 0x1a64            
            float swell_up_duration; // 0x1a68            
            float swell_down_duration; // 0x1a6c            
            float max_swell_duration; // 0x1a70            
            uint8_t _pad1a74[0x4]; // 0x1a74
            source2sdk::client::CountdownTimer m_SwellUpTimer; // 0x1a78            
            source2sdk::client::CountdownTimer m_SwellDownTimer; // 0x1a90            
            source2sdk::client::CountdownTimer m_MaxSwellTimer; // 0x1aa8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_EbbAndFlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_EbbAndFlow) == 0x1ac0);
    };
};
