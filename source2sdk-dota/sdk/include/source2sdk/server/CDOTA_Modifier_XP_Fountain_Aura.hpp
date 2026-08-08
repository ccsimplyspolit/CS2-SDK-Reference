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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_XP_Fountain_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1a78
            bool m_bIsGranting; // 0x1a79
            bool m_bInitialized; // 0x1a7a
            bool m_bSetFoW; // 0x1a7b
            source2sdk::entity2::GameTime_t m_flNextXpActivationTime; // 0x1a7c
            float countdown_time; // 0x1a80
            float think_interval; // 0x1a84
            float m_flRemainingCountDownTime; // 0x1a88
            float radius; // 0x1a8c
            float m_flPauseDuration; // 0x1a90
            bool m_bCapturableByEnemy; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            source2sdk::client::ParticleIndex_t m_nFxProgress; // 0x1a98
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_XP_Fountain_Aura because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_XP_Fountain_Aura) == 0x1aa0);
    };
};
