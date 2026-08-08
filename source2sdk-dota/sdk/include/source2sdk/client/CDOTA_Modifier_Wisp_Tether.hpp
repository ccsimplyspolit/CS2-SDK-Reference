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
        // Size: 0x1ad0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Wisp_Tether : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bInManaGained; // 0x1a78
            uint8_t _pad1a79[0x3]; // 0x1a79
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a7c
            // hStunnedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> hStunnedEntities;
            char hStunnedEntities[0x18]; // 0x1a80
            float stun_duration; // 0x1a98
            std::int32_t movespeed; // 0x1a9c
            std::int32_t self_bonus; // 0x1aa0
            bool m_bIsInRange; // 0x1aa4
            uint8_t _pad1aa5[0x3]; // 0x1aa5
            float radius; // 0x1aa8
            float latch_distance; // 0x1aac
            std::int32_t damage_absorb; // 0x1ab0
            float m_flHealthHealed; // 0x1ab4
            float m_flManaHealed; // 0x1ab8
            float tether_heal_amp; // 0x1abc
            float tether_mana_amp; // 0x1ac0
            source2sdk::entity2::GameTime_t m_flHealMessageTime; // 0x1ac4
            source2sdk::entity2::GameTime_t m_flManaMessageTime; // 0x1ac8
            source2sdk::client::ParticleIndex_t m_nTetherParticle; // 0x1acc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Wisp_Tether because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Wisp_Tether) == 0x1ad0);
    };
};
