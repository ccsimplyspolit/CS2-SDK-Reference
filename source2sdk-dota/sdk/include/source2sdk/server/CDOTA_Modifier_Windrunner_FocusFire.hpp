#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_FocusFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78
            std::int32_t focusfire_damage_reduction; // 0x1a7c
            bool bActive; // 0x1a80
            uint8_t _pad1a81[0x3]; // 0x1a81
            std::int32_t bonus_attack_speed; // 0x1a84
            std::int32_t focusfire_fire_on_the_move; // 0x1a88
            bool m_bPause; // 0x1a8c
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            std::int32_t m_nNumArrowsLanded; // 0x1a90
            std::int32_t m_nDamageDealt; // 0x1a94
            std::int32_t m_nDamageDealtMax; // 0x1a98
            std::int32_t m_nTargetInitialHP; // 0x1a9c
            bool m_bHeroKilled; // 0x1aa0
            bool m_bRecentFocusFireAttack; // 0x1aa1
            bool m_bFocusFireProcessProcs; // 0x1aa2
            uint8_t _pad1aa3[0x15]; // 0x1aa3
            source2sdk::client::ParticleIndex_t m_nFXFocusFire; // 0x1ab8
            source2sdk::entity2::GameTime_t m_flLastFocusFireAttackTime; // 0x1abc
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_FocusFire because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_FocusFire) == 0x1ac0);
    };
};
