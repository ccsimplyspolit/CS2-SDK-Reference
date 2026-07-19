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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tinker_Turret : public source2sdk::client::CDOTA_Buff
        {
        public:
            float missile_range; // 0x1a58            
            float missile_target_range; // 0x1a5c            
            float missile_width; // 0x1a60            
            float missile_speed; // 0x1a64            
            float activation_time; // 0x1a68            
            float turret_duration; // 0x1a6c            
            float turret_placement_radius; // 0x1a70            
            float knockback_distance; // 0x1a74            
            float initial_slow; // 0x1a78            
            float slow_duration; // 0x1a7c            
            float additional_attack_speed; // 0x1a80            
            float duration_reduction_per_attack; // 0x1a84            
            float missile_spawn_interval; // 0x1a88            
            std::int32_t targets_creeps; // 0x1a8c            
            std::int32_t turret_hp; // 0x1a90            
            std::int32_t turret_ammo; // 0x1a94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Turret because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tinker_Turret) == 0x1a98);
    };
};
