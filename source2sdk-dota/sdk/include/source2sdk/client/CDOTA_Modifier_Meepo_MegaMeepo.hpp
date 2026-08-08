#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Meepo_MegaMeepo : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78
            float m_flOffset; // 0x1a7c
            QAngle m_vStartAngles; // 0x1a80
            VectorWS m_vStartLocation; // 0x1a8c
            bool m_bInterrupted; // 0x1a98
            bool m_bHasBeenDestroyed; // 0x1a99
            bool m_bIsHighestMeepo; // 0x1a9a
            uint8_t _pad1a9b[0x5];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Meepo_MegaMeepo) == 0x1aa0);
    };
};
