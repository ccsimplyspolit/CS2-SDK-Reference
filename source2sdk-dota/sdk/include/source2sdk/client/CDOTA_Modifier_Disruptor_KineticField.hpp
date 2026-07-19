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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_KineticField : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            float wall_thickness; // 0x1a5c            
            float tick_rate; // 0x1a60            
            std::int32_t strike_on_touch; // 0x1a64            
            VectorWS m_vOriginLoc; // 0x1a68            
            bool m_bTruesight; // 0x1a74            
            uint8_t _pad1a75[0x3]; // 0x1a75
            VectorWS m_vOrigin; // 0x1a78            
            Vector m_vWallRight; // 0x1a84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_KineticField because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Disruptor_KineticField) == 0x1a90);
    };
};
