#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        class CDOTA_Modifier_Hoodwink_MistwoodsWayfarer_Passive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float redirect_chance; // 0x1a7c
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_MistwoodsWayfarer_Passive because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_MistwoodsWayfarer_Passive) == 0x1a88);
    };
};
