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
        // Size: 0x1f00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Teleporting : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a78[0x50]; // 0x1a78
            float m_fStartTime; // 0x1ac8
            char m_iszPortalLoopAppear[260]; // 0x1acc
            char m_iszPortalLoopDisappear[260]; // 0x1bd0
            char m_iszHeroLoopAppear[260]; // 0x1cd4
            char m_iszHeroLoopDisappear[260]; // 0x1dd8
            bool m_bSkipTeleportAnim; // 0x1edc
            bool m_bPlayingCoopAnim; // 0x1edd
            bool m_bIsPlayingTauntGesture; // 0x1ede
            uint8_t _pad1edf[0x1]; // 0x1edf
            float m_fChannelTime; // 0x1ee0
            VectorWS m_vStart; // 0x1ee4
            VectorWS m_vEnd; // 0x1ef0
            uint8_t _pad1efc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Teleporting) == 0x1f00);
    };
};
