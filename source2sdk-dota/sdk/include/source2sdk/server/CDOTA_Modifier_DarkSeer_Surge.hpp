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
        class CDOTA_Modifier_DarkSeer_Surge : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t speed_boost; // 0x1a78
            float trail_radius; // 0x1a7c
            float trail_duration; // 0x1a80
            VectorWS m_vLastTrailThinkerLocation; // 0x1a84
            bool m_bTrailStarted; // 0x1a90
            uint8_t _pad1a91[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Surge because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DarkSeer_Surge) == 0x1a98);
    };
};
