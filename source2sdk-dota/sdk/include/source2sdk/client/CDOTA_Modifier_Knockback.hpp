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
        class CDOTA_Modifier_Knockback : public source2sdk::client::CDOTA_Buff
        {
        public:
            float knockback_distance; // 0x1a78
            std::int32_t knockback_height; // 0x1a7c
            float knockback_duration; // 0x1a80
            Vector m_vHorizOffset; // 0x1a84
            VectorWS m_vStartPosition; // 0x1a90
            float m_flZDelta; // 0x1a9c
            float m_fCurrentTimeHoriz; // 0x1aa0
            float m_fCurrentTimeVert; // 0x1aa4
            bool m_bShouldStun; // 0x1aa8
            bool m_bRespectLeash; // 0x1aa9
            bool m_bReversePolarity; // 0x1aaa
            bool m_bRelativeToGround; // 0x1aab
            bool m_bDestroyTreesOnRoute; // 0x1aac
            bool m_bFindClearSpace; // 0x1aad
            uint8_t _pad1aae[0x2];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Knockback because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Knockback) == 0x1ab0);
    };
};
