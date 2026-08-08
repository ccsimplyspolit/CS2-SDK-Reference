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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float static_remnant_radius; // 0x1a78
            float static_remnant_damage_radius; // 0x1a7c
            float static_remnant_damage; // 0x1a80
            float static_remnant_delay; // 0x1a84
            float static_remnant_travel_speed; // 0x1a88
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a8c
            std::int32_t m_iSearchRadius; // 0x1a90
            std::int32_t m_iDamageRadius; // 0x1a94
            bool m_bDoesMove; // 0x1a98
            bool m_bReachedTargetLocation; // 0x1a99
            uint8_t _pad1a9a[0x2]; // 0x1a9a
            VectorWS m_vTargetLocation; // 0x1a9c
            source2sdk::entity2::GameTime_t m_flCreateTime; // 0x1aa8
            source2sdk::entity2::GameTime_t m_flLastMoveTime; // 0x1aac
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_StormSpirit_StaticRemnantThinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_StormSpirit_StaticRemnantThinker) == 0x1ab0);
    };
};
