#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x14]; // 0x1a78
            float wheel_stun; // 0x1a8c
            float mesmerize_radius; // 0x1a90
            float vision_cone; // 0x1a94
            float explosion_damage; // 0x1a98
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            source2sdk::client::CountdownTimer m_ctFuseTimer; // 0x1aa0
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ab8
            std::int32_t m_nTimesTriggered; // 0x1abc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Ringmaster_Wheel_Mesmerize) == 0x1ac0);
    };
};
