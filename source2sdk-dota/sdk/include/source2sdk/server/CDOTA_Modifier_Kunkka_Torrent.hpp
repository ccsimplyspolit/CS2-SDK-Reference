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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Torrent : public source2sdk::client::CDOTA_Buff
        {
        public:
            float torrent_damage; // 0x1a78
            float damage_tick_interval; // 0x1a7c
            float percent_instant; // 0x1a80
            float flDamagePerTick; // 0x1a84
            float m_flStartZ; // 0x1a88
            float m_flCurTime; // 0x1a8c
            bool m_bTorrentStorm; // 0x1a90
            uint8_t _pad1a91[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Torrent because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Torrent) == 0x1a98);
    };
};
