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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_Fundamental_Fury : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x1a58            
            float move_pct_heroes; // 0x1a5c            
            float armor_creeps; // 0x1a60            
            float armor_heroes; // 0x1a64            
            float move_pct_cap; // 0x1a68            
            std::int32_t m_nCreepsHit; // 0x1a6c            
            std::int32_t m_nHeroesHit; // 0x1a70            
            float m_fSpeedPercentage; // 0x1a74            
            std::int32_t m_nDamage; // 0x1a78            
            std::int32_t m_nArmor; // 0x1a7c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_Fundamental_Fury because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Elder_Titan_Fundamental_Fury) == 0x1a80);
    };
};
