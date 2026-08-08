#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Medusa_StoneGaze_Facing : public source2sdk::client::CDOTA_Buff
        {
        public:
            float face_duration; // 0x1a78
            float stone_duration; // 0x1a7c
            float duration; // 0x1a80
            float vision_cone; // 0x1a84
            float m_flAccumulatedTime; // 0x1a88
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            source2sdk::server::CountdownTimer ctFacing; // 0x1a90
            bool m_bAlreadyStoned; // 0x1aa8
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze_Facing because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Medusa_StoneGaze_Facing) == 0x1ab0);
    };
};
