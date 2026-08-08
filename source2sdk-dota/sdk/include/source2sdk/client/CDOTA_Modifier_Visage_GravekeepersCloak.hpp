#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Modifier_Visage_GravekeepersCloak_Stack;
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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_GravekeepersCloak : public source2sdk::client::CDOTA_Buff
        {
        public:
            float damage_reduction; // 0x1a78
            std::int32_t max_layers; // 0x1a7c
            float minimum_damage; // 0x1a80
            float minimum_damage_familiars; // 0x1a84
            std::int32_t recovery_time; // 0x1a88
            float radius; // 0x1a8c
            float max_damage_reduction; // 0x1a90
            std::int32_t armor; // 0x1a94
            source2sdk::client::ParticleIndex_t m_nFXIndex[4]; // 0x1a98
            source2sdk::client::ParticleIndex_t m_nFXIndexB; // 0x1aa8
            uint8_t _pad1aac[0x4]; // 0x1aac
            // m_vecStacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak_Stack*> m_vecStacks;
            char m_vecStacks[0x18]; // 0x1ab0
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_GravekeepersCloak) == 0x1ac8);
    };
};
