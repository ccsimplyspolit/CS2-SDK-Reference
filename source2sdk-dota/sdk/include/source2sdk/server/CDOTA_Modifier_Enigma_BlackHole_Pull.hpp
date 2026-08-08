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
        class CDOTA_Modifier_Enigma_BlackHole_Pull : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t pull_speed; // 0x1a78
            float radius; // 0x1a7c
            float damage; // 0x1a80
            float tick_rate; // 0x1a84
            float pull_rotate_speed; // 0x1a88
            float animation_rate; // 0x1a8c
            float scepter_pct_damage; // 0x1a90
            float m_flBlackHoleDuration; // 0x1a94
            float m_flBlackHoleCreationTime; // 0x1a98
            source2sdk::entity2::GameTime_t m_flDamageTick; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_BlackHole_Pull because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_BlackHole_Pull) == 0x1aa0);
    };
};
