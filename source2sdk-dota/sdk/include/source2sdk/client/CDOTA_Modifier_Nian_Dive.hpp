#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pounce_distance; // 0x1a58            
            float pounce_speed; // 0x1a5c            
            float pounce_acceleration; // 0x1a60            
            std::int32_t pounce_radius; // 0x1a64            
            std::int32_t pounce_damage; // 0x1a68            
            std::int32_t stun_radius; // 0x1a6c            
            float stun_duration; // 0x1a70            
            float leash_duration; // 0x1a74            
            float initial_delay; // 0x1a78            
            float landing_delay; // 0x1a7c            
            float vertical_adjust; // 0x1a80            
            float vertical_adjust_max_distance; // 0x1a84            
            float vertical_adjust_min_distance; // 0x1a88            
            std::int32_t claw_damage; // 0x1a8c            
            std::int32_t claw_damage_radius; // 0x1a90            
            float claw_damage_delay; // 0x1a94            
            float claw_damage_duration; // 0x1a98            
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x1aa0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Nian_Dive) == 0x1ab8);
    };
};
