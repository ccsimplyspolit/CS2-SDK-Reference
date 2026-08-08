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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Onslaught_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vLoc; // 0x1a78
            float m_flPredictedTotalTime; // 0x1a84
            VectorWS m_vStartPosition; // 0x1a88
            float m_flCurrentTimeHoriz; // 0x1a94
            float m_flCurrentTimeVert; // 0x1a98
            bool m_bHorizontalMotionInterrupted; // 0x1a9c
            bool m_bTargetTeleported; // 0x1a9d
            uint8_t _pad1a9e[0x2]; // 0x1a9e
            Vector m_vHorizontalVelocity; // 0x1aa0
            VectorWS m_vLastKnownTargetPosition; // 0x1aac
            float m_flInitialVelocityZ; // 0x1ab8
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Knockback because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Onslaught_Knockback) == 0x1ac0);
    };
};
