#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/sRevenantDef.hpp"

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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Muerta_Revenant_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_fDeadZoneDistance; // 0x1a78
            float m_fDesiredDeadZoneDistance; // 0x1a7c
            float damage; // 0x1a80
            float hit_radius; // 0x1a84
            float speed_initial; // 0x1a88
            float speed_max; // 0x1a8c
            float acceleration; // 0x1a90
            float kill_check_radius; // 0x1a94
            float kill_radius_expansion; // 0x1a98
            float kill_radius_expansion_speed; // 0x1a9c
            float hp_regen_pct; // 0x1aa0
            std::int32_t num_revenants; // 0x1aa4
            std::int32_t rotation_direction; // 0x1aa8
            float radius; // 0x1aac
            float rotation_initial; // 0x1ab0
            source2sdk::client::ParticleIndex_t m_nWarningFX; // 0x1ab4
            // m_SpiritDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sRevenantDef> m_SpiritDefs;
            char m_SpiritDefs[0x18]; // 0x1ab8
            uint8_t _pad1ad0[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Muerta_Revenant_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Muerta_Revenant_Thinker) == 0x1ae8);
    };
};
