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
        class CDOTA_Modifier_Pangolier_Swashbuckle : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nStrikesLeft; // 0x1a78
            float attack_interval; // 0x1a7c
            VectorWS m_vSpawnPos; // 0x1a80
            Vector m_vStrikeDir; // 0x1a8c
            VectorWS m_vDashPos; // 0x1a98
            bool m_bApplyDamagePenalty; // 0x1aa4
            uint8_t _pad1aa5[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Pangolier_Swashbuckle because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Pangolier_Swashbuckle) == 0x1aa8);
    };
};
