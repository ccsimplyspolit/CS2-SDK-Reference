#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_DataNonSpectator.hpp"
#include "source2sdk/client/DOTAThreatLevelInfo_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x21d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_DataSpectator : public source2sdk::client::C_DOTA_DataNonSpectator
        {
        public:
            // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPowerupRune_1;
            char m_hPowerupRune_1[0x4]; // 0x1e40
            // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPowerupRune_2;
            char m_hPowerupRune_2[0x4]; // 0x1e44
            // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBountyRune_1;
            char m_hBountyRune_1[0x4]; // 0x1e48
            // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBountyRune_2;
            char m_hBountyRune_2[0x4]; // 0x1e4c
            // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBountyRune_3;
            char m_hBountyRune_3[0x4]; // 0x1e50
            // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBountyRune_4;
            char m_hBountyRune_4[0x4]; // 0x1e54
            // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hXPRune_1;
            char m_hXPRune_1[0x4]; // 0x1e58
            // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hXPRune_2;
            char m_hXPRune_2[0x4]; // 0x1e5c
            std::int32_t m_iNetWorth[24]; // 0x1e60
            float m_fRadiantWinProbability; // 0x1ec0
            std::int32_t m_iGoldSpentOnSupport[24]; // 0x1ec4
            std::int32_t m_iHeroDamage[24]; // 0x1f24
            std::int32_t m_nWardsPurchased[24]; // 0x1f84
            std::int32_t m_nWardsPlaced[24]; // 0x1fe4
            std::int32_t m_nWardsDestroyed[24]; // 0x2044
            std::int32_t m_nRunesActivated[24]; // 0x20a4
            std::int32_t m_nCampsStacked[24]; // 0x2104
            uint8_t _pad2164[0x4]; // 0x2164
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x68]; // 0x2168
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in C_DOTA_DataSpectator because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::C_DOTA_DataSpectator) == 0x21d0);
    };
};
