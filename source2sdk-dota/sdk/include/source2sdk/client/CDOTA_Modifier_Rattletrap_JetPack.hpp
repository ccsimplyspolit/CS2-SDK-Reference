#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1af8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_JetPack : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nMovementSpeed; // 0x1a78
            std::int32_t bonus_speed; // 0x1a7c
            float turn_rate; // 0x1a80
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1a84
            float tick_interval; // 0x1a88
            float m_flFacingTarget; // 0x1a8c
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1a90
            uint8_t _pad1a94[0x4]; // 0x1a94
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1a98
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x1ab0
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x1ac8
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x1ae0
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_JetPack because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Rattletrap_JetPack) == 0x1af8);
    };
};
