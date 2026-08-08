#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_Frogstomp_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_stomp; // 0x1a78
            std::int32_t total_ticks; // 0x1a7c
            float radius; // 0x1a80
            float stun_duration; // 0x1a84
            float stomp_interval; // 0x1a88
            float delay; // 0x1a8c
            std::int32_t infinite_stomps; // 0x1a90
            bool m_bStarted; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a98
            std::int32_t nNumTicks; // 0x1a9c
            bool m_bGrantedGem; // 0x1aa0
            bool m_bPendingDestroy; // 0x1aa1
            uint8_t _pad1aa2[0x6]; // 0x1aa2
            // m_hHitHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitHeroes;
            char m_hHitHeroes[0x18]; // 0x1aa8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_Frogstomp_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_Frogstomp_Thinker) == 0x1ac0);
    };
};
