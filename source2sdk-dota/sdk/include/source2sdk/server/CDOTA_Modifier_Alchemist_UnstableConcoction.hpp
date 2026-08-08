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
        class CDOTA_Modifier_Alchemist_UnstableConcoction : public source2sdk::client::CDOTA_Buff
        {
        public:
            float brew_time; // 0x1a78
            float brew_explosion; // 0x1a7c
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1a80
            source2sdk::entity2::GameTime_t m_fLastAlertTime; // 0x1a84
            source2sdk::client::ParticleIndex_t m_nConcoctionFXIndex; // 0x1a88
            bool m_bHasStunned; // 0x1a8c
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            std::int32_t damage_resistance; // 0x1a90
            std::int32_t move_speed; // 0x1a94
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Alchemist_UnstableConcoction because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Alchemist_UnstableConcoction) == 0x1a98);
    };
};
