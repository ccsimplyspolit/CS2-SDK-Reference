#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FacelessVoid_TimeDilation_Slow : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78
            std::int32_t m_nAffectedAbilities; // 0x1a7c
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0x1a80
            std::int32_t slow; // 0x1a84
            std::int32_t cooldown_percentage; // 0x1a88
            std::int32_t damage_per_stack; // 0x1a8c
            std::int32_t base_damage; // 0x1a90
            uint8_t _pad1a94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeDilation_Slow because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_FacelessVoid_TimeDilation_Slow) == 0x1a98);
    };
};
