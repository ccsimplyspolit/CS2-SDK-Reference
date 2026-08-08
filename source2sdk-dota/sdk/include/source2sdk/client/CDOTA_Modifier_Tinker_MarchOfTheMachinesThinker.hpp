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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float collision_radius; // 0x1a78
            float radius; // 0x1a7c
            float distance; // 0x1a80
            float speed; // 0x1a84
            std::int32_t machines_per_sec; // 0x1a88
            std::int32_t heal_per_second; // 0x1a8c
            Vector m_vDir; // 0x1a90
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Tinker_MarchOfTheMachinesThinker) == 0x1aa0);
    };
};
