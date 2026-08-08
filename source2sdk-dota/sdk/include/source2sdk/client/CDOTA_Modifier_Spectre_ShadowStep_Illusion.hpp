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
        // Size: 0x1a98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Spectre_ShadowStep_Illusion : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t radius; // 0x1a78
            std::int32_t bonus_move_speed_illusion_pct; // 0x1a7c
            std::int32_t move_speed; // 0x1a80
            float duration; // 0x1a84
            float m_flSpeed; // 0x1a88
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a8c
            bool m_bReachedTarget; // 0x1a90
            uint8_t _pad1a91[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Spectre_ShadowStep_Illusion because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Spectre_ShadowStep_Illusion) == 0x1a98);
    };
};
