#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public source2sdk::client::CDOTA_Buff
        {
        public:
            float challenge_duration; // 0x1a78
            float reveal_duration; // 0x1a7c
            float reveal_delay; // 0x1a80
            float completed_cooldown; // 0x1a84
            float think_interval; // 0x1a88
            float acknowledge_range; // 0x1a8c
            uint8_t _pad1a90[0x4]; // 0x1a90
            source2sdk::entity2::GameTime_t m_flRevealTime; // 0x1a94
            source2sdk::client::ParticleIndex_t m_nOverheadFXIndex; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x1aa0);
    };
};
