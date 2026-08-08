#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        class CDOTA_Modifier_Largo_CroakOfGenius_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_portion_pct; // 0x1a78
            float damage_per_second; // 0x1a7c
            float damage_hp_pct; // 0x1a80
            float trigger_damage; // 0x1a84
            float damage_duration; // 0x1a88
            float m_flDamageInterval; // 0x1a8c
            float damage_aoe; // 0x1a90
            // m_hTriggerCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTriggerCaster;
            char m_hTriggerCaster[0x4]; // 0x1a94
            // m_hBuffCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBuffCaster;
            char m_hBuffCaster[0x4]; // 0x1a98
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            // m_vecDamageTicks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecDamageTicks;
            char m_vecDamageTicks[0x18]; // 0x1aa0
            bool m_bSpokeConcept; // 0x1ab8
            uint8_t _pad1ab9[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_CroakOfGenius_Debuff because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_CroakOfGenius_Debuff) == 0x1ac0);
    };
};
