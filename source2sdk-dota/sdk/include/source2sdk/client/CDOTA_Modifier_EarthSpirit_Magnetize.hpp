#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_EarthSpirit_Magnetize : public source2sdk::client::CDOTA_Buff
        {
        public:
            float rock_search_radius; // 0x1a78
            float damage_per_second; // 0x1a7c
            float damage_interval; // 0x1a80
            float rock_explosion_delay; // 0x1a84
            float damage_duration; // 0x1a88
            float cast_radius; // 0x1a8c
            float rock_explosion_radius; // 0x1a90
            bool magnetized_rocks_buff_self; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            std::int32_t magnetized_rocks_buff_self_duration; // 0x1a98
            std::int32_t magnetize_self; // 0x1a9c
            // m_hExplodedRocks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hExplodedRocks;
            char m_hExplodedRocks[0x18]; // 0x1aa0
            float duration; // 0x1ab8
            bool m_bShowOverhead; // 0x1abc
            uint8_t _pad1abd[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_Magnetize because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_Magnetize) == 0x1ac0);
    };
};
