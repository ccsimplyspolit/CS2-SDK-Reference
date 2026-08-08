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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float interval_scepter; // 0x1a78
            bool bInBufferTime; // 0x1a7c
            uint8_t _pad1a7d[0x3]; // 0x1a7d
            std::int32_t damage; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Mirana_Starfall_Scepter_Thinker) == 0x1a88);
    };
};
