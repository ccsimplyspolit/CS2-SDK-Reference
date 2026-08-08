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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Magnataur_Skewer_Impact : public source2sdk::client::CDOTA_Buff
        {
        public:
            float slow_duration; // 0x1a78
            std::int32_t skewer_damage; // 0x1a7c
            std::int32_t damage_distance_pct; // 0x1a80
            Vector m_vDirection; // 0x1a84
            VectorWS m_vStartPos; // 0x1a90
            float m_flEndTime; // 0x1a9c
            float m_flCurTime; // 0x1aa0
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Magnataur_Skewer_Impact because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Magnataur_Skewer_Impact) == 0x1aa8);
    };
};
