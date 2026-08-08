#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1b10
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Passive_Lotus_Pool : public source2sdk::client::CDOTA_Buff
        {
        public:
            float first_lotus_pickup_time; // 0x1a78
            float pickup_time_reduction_pct; // 0x1a7c
            float min_lotus_pickup_time; // 0x1a80
            float think_interval; // 0x1a84
            float radius; // 0x1a88
            float m_flRemainingPickupTime; // 0x1a8c
            float m_flCurrentMaxPickupTime; // 0x1a90
            std::int32_t m_nLotusSeconds; // 0x1a94
            source2sdk::client::CountdownTimer m_LotusTimer; // 0x1a98
            std::int32_t m_nRespawnSeconds; // 0x1ab0
            uint8_t _pad1ab4[0x4]; // 0x1ab4
            source2sdk::client::CountdownTimer m_RespawnTimer; // 0x1ab8
            std::int32_t m_nLotusesAvailable; // 0x1ad0
            uint8_t _pad1ad4[0x1c]; // 0x1ad4
            source2sdk::client::CountdownTimer m_LotusUpgradeTimer; // 0x1af0
            std::int32_t m_nLotusIndex; // 0x1b08
            uint8_t _pad1b0c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Passive_Lotus_Pool because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Passive_Lotus_Pool) == 0x1b10);
    };
};
