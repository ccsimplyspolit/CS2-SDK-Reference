#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_InkCreature : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a78
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x1a7c
            std::int32_t m_nAttackCount; // 0x1a80
            bool m_bIsLatched; // 0x1a84
            uint8_t _pad1a85[0x3]; // 0x1a85
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1a88
            uint8_t _pad1a8c[0x4]; // 0x1a8c
            source2sdk::client::CountdownTimer m_EnemyVision; // 0x1a90
            float latch_duration; // 0x1aa8
            float speed; // 0x1aac
            std::int32_t destroy_attacks; // 0x1ab0
            std::int32_t hero_attack_multiplier; // 0x1ab4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_InkCreature) == 0x1ab8);
    };
};
