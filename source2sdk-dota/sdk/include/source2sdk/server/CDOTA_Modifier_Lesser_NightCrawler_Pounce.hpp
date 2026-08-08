#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1ac0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lesser_NightCrawler_Pounce : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTime; // 0x1a78
            float m_flInitialVelocity; // 0x1a7c
            VectorWS m_vStartPosition; // 0x1a80
            Vector m_vTargetHorizontalDirection; // 0x1a8c
            float m_flCurrentTimeHoriz; // 0x1a98
            float m_flCurrentTimeVert; // 0x1a9c
            bool m_bInterrupted; // 0x1aa0
            uint8_t _pad1aa1[0x3]; // 0x1aa1
            std::int32_t pounce_distance; // 0x1aa4
            float pounce_speed; // 0x1aa8
            float pounce_acceleration; // 0x1aac
            std::int32_t pounce_radius; // 0x1ab0
            std::int32_t pounce_damage; // 0x1ab4
            float leash_duration; // 0x1ab8
            uint8_t _pad1abc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Lesser_NightCrawler_Pounce because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lesser_NightCrawler_Pounce) == 0x1ac0);
    };
};
