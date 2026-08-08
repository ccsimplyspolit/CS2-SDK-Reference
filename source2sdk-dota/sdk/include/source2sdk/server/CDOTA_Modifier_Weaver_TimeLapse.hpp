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
        // Size: 0x1b58
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Weaver_TimeLapse : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_PositionIndex[11]; // 0x1a78
            float m_flLife[11]; // 0x1afc
            float m_flMana[11]; // 0x1b28
            bool m_bHasValidHistory; // 0x1b54
            uint8_t _pad1b55[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_TimeLapse because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Weaver_TimeLapse) == 0x1b58);
    };
};
