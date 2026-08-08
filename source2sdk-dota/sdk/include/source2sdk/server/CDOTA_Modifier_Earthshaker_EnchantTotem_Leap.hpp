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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x4]; // 0x1a78
            VectorWS m_vLoc; // 0x1a7c
            float m_flPredictedTotalTime; // 0x1a88
            VectorWS m_vStartPosition; // 0x1a8c
            float m_flCurrentTimeHoriz; // 0x1a98
            float m_flCurrentTimeVert; // 0x1a9c
            bool m_bHorizontalMotionInterrupted; // 0x1aa0
            bool m_bDamageApplied; // 0x1aa1
            bool m_bTargetTeleported; // 0x1aa2
            uint8_t _pad1aa3[0x1]; // 0x1aa3
            Vector m_vHorizontalVelocity; // 0x1aa4
            VectorWS m_vLastKnownTargetPosition; // 0x1ab0
            float m_flInitialVelocityZ; // 0x1abc
            std::int32_t scepter_height; // 0x1ac0
            std::int32_t scepter_height_arcbuffer; // 0x1ac4
            std::int32_t scepter_acceleration_z; // 0x1ac8
            std::int32_t scepter_acceleration_horizontal; // 0x1acc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Earthshaker_EnchantTotem_Leap because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x1ad0);
    };
};
