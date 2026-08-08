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
        // Size: 0x1ac8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DeathProphet_Scepter : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float spirit_speed; // 0x1a7c
            float max_distance; // 0x1a80
            float give_up_distance; // 0x1a84
            float min_damage; // 0x1a88
            float max_damage; // 0x1a8c
            std::int32_t heal_percent; // 0x1a90
            std::int32_t spirit_duration; // 0x1a94
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x1a98
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x1a9c
            bool m_bExpired; // 0x1aa0
            uint8_t _pad1aa1[0x7]; // 0x1aa1
            source2sdk::client::sSpiritInfo* m_SpiritInfo; // 0x1aa8
            uint8_t _pad1ab0[0x18];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Scepter because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DeathProphet_Scepter) == 0x1ac8);
    };
};
