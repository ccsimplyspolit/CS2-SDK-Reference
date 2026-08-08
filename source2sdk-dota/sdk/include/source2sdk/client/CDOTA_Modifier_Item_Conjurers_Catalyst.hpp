#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Conjurers_Catalyst : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            float damage_aoe; // 0x1a78
            float damage; // 0x1a7c
            float damage_creep; // 0x1a80
            float cooldown; // 0x1a84
            float duration; // 0x1a88
            std::int32_t damage_threshold; // 0x1a8c
            bool has_hands; // 0x1a90
            uint8_t _pad1a91[0x3]; // 0x1a91
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a94
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1a98
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            source2sdk::client::CountdownTimer m_OverheatTimer; // 0x1aa0
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Conjurers_Catalyst because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Conjurers_Catalyst) == 0x1ab8);
    };
};
