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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_Vaulted_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1a78
            float m_flCurrentTimeVert; // 0x1a7c
            VectorWS m_vTargetPos; // 0x1a80
            VectorWS m_vStart; // 0x1a8c
            float m_flZDelta; // 0x1a98
            float jump_speed; // 0x1a9c
            float start_height; // 0x1aa0
            float jump_attack_radius; // 0x1aa4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Vaulted_Strike because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Juggernaut_Vaulted_Strike) == 0x1aa8);
    };
};
