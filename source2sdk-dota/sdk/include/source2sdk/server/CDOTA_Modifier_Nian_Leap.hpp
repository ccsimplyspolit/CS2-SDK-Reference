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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Leap : public source2sdk::client::CDOTA_Buff
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
            float m_flPlaybackRate; // 0x1a9c            
            std::int32_t pounce_distance; // 0x1aa0            
            float pounce_speed; // 0x1aa4            
            float pounce_acceleration; // 0x1aa8            
            float initial_delay; // 0x1aac            
            float landing_delay; // 0x1ab0            
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Leap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Leap) == 0x1ab8);
    };
};
