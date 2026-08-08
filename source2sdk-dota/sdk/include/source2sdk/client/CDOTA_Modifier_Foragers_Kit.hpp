#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DotaTree;
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
        class CDOTA_Modifier_Foragers_Kit : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            std::int32_t tree_radius; // 0x1a78
            std::int32_t max_trees; // 0x1a7c
            std::int32_t old_destroy_radius; // 0x1a80
            float tree_creation_interval; // 0x1a84
            uint8_t _pad1a88[0x18]; // 0x1a88
            source2sdk::client::ParticleIndex_t m_nStartFXIndex; // 0x1aa0
            uint8_t _pad1aa4[0x4]; // 0x1aa4
            source2sdk::client::C_DotaTree* m_pForagingTree; // 0x1aa8
            source2sdk::entity2::GameTime_t m_ForageTimer; // 0x1ab0
            source2sdk::entity2::GameTime_t m_NextForageTreeTime; // 0x1ab4
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Foragers_Kit because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Foragers_Kit) == 0x1ab8);
    };
};
