#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Juggernaut_Omnislash : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78
            // m_hLastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastTarget;
            char m_hLastTarget[0x4]; // 0x1a7c
            std::int32_t m_nJumps; // 0x1a80
            std::int32_t bonus_damage; // 0x1a84
            std::int32_t bonus_attack_speed; // 0x1a88
            float omni_slash_radius; // 0x1a8c
            float attack_rate_multiplier; // 0x1a90
            bool m_bFirstHit; // 0x1a94
            uint8_t _pad1a95[0x3]; // 0x1a95
            std::int32_t m_iTotalDamage; // 0x1a98
            std::int32_t m_iHeroDamage; // 0x1a9c
            std::int32_t m_iKilledHeroes; // 0x1aa0
            source2sdk::entity2::GameTime_t m_fNextAttackTime; // 0x1aa4
            bool m_bScepterCast; // 0x1aa8
            bool m_bReflection; // 0x1aa9
            bool m_bEndNext; // 0x1aaa
            uint8_t _pad1aab[0x5];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Juggernaut_Omnislash because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Juggernaut_Omnislash) == 0x1ab0);
    };
};
