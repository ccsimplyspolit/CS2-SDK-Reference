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
        // Size: 0x1b08
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x1a58            
            float m_flInitialVelocity; // 0x1a5c            
            VectorWS m_vStartPosition; // 0x1a60            
            Vector m_vTargetHorizontalDirection; // 0x1a6c            
            VectorWS m_vTargetPosition; // 0x1a78            
            float m_flCurrentTimeHoriz; // 0x1a84            
            float m_flCurrentTimeVert; // 0x1a88            
            bool m_bInterrupted; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            float m_flHorizDelayTime; // 0x1a90            
            float m_flVertDelayTime; // 0x1a94            
            float m_flLeapSequenceDuration; // 0x1a98            
            float m_flClawDamageTime; // 0x1a9c            
            float m_flPlaybackRate; // 0x1aa0            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1aa4            
            bool m_bPlayedSwipeSound; // 0x1aa8            
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            std::int32_t pounce_distance; // 0x1aac            
            float pounce_speed; // 0x1ab0            
            float pounce_acceleration; // 0x1ab4            
            std::int32_t pounce_radius; // 0x1ab8            
            std::int32_t pounce_damage; // 0x1abc            
            std::int32_t stun_radius; // 0x1ac0            
            float stun_duration; // 0x1ac4            
            float leash_duration; // 0x1ac8            
            float initial_delay; // 0x1acc            
            float landing_delay; // 0x1ad0            
            float vertical_adjust; // 0x1ad4            
            float vertical_adjust_max_distance; // 0x1ad8            
            float vertical_adjust_min_distance; // 0x1adc            
            std::int32_t claw_damage; // 0x1ae0            
            std::int32_t claw_damage_radius; // 0x1ae4            
            float claw_damage_delay; // 0x1ae8            
            float claw_damage_duration; // 0x1aec            
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x1af0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Dive) == 0x1b08);
    };
};
