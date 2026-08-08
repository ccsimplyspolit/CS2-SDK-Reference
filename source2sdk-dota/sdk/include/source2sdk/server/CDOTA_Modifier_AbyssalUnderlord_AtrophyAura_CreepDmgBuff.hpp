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
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float bonus_damage_from_creep; // 0x1a78
            float bonus_shared_by_allies_pct; // 0x1a7c
            float m_flModifier; // 0x1a80
            uint8_t _pad1a84[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff) == 0x1a88);
    };
};
