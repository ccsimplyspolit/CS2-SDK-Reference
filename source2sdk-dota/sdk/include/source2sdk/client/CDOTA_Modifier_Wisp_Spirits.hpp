#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1b30
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Spirits : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_damage; // 0x1a58            
            float hero_damage; // 0x1a5c            
            float hit_radius; // 0x1a60            
            float hero_hit_radius; // 0x1a64            
            float explode_radius; // 0x1a68            
            float min_range; // 0x1a6c            
            float max_range; // 0x1a70            
            float default_radius; // 0x1a74            
            std::int32_t spirit_amount; // 0x1a78            
            float m_flRotation; // 0x1a7c            
            float m_flSpiritRadius; // 0x1a80            
            float spirit_movement_rate; // 0x1a84            
            float spirit_spawn_time; // 0x1a88            
            float scepter_slow_duration; // 0x1a8c            
            source2sdk::entity2::GameTime_t m_flNextSpawn; // 0x1a90            
            uint8_t _pad1a94[0x4]; // 0x1a94
            CUtlString m_strSpiritsOutSwapAbility; // 0x1a98            
            uint8_t _pad1aa0[0x90];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Spirits because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Wisp_Spirits) == 0x1b30);
    };
};
