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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Sniper_Shrapnel_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            bool m_bExploded; // 0x1a7c
            uint8_t _pad1a7d[0x17]; // 0x1a7d
            bool m_bGrantedGem; // 0x1a94
            uint8_t _pad1a95[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Sniper_Shrapnel_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Sniper_Shrapnel_Thinker) == 0x1a98);
    };
};
