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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Afterburner : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_movement_speed_per_hit; // 0x1a58            
            float bonus_movement_speed_per_hit_creep; // 0x1a5c            
            float bonus_movespeed_duration; // 0x1a60            
            uint8_t _pad1a64[0x1c]; // 0x1a64
            float m_flStacksFloat; // 0x1a80            
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Afterburner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Gyrocopter_Afterburner) == 0x1a88);
    };
};
