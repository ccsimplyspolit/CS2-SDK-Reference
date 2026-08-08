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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1a78
            std::int32_t max_steps; // 0x1a7c
            float damage_interval; // 0x1a80
            std::int32_t m_nNumSteps; // 0x1a84
            std::int32_t m_nRadiusStep; // 0x1a88
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a8c
            Vector m_vDir; // 0x1a90
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker) == 0x1aa0);
    };
};
