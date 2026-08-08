#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x1b00
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_range; // 0x1a78
            float attack_time; // 0x1a7c
            float attack_projectile_time; // 0x1a80
            std::int32_t projectile_speed; // 0x1a84
            float turn_time; // 0x1a88
            float turn_angle; // 0x1a8c
            float shoot_angle; // 0x1a90
            float m_flTurnRate; // 0x1a94
            float m_flTargetYaw; // 0x1a98
            float m_flLastTurnTime; // 0x1a9c
            source2sdk::entity2::GameTick_t m_nLastTickCount; // 0x1aa0
            uint8_t _pad1aa4[0x4]; // 0x1aa4
            bool m_bHappyMonkeyCondition; // 0x1aa8
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            // m_hAngryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAngryTarget;
            char m_hAngryTarget[0x4]; // 0x1aac
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x1ab0
            uint8_t _pad1ab4[0x4]; // 0x1ab4
            source2sdk::server::CountdownTimer m_AttackTimer; // 0x1ab8
            source2sdk::server::CountdownTimer m_AttackProjectileTimer; // 0x1ad0
            source2sdk::server::CountdownTimer m_HappyTimer; // 0x1ae8
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker) == 0x1b00);
    };
};
