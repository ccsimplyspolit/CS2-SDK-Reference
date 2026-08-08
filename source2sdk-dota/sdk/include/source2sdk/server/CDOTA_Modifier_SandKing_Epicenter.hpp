#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1b28
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SandKing_Epicenter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float epicenter_radius_base; // 0x1a78
            float epicenter_radius_increment; // 0x1a7c
            std::int32_t epicenter_pulses; // 0x1a80
            float epicenter_radius[30]; // 0x1a84
            std::int32_t m_iMaxPulses; // 0x1afc
            std::int32_t m_iPulseCount; // 0x1b00
            float m_flPulseTickRate; // 0x1b04
            float spine_tick_rate; // 0x1b08
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1b0c
            source2sdk::entity2::GameTime_t m_flLastSpineTime; // 0x1b10
            uint8_t _pad1b14[0x14];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_SandKing_Epicenter because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SandKing_Epicenter) == 0x1b28);
    };
};
