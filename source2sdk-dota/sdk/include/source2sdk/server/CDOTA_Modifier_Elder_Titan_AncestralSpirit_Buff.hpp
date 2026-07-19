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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float move_pct_creeps; // 0x1a58            
            float move_pct_heroes; // 0x1a5c            
            std::int32_t damage_creeps; // 0x1a60            
            std::int32_t damage_heroes; // 0x1a64            
            float armor_creeps; // 0x1a68            
            float armor_heroes; // 0x1a6c            
            float move_pct_cap; // 0x1a70            
            std::int32_t m_nCreepsHit; // 0x1a74            
            std::int32_t m_nHeroesHit; // 0x1a78            
            float m_fSpeedPercentage; // 0x1a7c            
            std::int32_t m_nDamage; // 0x1a80            
            std::int32_t m_nArmor; // 0x1a84            
            bool m_bSpellImmunity; // 0x1a88            
            uint8_t _pad1a89[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff) == 0x1a90);
    };
};
