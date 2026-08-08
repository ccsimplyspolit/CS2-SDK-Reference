#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Razor_StaticLink_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78
            std::int32_t attack_speed_factor; // 0x1a7c
            float move_speed_factor; // 0x1a80
            std::int32_t drain_rate; // 0x1a84
            std::int32_t drain_armor; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Razor_StaticLink_Debuff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Razor_StaticLink_Debuff) == 0x1a90);
    };
};
