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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_ReactiveTazer : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x14]; // 0x1a78
            std::int32_t bonus_ms; // 0x1a8c
            float disarm_duration; // 0x1a90
            float explosion_radius; // 0x1a94
            float damage; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_ReactiveTazer because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_ReactiveTazer) == 0x1aa0);
    };
};
