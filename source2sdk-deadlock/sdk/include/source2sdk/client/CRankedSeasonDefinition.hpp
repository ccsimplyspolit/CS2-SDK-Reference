#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRankedSeasonIntervalDefinition.hpp"
#include "source2sdk/client/ECitadelRankedType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xe8
        //
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRankedSeasonDefinition
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_strSeasonLocName; // 0x8
            source2sdk::client::ECitadelRankedType m_eRankedType; // 0x10
            uint8_t _pad0014[0x4]; // 0x14
            // m_vecIntervals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CRankedSeasonIntervalDefinition> m_vecIntervals;
            char m_vecIntervals[0x18]; // 0x18
            // m_vecValidPartySizes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_vecValidPartySizes;
            char m_vecValidPartySizes[0x18]; // 0x30
            bool m_bCanPartyInCalibration; // 0x48
            uint8_t _pad0049[0x77]; // 0x49
            std::uint32_t m_unMinWins; // 0xc0
            std::uint32_t m_unMinHeroWins; // 0xc4
            std::uint32_t m_unMinHeroUnlocks; // 0xc8
            std::uint32_t m_unCalibrationMatches; // 0xcc
            std::uint32_t m_unBaseWinLossPointGrant; // 0xd0
            uint8_t _pad00d4[0x14];
        };
        #pragma pack(pop)

        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_strSeasonLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_eRankedType) == 0x10);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_vecIntervals) == 0x18);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_vecValidPartySizes) == 0x30);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_bCanPartyInCalibration) == 0x48);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_unMinWins) == 0xc0);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_unMinHeroWins) == 0xc4);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_unMinHeroUnlocks) == 0xc8);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_unCalibrationMatches) == 0xcc);
        static_assert(offsetof(source2sdk::client::CRankedSeasonDefinition, m_unBaseWinLossPointGrant) == 0xd0);

        static_assert(sizeof(source2sdk::client::CRankedSeasonDefinition) == 0xe8);
    };
};
