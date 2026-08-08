#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsBuffedAttack; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            std::int32_t heal_pct; // 0x1a7c
            std::int32_t bonus_damage; // 0x1a80
            float heal_radius; // 0x1a84
            std::int32_t heal_from_creeps; // 0x1a88
            std::int32_t allied_healing_pct; // 0x1a8c
            bool triggered_by_celestial_hammer; // 0x1a90
            uint8_t _pad1a91[0x7]; // 0x1a91
            // hTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hTargets;
            char hTargets[0x18]; // 0x1a98
            float m_flTotalToHeal; // 0x1ab0
            bool m_bHasProccedCooldownReduction; // 0x1ab4
            uint8_t _pad1ab5[0x3]; // 0x1ab5
            float cooldown_reduction; // 0x1ab8
            float movespeed_bonus_duration; // 0x1abc
            float movespeed_bonus_from_creeps; // 0x1ac0
            bool m_bShouldRecreate; // 0x1ac4
            uint8_t _pad1ac5[0x3];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_Luminosity_Attack_Buff) == 0x1ac8);
    };
};
