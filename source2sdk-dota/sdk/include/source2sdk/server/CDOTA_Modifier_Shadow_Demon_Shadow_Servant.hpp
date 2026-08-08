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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shadow_Demon_Shadow_Servant : public source2sdk::client::CDOTA_Buff
        {
        public:
            float debuff_duration; // 0x1a78
            std::int32_t illusion_outgoing_damage; // 0x1a7c
            std::int32_t illusion_incoming_damage; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Shadow_Demon_Shadow_Servant because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Shadow_Demon_Shadow_Servant) == 0x1a88);
    };
};
