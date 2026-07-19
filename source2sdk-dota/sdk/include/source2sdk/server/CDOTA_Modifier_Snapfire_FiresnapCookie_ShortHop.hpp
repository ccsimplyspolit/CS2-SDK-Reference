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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x1a58            
            std::int32_t jump_height; // 0x1a5c            
            std::int32_t jump_horizontal_distance; // 0x1a60            
            float pre_land_anim_time; // 0x1a64            
            float landing_gesture_duration; // 0x1a68            
            float impact_radius; // 0x1a6c            
            std::int32_t impact_damage; // 0x1a70            
            float impact_stun_duration; // 0x1a74            
            float m_flStartZ; // 0x1a78            
            float m_flCurTime; // 0x1a7c            
            float m_flJumpDuration; // 0x1a80            
            float m_flJumpHeight; // 0x1a84            
            Vector m_vTargetHorizontalDirection; // 0x1a88            
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Snapfire_FiresnapCookie_ShortHop) == 0x1a98);
    };
};
