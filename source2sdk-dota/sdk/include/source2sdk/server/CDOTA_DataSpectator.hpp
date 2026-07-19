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
        // Size: 0x1d70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_DataSpectator : public source2sdk::server::CDOTA_DataNonSpectator
        {
        public:
            // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_1;
            char m_hPowerupRune_1[0x4]; // 0x1c80            
            // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_2;
            char m_hPowerupRune_2[0x4]; // 0x1c84            
            // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_1;
            char m_hBountyRune_1[0x4]; // 0x1c88            
            // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_2;
            char m_hBountyRune_2[0x4]; // 0x1c8c            
            // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_3;
            char m_hBountyRune_3[0x4]; // 0x1c90            
            // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_4;
            char m_hBountyRune_4[0x4]; // 0x1c94            
            // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_1;
            char m_hXPRune_1[0x4]; // 0x1c98            
            // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_2;
            char m_hXPRune_2[0x4]; // 0x1c9c            
            std::int32_t m_iNetWorth[24]; // 0x1ca0            
            float m_fRadiantWinProbability; // 0x1d00            
            uint8_t _pad1d04[0x4]; // 0x1d04
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x68]; // 0x1d08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DataSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_DataSpectator) == 0x1d70);
    };
};
