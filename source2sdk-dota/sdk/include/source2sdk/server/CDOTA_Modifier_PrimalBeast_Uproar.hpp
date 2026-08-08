#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Stacking_Base.hpp"

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
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_PrimalBeast_Uproar : public source2sdk::server::CDOTA_Modifier_Stacking_Base
        {
        public:
            std::int32_t stack_limit; // 0x1a98
            std::int32_t damage_limit; // 0x1a9c
            std::int32_t stack_count_increase_on_disable; // 0x1aa0
            float stack_duration; // 0x1aa4
            float damage_min; // 0x1aa8
            float damage_max; // 0x1aac
            std::int32_t bonus_damage_per_stack; // 0x1ab0
            source2sdk::client::ParticleIndex_t m_nFxIndexA; // 0x1ab4
            std::int32_t iCur_stack; // 0x1ab8
            float slow_duration; // 0x1abc
            uint8_t _pad1ac0[0x18]; // 0x1ac0
            float m_fTotalDamage; // 0x1ad8
            source2sdk::entity2::GameTime_t m_flLastStackTime; // 0x1adc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Uproar because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_PrimalBeast_Uproar) == 0x1ae0);
    };
};
