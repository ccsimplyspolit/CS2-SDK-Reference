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
        class CDOTA_Modifier_Nevermore_FeastOfSouls_Collection : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_collection_count; // 0x1a78
            std::int32_t soul_collection_per_interval; // 0x1a7c
            float soul_collection_radius; // 0x1a80
            float soul_collection_interval; // 0x1a84
            std::int32_t soul_collection_per_hero; // 0x1a88
            std::int32_t soul_collection_per_creep; // 0x1a8c
            std::int32_t bonus_attack_speed; // 0x1a90
            std::int32_t cast_speed_pct; // 0x1a94
            std::int32_t m_nSoulsCollected; // 0x1a98
            uint8_t _pad1a9c[0x4]; // 0x1a9c
            // m_hSoulCollectionList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSoulCollectionList;
            char m_hSoulCollectionList[0x18]; // 0x1aa0
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Nevermore_FeastOfSouls_Collection because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nevermore_FeastOfSouls_Collection) == 0x1ab8);
    };
};
