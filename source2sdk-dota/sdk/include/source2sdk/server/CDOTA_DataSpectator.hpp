#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_DataNonSpectator.hpp"
#include "source2sdk/server/DOTAThreatLevelInfo_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1dd8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_DataSpectator : public source2sdk::server::CDOTA_DataNonSpectator
        {
        public:
            // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_1;
            char m_hPowerupRune_1[0x4]; // 0x1ce8
            // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_2;
            char m_hPowerupRune_2[0x4]; // 0x1cec
            // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_1;
            char m_hBountyRune_1[0x4]; // 0x1cf0
            // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_2;
            char m_hBountyRune_2[0x4]; // 0x1cf4
            // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_3;
            char m_hBountyRune_3[0x4]; // 0x1cf8
            // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_4;
            char m_hBountyRune_4[0x4]; // 0x1cfc
            // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_1;
            char m_hXPRune_1[0x4]; // 0x1d00
            // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_2;
            char m_hXPRune_2[0x4]; // 0x1d04
            std::int32_t m_iNetWorth[24]; // 0x1d08
            float m_fRadiantWinProbability; // 0x1d68
            uint8_t _pad1d6c[0x4]; // 0x1d6c
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x68]; // 0x1d70
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_DataSpectator because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_DataSpectator) == 0x1dd8);
    };
};
