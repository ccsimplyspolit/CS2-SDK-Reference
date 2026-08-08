#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Bane_Nightmare : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nSource; // 0x1a78
            float animation_rate; // 0x1a7c
            Vector m_vWalkDir; // 0x1a80
            std::int32_t walk_speed; // 0x1a8c
            float turn_rate; // 0x1a90
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1a94
            float m_flWalkAngle; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Bane_Nightmare because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Bane_Nightmare) == 0x1aa0);
    };
};
