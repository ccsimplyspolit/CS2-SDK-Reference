#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Invoker_IceWall_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_per_second; // 0x1a78
            Vector m_vWallDirection; // 0x1a7c
            VectorWS m_vWallStart; // 0x1a88
            float wall_total_length; // 0x1a94
            float wall_width; // 0x1a98
            float slow_duration; // 0x1a9c
            std::int32_t slow; // 0x1aa0
            float root_damage; // 0x1aa4
            float root_duration; // 0x1aa8
            float tick_interval; // 0x1aac
            bool m_bGrantedGem; // 0x1ab0
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x1ab4
            source2sdk::client::ParticleIndex_t m_nParticleIndex2; // 0x1ab8
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_IceWall_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_IceWall_Thinker) == 0x1ac0);
    };
};
