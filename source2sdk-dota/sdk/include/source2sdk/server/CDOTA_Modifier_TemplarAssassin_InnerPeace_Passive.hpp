#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fElapsedTime; // 0x1a58            
            float max_attack_range; // 0x1a5c            
            float max_hp_regen; // 0x1a60            
            float max_mana_regen; // 0x1a64            
            float time_until_meditation; // 0x1a68            
            uint8_t _pad1a6c[0x4]; // 0x1a6c
            source2sdk::server::CountdownTimer m_StartMeditationTimer; // 0x1a70            
            float m_fElapsedMeditationTime; // 0x1a88            
            float m_fElapsedLingerTime; // 0x1a8c            
            float time_until_max_bonus; // 0x1a90            
            float bonus_linger_time; // 0x1a94            
            std::int32_t m_nCurrentMaxStackCount; // 0x1a98            
            bool m_bHasBonusRange; // 0x1a9c            
            uint8_t _pad1a9d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_TemplarAssassin_InnerPeace_Passive) == 0x1aa0);
    };
};
