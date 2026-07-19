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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            float wraith_vision_radius; // 0x1a5c            
            std::int32_t wraith_speed; // 0x1a60            
            uint8_t _pad1a64[0x14]; // 0x1a64
            float activation_delay; // 0x1a78            
            float think_interval; // 0x1a7c            
            float m_flSparkDamage; // 0x1a80            
            std::int32_t m_nViewerID; // 0x1a84            
            std::int32_t m_nViewerTeam; // 0x1a88            
            bool m_bActive; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            std::int32_t maximum_targets; // 0x1a90            
            float second_wraith_damage_pct; // 0x1a94            
            float second_wraith_speed_pct; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ArcWarden_SparkWraith_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ArcWarden_SparkWraith_Thinker) == 0x1aa0);
    };
};
