#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_Geomancy : public source2sdk::client::CDOTA_Buff
        {
        public:
            float tree_regen; // 0x1a58            
            float tree_radius; // 0x1a5c            
            float dirt_move_speed; // 0x1a60            
            float water_move_slow; // 0x1a64            
            float water_slow_duration; // 0x1a68            
            float m_flTreeRegen; // 0x1a6c            
            float m_flDirtMoveSpeed; // 0x1a70            
            float m_flWaterMoveSlow; // 0x1a74            
            // m_hPrimeDivided has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimeDivided;
            char m_hPrimeDivided[0x4]; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_Geomancy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Meepo_Geomancy) == 0x1a80);
    };
};
