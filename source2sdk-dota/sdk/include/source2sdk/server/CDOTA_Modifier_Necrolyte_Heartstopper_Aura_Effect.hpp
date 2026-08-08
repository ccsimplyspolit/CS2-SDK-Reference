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
        class CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_damage; // 0x1a78
            std::int32_t heal_reduction_pct; // 0x1a7c
            float heal_regen_to_damage; // 0x1a80
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a84
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Necrolyte_Heartstopper_Aura_Effect) == 0x1a88);
    };
};
