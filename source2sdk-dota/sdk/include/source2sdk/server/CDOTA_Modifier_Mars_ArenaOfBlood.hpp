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
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mars_ArenaOfBlood : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            std::int32_t width; // 0x1a7c
            std::int32_t spear_damage; // 0x1a80
            std::int32_t spear_distance_from_wall; // 0x1a84
            float spear_attack_interval; // 0x1a88
            bool pierces_debuff_immunity; // 0x1a8c
            uint8_t _pad1a8d[0x33]; // 0x1a8d
            std::int32_t m_hObstruction; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            // m_vecAvoidLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vecAvoidLocations;
            char m_vecAvoidLocations[0x18]; // 0x1ac8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mars_ArenaOfBlood) == 0x1ae0);
    };
};
