#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1aa8
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
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a98            
            source2sdk::entity2::GameTime_t m_flLastMissileFiredTime; // 0x1a9c            
            bool m_bFixedDirection; // 0x1aa0            
            uint8_t _pad1aa1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_Turret because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tinker_Turret) == 0x1aa8);
    };
};
