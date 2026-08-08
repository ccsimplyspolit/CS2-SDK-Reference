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
        // Size: 0x1aa0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Enchantress_Little_Friends_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a78
            std::int32_t m_nAlliesTaunted; // 0x1a7c
            bool m_bRelicTriggered; // 0x1a80
            uint8_t _pad1a81[0x3]; // 0x1a81
            float radius; // 0x1a84
            std::int32_t damage_amplification; // 0x1a88
            std::int32_t damage_reduction; // 0x1a8c
            float root_base_duration; // 0x1a90
            float root_per_target; // 0x1a94
            float max_root; // 0x1a98
            source2sdk::entity2::GameTime_t m_flLastSeen; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Enchantress_Little_Friends_Aura because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Enchantress_Little_Friends_Aura) == 0x1aa0);
    };
};
