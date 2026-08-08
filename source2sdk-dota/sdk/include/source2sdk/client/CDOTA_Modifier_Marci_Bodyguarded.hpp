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
        class CDOTA_Modifier_Marci_Bodyguarded : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bodyguard_attack_range_buffer; // 0x1a78
            float lifesteal_pct; // 0x1a7c
            std::int32_t bonus_damage; // 0x1a80
            std::int32_t max_partner_penalty; // 0x1a84
            std::int32_t creep_lifesteal_reduction_pct; // 0x1a88
            std::int32_t shared_healing_percent; // 0x1a8c
            float shared_barrier; // 0x1a90
            float shared_barrier_replenish_amount; // 0x1a94
            float counter_cooldown; // 0x1a98
            source2sdk::entity2::GameTime_t m_flLastCounterTime; // 0x1a9c
            bool bHasCountered; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            std::int32_t m_nDamageAbsorbed; // 0x1aa4
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Marci_Bodyguarded because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Marci_Bodyguarded) == 0x1ab0);
    };
};
