#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Pugna_LifeDrain : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t health_drain; // 0x1a78
            std::int32_t ally_healing; // 0x1a7c
            float health_drain_death_boost; // 0x1a80
            float tick_rate; // 0x1a84
            bool m_bDoRangeCheck; // 0x1a88
            uint8_t _pad1a89[0x3]; // 0x1a89
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a8c
            source2sdk::entity2::GameTime_t m_flElapsedTime; // 0x1a90
            bool m_bPrimary; // 0x1a94
            bool m_bShard; // 0x1a95
            bool m_bFromWard; // 0x1a96
            uint8_t _pad1a97[0x1]; // 0x1a97
            // m_hWard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hWard;
            char m_hWard[0x4]; // 0x1a98
            float spell_amp_drain_duration; // 0x1a9c
            std::int32_t max_spell_amp_drain_pct; // 0x1aa0
            std::int32_t spell_amp_drain_rate; // 0x1aa4
            std::int32_t spell_amp_drain_rate_ward; // 0x1aa8
            std::int32_t spell_amp_drain_max; // 0x1aac
            std::int32_t health_to_mana_rate; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pugna_LifeDrain because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Pugna_LifeDrain) == 0x1ab8);
    };
};
