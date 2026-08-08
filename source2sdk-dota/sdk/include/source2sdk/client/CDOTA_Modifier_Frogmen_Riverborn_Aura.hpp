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
        // Size: 0x1a80
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Frogmen_Riverborn_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            bool m_bActive; // 0x1a7c
            uint8_t _pad1a7d[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Frogmen_Riverborn_Aura because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Frogmen_Riverborn_Aura) == 0x1a80);
    };
};
