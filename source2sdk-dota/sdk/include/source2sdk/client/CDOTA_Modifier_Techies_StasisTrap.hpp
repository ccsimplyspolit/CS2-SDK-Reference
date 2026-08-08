#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_StasisTrap : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            float activation_radius; // 0x1a88
            float stun_radius; // 0x1a8c
            float stun_duration; // 0x1a90
            float explode_delay; // 0x1a94
            float activation_time; // 0x1a98
            bool m_bActivated; // 0x1a9c
            bool m_bTriggered; // 0x1a9d
            uint8_t _pad1a9e[0x2];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_StasisTrap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_StasisTrap) == 0x1aa0);
    };
};
