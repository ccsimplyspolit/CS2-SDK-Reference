#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SkeletonKing_MortalStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_mult; // 0x1a78
            std::int32_t wraith_crit_bonus; // 0x1a7c
            float wraith_cd_mult; // 0x1a80
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_vCritRecords;
            char m_vCritRecords[0x18]; // 0x1a88
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_MortalStrike because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SkeletonKing_MortalStrike) == 0x1aa0);
    };
};
