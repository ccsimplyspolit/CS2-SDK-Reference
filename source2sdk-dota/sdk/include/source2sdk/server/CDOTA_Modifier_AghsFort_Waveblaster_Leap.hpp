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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Waveblaster_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1a78
            float m_flInitialVelocity; // 0x1a7c
            VectorWS m_vStartPosition; // 0x1a80
            Vector m_vTargetHorizontalDirection; // 0x1a8c
            float m_flCurrentTimeHoriz; // 0x1a98
            float m_flCurrentTimeVert; // 0x1a9c
            bool m_bInterrupted; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            float leap_speed; // 0x1aa4
            float leap_acceleration; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Waveblaster_Leap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AghsFort_Waveblaster_Leap) == 0x1ab0);
    };
};
