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
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_Chain_Frost_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageToHeroes; // 0x1a78
            std::int32_t m_nHeroesKilled; // 0x1a7c
            std::int32_t m_nJumps; // 0x1a80
            bool m_bFirstJump; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1a88
            // m_hAvoidTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAvoidTarget;
            char m_hAvoidTarget[0x4]; // 0x1a8c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lich_Chain_Frost_Thinker) == 0x1a90);
    };
};
