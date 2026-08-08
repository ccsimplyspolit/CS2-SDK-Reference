#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_TempTree;
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
        // Size: 0x1ab0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Furion_Money_Tree : public source2sdk::client::CDOTA_Buff
        {
        public:
            float gold_per_bag; // 0x1a78
            float tick_interval; // 0x1a7c
            float tree_duration; // 0x1a80
            std::int32_t min_throw_range; // 0x1a84
            std::int32_t max_throw_range; // 0x1a88
            float gold_bag_duration; // 0x1a8c
            std::int32_t bags_per_tick; // 0x1a90
            float hero_level_gold_multiplier; // 0x1a94
            // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_TempTree> m_hTree;
            char m_hTree[0x4]; // 0x1a98
            std::int32_t nTargetHeroLevel; // 0x1a9c
            bool m_bInitialized; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            // m_hObstruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hObstruction;
            char m_hObstruction[0x4]; // 0x1aa4
            source2sdk::entity2::GameTime_t m_timeLastGoldBagSpawn; // 0x1aa8
            uint8_t _pad1aac[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Furion_Money_Tree because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Furion_Money_Tree) == 0x1ab0);
    };
};
