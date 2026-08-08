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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AghsFort_Firefly : public source2sdk::client::CDOTA_Buff
        {
        public:
            float pool_duration; // 0x1a78
            std::int32_t radius; // 0x1a7c
            std::int32_t m_ifirefly_Active; // 0x1a80
            std::int32_t tree_radius; // 0x1a84
            std::int32_t damage_pct_per_second; // 0x1a88
            std::int32_t movement_speed; // 0x1a8c
            float trail_placement_duration; // 0x1a90
            float burn_linger_duration; // 0x1a94
            bool m_bActive; // 0x1a98
            uint8_t _pad1a99[0x3]; // 0x1a99
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a9c
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1aa0
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1aa4
            VectorWS m_vLastFirePoolLoc; // 0x1aa8
            uint8_t _pad1ab4[0x4]; // 0x1ab4
            // m_vFirePoolLocations has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<VectorWS> m_vFirePoolLocations;
            char m_vFirePoolLocations[0x18]; // 0x1ab8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_Firefly because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AghsFort_Firefly) == 0x1ad0);
    };
};
