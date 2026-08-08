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
        class CDOTA_Modifier_Huskar_Inner_Fire_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDirection; // 0x1a78
            float m_flEndTime; // 0x1a84
            float m_flCurTime; // 0x1a88
            float knockback_distance; // 0x1a8c
            float knockback_duration; // 0x1a90
            float min_knockback_distance; // 0x1a94
            float min_knockback_duration; // 0x1a98
            float effective_distance; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Inner_Fire_Knockback because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Huskar_Inner_Fire_Knockback) == 0x1aa0);
    };
};
