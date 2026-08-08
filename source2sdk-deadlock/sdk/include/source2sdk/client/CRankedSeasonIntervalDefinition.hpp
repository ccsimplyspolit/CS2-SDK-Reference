#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/RankInterval_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        //
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRankedSeasonIntervalDefinition
        {
        public:
            source2sdk::client::RankInterval_t m_unInterval; // 0x0
            uint8_t _pad0001[0x3]; // 0x1
            std::uint32_t m_rtIntervalStartTimestamp; // 0x4
            std::uint32_t m_rtIntervalEndTimestamp; // 0x8
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::CRankedSeasonIntervalDefinition, m_unInterval) == 0x0);
        static_assert(offsetof(source2sdk::client::CRankedSeasonIntervalDefinition, m_rtIntervalStartTimestamp) == 0x4);
        static_assert(offsetof(source2sdk::client::CRankedSeasonIntervalDefinition, m_rtIntervalEndTimestamp) == 0x8);

        static_assert(sizeof(source2sdk::client::CRankedSeasonIntervalDefinition) == 0xc);
    };
};
