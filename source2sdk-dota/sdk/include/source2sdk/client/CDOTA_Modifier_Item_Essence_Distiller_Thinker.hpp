#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Essence_Distiller_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t latch_range; // 0x1a78
            std::int32_t latch_vision; // 0x1a7c
            float linger_after_latch_duration; // 0x1a80
            source2sdk::client::ParticleIndex_t nFXIndex; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Essence_Distiller_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Essence_Distiller_Thinker) == 0x1a88);
    };
};
