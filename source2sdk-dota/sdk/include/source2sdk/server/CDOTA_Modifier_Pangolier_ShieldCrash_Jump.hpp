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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pangolier_ShieldCrash_Jump : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_duration; // 0x1a78
            float jump_duration_gyroshell; // 0x1a7c
            std::int32_t jump_height; // 0x1a80
            std::int32_t jump_height_gyroshell; // 0x1a84
            float m_flStartZ; // 0x1a88
            float m_flCurTime; // 0x1a8c
            float m_flJumpDuration; // 0x1a90
            float m_flJumpHeight; // 0x1a94
            std::int32_t jump_horizontal_distance; // 0x1a98
            Vector m_vTargetHorizontalDirection; // 0x1a9c
            float m_flPreviousElapsedTime; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_ShieldCrash_Jump because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pangolier_ShieldCrash_Jump) == 0x1ab0);
    };
};
