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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pudge_Meat_Hook : public source2sdk::client::CDOTA_Buff
        {
        public:
            float distance_to_damage; // 0x1a78
            float min_distance_damage; // 0x1a7c
            Vector2D m_vLastPosition; // 0x1a80
            float m_flAccumulatedDistance; // 0x1a88
            uint8_t _pad1a8c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Meat_Hook because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pudge_Meat_Hook) == 0x1a90);
    };
};
