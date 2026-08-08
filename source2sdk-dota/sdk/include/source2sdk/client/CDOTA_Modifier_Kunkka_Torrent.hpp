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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent : public source2sdk::client::CDOTA_Buff
        {
        public:
            float torrent_damage; // 0x1a78
            float damage_tick_interval; // 0x1a7c
            float percent_instant; // 0x1a80
            float flDamagePerTick; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kunkka_Torrent) == 0x1a88);
    };
};
