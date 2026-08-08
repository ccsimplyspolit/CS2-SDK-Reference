#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Kill.hpp"

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
        class CDOTA_Modifier_Enigma_DemonicConversion : public source2sdk::client::CDOTA_Modifier_Kill
        {
        public:
            std::int32_t m_iAttackCount; // 0x1a80
            std::int32_t split_attack_count; // 0x1a84
            float life_extension; // 0x1a88
            std::int32_t eidolon_attack_range; // 0x1a8c
            std::int32_t eidolon_bonus_damage; // 0x1a90
            std::int32_t eidolon_bonus_attack_speed; // 0x1a94
            std::int32_t eidelon_max_health; // 0x1a98
            std::int32_t eidolon_magic_resist; // 0x1a9c
            std::int32_t eidelon_base_damage; // 0x1aa0
            std::int32_t eidolon_damage_spread; // 0x1aa4
            std::int32_t eidelon_base_movespeed; // 0x1aa8
            std::int32_t eidolon_xp_bounty; // 0x1aac
            std::int32_t eidolon_gold_bounty_min; // 0x1ab0
            std::int32_t eidolon_gold_bounty_max; // 0x1ab4
            std::int32_t current_health_pct; // 0x1ab8
            bool m_bAllowSplit; // 0x1abc
            uint8_t _pad1abd[0x3]; // 0x1abd
            std::int32_t m_nSpawnNum; // 0x1ac0
            uint8_t _pad1ac4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enigma_DemonicConversion) == 0x1ac8);
    };
};
