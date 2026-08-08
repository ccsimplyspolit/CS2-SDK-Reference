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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_SpiritOfTheForest : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_tree_pct; // 0x1a78
            float radius_base; // 0x1a7c
            float multiplier; // 0x1a80
            std::int32_t m_nTreeAmount; // 0x1a84
            float m_flMultiplierToUse; // 0x1a88
            float m_flRadiusToUse; // 0x1a8c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_SpiritOfTheForest because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Furion_SpiritOfTheForest) == 0x1a90);
    };
};
