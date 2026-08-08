#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AttackRecord_t.hpp"
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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lycan_SummonWolves_Hamstring : public source2sdk::client::CDOTA_Buff
        {
        public:
            float root_duration; // 0x1a78
            std::int32_t damage_boost_stacks; // 0x1a7c
            float damage_boost_duration; // 0x1a80
            uint8_t _pad1a84[0x4]; // 0x1a84
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::AttackRecord_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1a88
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Lycan_SummonWolves_Hamstring because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lycan_SummonWolves_Hamstring) == 0x1aa0);
    };
};
