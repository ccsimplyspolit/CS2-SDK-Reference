#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_ItemWiggle_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vOriginalPosition; // 0x1a78
            float m_flOriginalScale; // 0x1a84
            source2sdk::entity2::GameTime_t m_flLastChangeTime; // 0x1a88
            VectorWS m_vLastChangePosition; // 0x1a8c
            float m_flLastChangeScale; // 0x1a98
            VectorWS m_vTargetPosition; // 0x1a9c
            float m_flTargetScale; // 0x1aa8
            bool m_bFirstThink; // 0x1aac
            uint8_t _pad1aad[0x3]; // 0x1aad
            float m_flStartAmplitude; // 0x1ab0
            float m_flEndAmplitude; // 0x1ab4
            float m_flScaleAmplitude; // 0x1ab8
            float m_flStartFrequency; // 0x1abc
            float m_flEndFrequency; // 0x1ac0
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_ItemWiggle_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_ItemWiggle_Thinker) == 0x1ac8);
    };
};
