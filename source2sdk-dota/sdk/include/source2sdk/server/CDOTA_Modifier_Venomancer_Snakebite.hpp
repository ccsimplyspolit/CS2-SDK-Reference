#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        class CDOTA_Modifier_Venomancer_Snakebite : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_damage; // 0x1a78
            float tick_damage; // 0x1a7c
            float damage_interval; // 0x1a80
            bool undispellable; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            source2sdk::entity2::GameTime_t m_flNextDamageInterval; // 0x1a88
            std::int32_t m_nWardIndex; // 0x1a8c
            float m_flPositionAngle; // 0x1a90
            float m_flTargetPreviousYaw; // 0x1a94
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a98
            bool m_bBittenThisFrame; // 0x1a9c
            uint8_t _pad1a9d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Venomancer_Snakebite because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Venomancer_Snakebite) == 0x1aa0);
    };
};
