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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t outgoing_damage; // 0x1a78
            std::int32_t outgoing_damage_structure; // 0x1a7c
            std::int32_t outgoing_damage_roshan; // 0x1a80
            std::int32_t incoming_damage; // 0x1a84
            std::int32_t bounty_base; // 0x1a88
            std::int32_t bounty_growth; // 0x1a8c
            std::int32_t fixed_day_vision; // 0x1a90
            std::int32_t fixed_night_vision; // 0x1a94
            CUtlString m_strIllusionType; // 0x1a98
            char m_szIllusionLabel[64]; // 0x1aa0
            bool m_bHidden; // 0x1ae0
            uint8_t _pad1ae1[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Illusion because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Illusion) == 0x1ae8);
    };
};
