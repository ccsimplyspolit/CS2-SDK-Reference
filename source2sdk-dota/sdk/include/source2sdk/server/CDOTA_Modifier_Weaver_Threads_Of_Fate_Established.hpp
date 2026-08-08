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
        class CDOTA_Modifier_Weaver_Threads_Of_Fate_Established : public source2sdk::client::CDOTA_Buff
        {
        public:
            float established_thread_break_distance; // 0x1a78
            float thread_setup_distance; // 0x1a7c
            std::int32_t damage_per_thread_creep; // 0x1a80
            std::int32_t damage_per_thread_hero; // 0x1a84
            float death_linger_duration; // 0x1a88
            float thread_setup_time; // 0x1a8c
            source2sdk::client::ParticleIndex_t m_nTetherParticle; // 0x1a90
            bool m_bEstablished; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            source2sdk::entity2::GameTime_t m_fEstablishTime; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Threads_Of_Fate_Established because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Weaver_Threads_Of_Fate_Established) == 0x1aa0);
    };
};
