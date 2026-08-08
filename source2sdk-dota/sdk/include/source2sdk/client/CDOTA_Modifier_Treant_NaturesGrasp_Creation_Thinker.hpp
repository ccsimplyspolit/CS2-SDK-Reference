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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creation_interval; // 0x1a78
            float vines_duration; // 0x1a7c
            std::int32_t vine_spawn_interval; // 0x1a80
            VectorWS m_vInitialLoc; // 0x1a84
            VectorWS m_vFinalLoc; // 0x1a90
            std::int32_t m_iVineCount; // 0x1a9c
            std::int32_t m_iVinesIndex; // 0x1aa0
            uint8_t _pad1aa4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker) == 0x1aa8);
    };
};
