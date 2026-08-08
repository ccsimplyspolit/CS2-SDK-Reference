#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Slark_Depth_Shroud : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a88
            std::int32_t bonus_movement_speed; // 0x1a8c
            float bonus_regen; // 0x1a90
            std::int32_t attack_speed; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Depth_Shroud because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Slark_Depth_Shroud) == 0x1a98);
    };
};
