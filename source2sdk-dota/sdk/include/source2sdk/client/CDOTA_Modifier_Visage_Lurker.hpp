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
        class CDOTA_Modifier_Visage_Lurker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_stacks; // 0x1a78
            float stack_gain_time; // 0x1a7c
            float cooldown_speed_per_stack; // 0x1a80
            float linger_duration; // 0x1a84
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_Lurker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_Lurker) == 0x1a90);
    };
};
