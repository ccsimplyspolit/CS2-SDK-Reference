#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ShadowShaman_Shackles : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t nShackleFXIndex; // 0x1a58            
            float tick_interval; // 0x1a5c            
            float total_damage; // 0x1a60            
            float channel_time; // 0x1a64            
            float heal_percentage; // 0x1a68            
            bool bApplyHeal; // 0x1a6c            
            uint8_t _pad1a6d[0x3]; // 0x1a6d
            float scepter_shock_pct; // 0x1a70            
            float scepter_shock_radius; // 0x1a74            
            float scepter_shock_interval; // 0x1a78            
            float ally_break_range; // 0x1a7c            
            source2sdk::entity2::GameTime_t m_flNextShockTime; // 0x1a80            
            uint8_t _pad1a84[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ShadowShaman_Shackles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ShadowShaman_Shackles) == 0x1a98);
    };
};
