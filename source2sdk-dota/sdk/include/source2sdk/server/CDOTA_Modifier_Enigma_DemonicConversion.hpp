#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Kill.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x1aa8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enigma_DemonicConversion : public source2sdk::server::CDOTA_Modifier_Kill
        {
        public:
            std::int32_t m_iAttackCount; // 0x1a60            
            std::int32_t split_attack_count; // 0x1a64            
            float life_extension; // 0x1a68            
            std::int32_t eidolon_attack_range; // 0x1a6c            
            std::int32_t eidolon_bonus_damage; // 0x1a70            
            std::int32_t eidolon_bonus_attack_speed; // 0x1a74            
            std::int32_t eidelon_max_health; // 0x1a78            
            std::int32_t eidolon_magic_resist; // 0x1a7c            
            std::int32_t eidelon_base_damage; // 0x1a80            
            std::int32_t eidolon_damage_spread; // 0x1a84            
            std::int32_t eidelon_base_movespeed; // 0x1a88            
            std::int32_t eidolon_xp_bounty; // 0x1a8c            
            std::int32_t eidolon_gold_bounty_min; // 0x1a90            
            std::int32_t eidolon_gold_bounty_max; // 0x1a94            
            std::int32_t current_health_pct; // 0x1a98            
            bool m_bAllowSplit; // 0x1a9c            
            uint8_t _pad1a9d[0x3]; // 0x1a9d
            std::int32_t m_nSpawnNum; // 0x1aa0            
            // attack_target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> attack_target;
            char attack_target[0x4]; // 0x1aa4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Enigma_DemonicConversion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Enigma_DemonicConversion) == 0x1aa8);
    };
};
