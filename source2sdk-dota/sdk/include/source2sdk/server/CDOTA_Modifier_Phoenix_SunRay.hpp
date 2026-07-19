#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1ad8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_SunRay : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t hp_cost_perc_per_second; // 0x1a58            
            std::int32_t beam_range; // 0x1a5c            
            std::int32_t base_damage; // 0x1a60            
            std::int32_t base_heal; // 0x1a64            
            float tick_interval; // 0x1a68            
            float forward_move_speed; // 0x1a6c            
            float turn_rate_initial; // 0x1a70            
            float turn_rate; // 0x1a74            
            float radius; // 0x1a78            
            float m_flCurrentTime; // 0x1a7c            
            float m_flAccumulatedSelfDamage; // 0x1a80            
            bool m_bMovingForward; // 0x1a84            
            bool m_bTurningFast; // 0x1a85            
            uint8_t _pad1a86[0x2]; // 0x1a86
            float m_flFacingTarget; // 0x1a88            
            float hp_perc_damage; // 0x1a8c            
            float hp_perc_heal; // 0x1a90            
            float blind_duration; // 0x1a94            
            float blind_per_second; // 0x1a98            
            std::int32_t focal_point_max_multiplier; // 0x1a9c            
            std::int32_t focal_point_start_length_pct; // 0x1aa0            
            std::int32_t focal_point_blind_stack_multiplier; // 0x1aa4            
            source2sdk::client::ParticleIndex_t m_nBeamFXIndex; // 0x1aa8            
            // m_hVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hVisionThinkers[8];
            char m_hVisionThinkers[0x20]; // 0x1aac            
            // m_hBeamEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEnd;
            char m_hBeamEnd[0x4]; // 0x1acc            
            bool m_bCreatedVisionThinkers; // 0x1ad0            
            uint8_t _pad1ad1[0x3]; // 0x1ad1
            // m_hBeamEndSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBeamEndSound;
            char m_hBeamEndSound[0x4]; // 0x1ad4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_SunRay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Phoenix_SunRay) == 0x1ad8);
    };
};
