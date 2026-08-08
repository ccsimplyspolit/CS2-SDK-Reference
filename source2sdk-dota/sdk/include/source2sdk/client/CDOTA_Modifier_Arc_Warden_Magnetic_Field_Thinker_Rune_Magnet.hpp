#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float rune_pull_strength; // 0x1a7c
            float rune_pull_max_speed_as_multiplier_of_pull_strength; // 0x1a80
            float rune_activate_radius_buffer; // 0x1a84
            float rune_pull_falloff_multiplier; // 0x1a88
            float rune_pull_radius; // 0x1a8c
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1a90
            source2sdk::entity2::GameTime_t m_flBubbleExpirationTime; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Arc_Warden_Magnetic_Field_Thinker_Rune_Magnet) == 0x1a98);
    };
};
