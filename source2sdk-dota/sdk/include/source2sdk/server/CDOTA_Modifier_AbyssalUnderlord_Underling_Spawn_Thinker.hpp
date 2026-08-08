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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float underling_search_radius; // 0x1a78
            std::int32_t warrior_health; // 0x1a7c
            std::int32_t warrior_damage; // 0x1a80
            std::int32_t archer_health; // 0x1a84
            std::int32_t archer_damage; // 0x1a88
            std::int32_t hull_radius; // 0x1a8c
            std::int32_t gold_bounty; // 0x1a90
            std::int32_t xp_bounty; // 0x1a94
            // m_vecAttackedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecAttackedEnemies;
            char m_vecAttackedEnemies[0x18]; // 0x1a98
            bool m_bSpawnsStarted; // 0x1ab0
            uint8_t _pad1ab1[0x3]; // 0x1ab1
            std::int32_t nSpawnsCompleted; // 0x1ab4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_Underling_Spawn_Thinker) == 0x1ab8);
    };
};
