#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        class CDOTA_Modifier_Techies_LandMine : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            float radius; // 0x1a88
            float proximity_threshold; // 0x1a8c
            float damage; // 0x1a90
            float activation_delay; // 0x1a94
            float outer_damage; // 0x1a98
            std::int32_t min_distance; // 0x1a9c
            bool bActivated; // 0x1aa0
            uint8_t _pad1aa1[0x7]; // 0x1aa1
            source2sdk::client::CountdownTimer m_Timer; // 0x1aa8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_LandMine because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_LandMine) == 0x1ac0);
    };
};
