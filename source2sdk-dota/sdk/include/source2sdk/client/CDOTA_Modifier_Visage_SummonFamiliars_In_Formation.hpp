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
        // Size: 0x1ab8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_SummonFamiliars_In_Formation : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x1a78
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x1a7c
            std::int32_t familiar_index; // 0x1a80
            std::int32_t back_distance; // 0x1a84
            std::int32_t side_distance; // 0x1a88
            VectorWS m_vecDesiredPosition; // 0x1a8c
            float max_distance; // 0x1a98
            float return_distance; // 0x1a9c
            float attack_range_buffer; // 0x1aa0
            float recall_duration; // 0x1aa4
            bool m_bTeleporting; // 0x1aa8
            uint8_t _pad1aa9[0x3]; // 0x1aa9
            std::int32_t familiar_attack_range; // 0x1aac
            float additional_target_search_radius; // 0x1ab0
            uint8_t _pad1ab4[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_SummonFamiliars_In_Formation because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Visage_SummonFamiliars_In_Formation) == 0x1ab8);
    };
};
