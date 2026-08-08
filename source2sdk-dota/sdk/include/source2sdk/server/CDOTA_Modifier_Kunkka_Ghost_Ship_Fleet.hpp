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
        class CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS vCasterOrigin; // 0x1a78
            VectorWS vEnd; // 0x1a84
            std::int32_t hitcount; // 0x1a90
            std::int32_t fleet_count; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kunkka_Ghost_Ship_Fleet) == 0x1a98);
    };
};
