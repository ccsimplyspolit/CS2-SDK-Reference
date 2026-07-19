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
        class CDOTA_Modifier_Disruptor_KineticWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vWallDirection; // 0x1a58            
            Vector m_vWallRight; // 0x1a64            
            float wall_width; // 0x1a70            
            float formation_time; // 0x1a74            
            float wall_thickness; // 0x1a78            
            float tick_rate; // 0x1a7c            
            std::int32_t strike_on_touch; // 0x1a80            
            uint8_t _pad1a84[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticWall_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_KineticWall_Thinker) == 0x1a98);
    };
};
