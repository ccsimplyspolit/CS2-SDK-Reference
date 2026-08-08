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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Phoenix_IcarusYoink : public source2sdk::client::CDOTA_Buff
        {
        public:
            VectorWS m_vSource; // 0x1a78
            VectorWS m_vTarget; // 0x1a84
            Vector m_vDirection; // 0x1a90
            QAngle m_angDirection; // 0x1a9c
            float m_flCurrentTime; // 0x1aa8
            float dash_length; // 0x1aac
            float dash_width; // 0x1ab0
            float hit_radius; // 0x1ab4
            float burn_duration; // 0x1ab8
            float dive_duration; // 0x1abc
            float impact_damage; // 0x1ac0
            uint8_t _pad1ac4[0x4]; // 0x1ac4
            // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEntities;
            char m_vecHitEntities[0x18]; // 0x1ac8
            // hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> hTarget;
            char hTarget[0x4]; // 0x1ae0
            uint8_t _pad1ae4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Phoenix_IcarusYoink because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Phoenix_IcarusYoink) == 0x1ae8);
    };
};
