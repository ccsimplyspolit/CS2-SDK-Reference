#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        class CDOTA_Modifier_Boss_DarkWillow_Bedlam : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flRotation; // 0x1a78
            // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hWisp;
            char m_hWisp[0x4]; // 0x1a7c
            source2sdk::entity2::GameTime_t m_flLastAttack; // 0x1a80
            bool reversed; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            std::int32_t roaming_radius; // 0x1a88
            std::int32_t attack_radius; // 0x1a8c
            float roaming_seconds_per_rotation; // 0x1a90
            float attack_interval; // 0x1a94
            bool m_bSetupWarning; // 0x1a98
            uint8_t _pad1a99[0x3]; // 0x1a99
            source2sdk::client::ParticleIndex_t m_nPreviewFX; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Boss_DarkWillow_Bedlam because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Boss_DarkWillow_Bedlam) == 0x1aa0);
    };
};
