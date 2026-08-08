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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PhantomAssassin_CoupdeGrace : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t crit_bonus; // 0x1a78
            std::int32_t crit_chance; // 0x1a7c
            std::int32_t attacks_to_proc; // 0x1a80
            std::int32_t attacks_to_proc_creeps; // 0x1a84
            std::int32_t dagger_crit_chance; // 0x1a88
            source2sdk::client::AttackRecord_t m_iCritRecord; // 0x1a8c
            uint8_t _pad1a8e[0x2]; // 0x1a8e
            float duration; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_CoupdeGrace because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_PhantomAssassin_CoupdeGrace) == 0x1a98);
    };
};
