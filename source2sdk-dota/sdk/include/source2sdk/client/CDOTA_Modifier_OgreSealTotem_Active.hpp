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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_OgreSealTotem_Active : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nCurrentBounce; // 0x1a58            
            std::int32_t leap_distance; // 0x1a5c            
            float leap_speed; // 0x1a60            
            float leap_acceleration; // 0x1a64            
            std::int32_t leap_radius; // 0x1a68            
            float leap_bonus_duration; // 0x1a6c            
            bool m_bLaunched; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            float m_flFacingTarget; // 0x1a74            
            float movement_turn_rate; // 0x1a78            
            uint8_t _pad1a7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_OgreSealTotem_Active because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_OgreSealTotem_Active) == 0x1a80);
    };
};
