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
        // Size: 0x1ae0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public source2sdk::client::CDOTA_Buff
        {
        public:
            float range; // 0x1a78
            float total_damage; // 0x1a7c
            float radius; // 0x1a80
            float max_channel_time; // 0x1a84
            float speed; // 0x1a88
            float channel_vision_radius; // 0x1a8c
            float channel_vision_interval; // 0x1a90
            float channel_vision_duration; // 0x1a94
            float channel_vision_step; // 0x1a98
            source2sdk::entity2::GameTime_t m_flLastChantTime; // 0x1a9c
            VectorWS m_vNextVisionLocation; // 0x1aa0
            Vector m_vCastDirection; // 0x1aac
            VectorWS m_vCastLoc; // 0x1ab8
            QAngle m_qCastAngle; // 0x1ac4
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1ad0
            bool m_bIsSpiritForm; // 0x1ad4
            uint8_t _pad1ad5[0x3]; // 0x1ad5
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1ad8
            uint8_t _pad1adc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_KeeperOfTheLight_Illuminate because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_KeeperOfTheLight_Illuminate) == 0x1ae0);
    };
};
