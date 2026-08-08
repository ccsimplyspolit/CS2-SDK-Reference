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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_Fissure_Shard : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t shard_aftershock_stun_duration_pct; // 0x1a78
            float shard_free_pathing_linger_duration; // 0x1a7c
            float fissure_movement_speed; // 0x1a80
            float fissure_max_distance_moved; // 0x1a84
            VectorWS m_vStartPos; // 0x1a88
            VectorWS m_vEndPos; // 0x1a94
            Vector m_vMoveDir; // 0x1aa0
            float m_flTotalDistanceMoved; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_Fissure_Shard because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Earthshaker_Fissure_Shard) == 0x1ab0);
    };
};
