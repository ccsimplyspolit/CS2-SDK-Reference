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
        struct sSpiritInfo;
    };
};
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
        // Size: 0x1af8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_Exorcism : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            std::int32_t spirit_speed; // 0x1a7c
            std::int32_t max_distance; // 0x1a80
            std::int32_t give_up_distance; // 0x1a84
            std::int32_t heal_percent; // 0x1a88
            std::int32_t spirit_duration; // 0x1a8c
            float ghost_spawn_rate; // 0x1a90
            std::int32_t movement_bonus; // 0x1a94
            float m_flBonusExorcismDuration; // 0x1a98
            std::int32_t m_iSpirits; // 0x1a9c
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1aa0
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x1aa4
            source2sdk::entity2::GameTime_t m_fSpawnTime; // 0x1aa8
            bool m_bFirstSpawn; // 0x1aac
            bool m_bCommentedOnExpired; // 0x1aad
            bool m_bForceExpired; // 0x1aae
            uint8_t _pad1aaf[0x1]; // 0x1aaf
            // m_vecDeadHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecDeadHeroes;
            char m_vecDeadHeroes[0x18]; // 0x1ab0
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSpiritInfo*> m_vecSpirits;
            char m_vecSpirits[0x18]; // 0x1ac8
            uint8_t _pad1ae0[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Exorcism because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DeathProphet_Exorcism) == 0x1af8);
    };
};
