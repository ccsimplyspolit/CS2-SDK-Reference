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
        class CDOTA_Modifier_Falconers_Glove : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flRotation; // 0x1a78
            VectorWS m_vRotationOrigin; // 0x1a7c
            float orbit_radius; // 0x1a88
            float orbit_seconds_per_rotation; // 0x1a8c
            float min_move_speed; // 0x1a90
            float max_move_speed; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Falconers_Glove because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Falconers_Glove) == 0x1a98);
    };
};
