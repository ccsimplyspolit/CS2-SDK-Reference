#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelTriggerMultiCapturePoint.hpp"
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
        // Size: 0x1400
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_KothCashIn : public source2sdk::server::CCitadelTriggerMultiCapturePoint
        {
        public:
            float m_flAmberFavored; // 0xc28            
            float m_flSapphireFavored; // 0xc2c            
            std::int32_t m_iWinningTeam; // 0xc30            
            std::int32_t m_iTroopersToSpawn; // 0xc34            
            uint8_t _pad0c38[0x79c]; // 0xc38
            // m_hDropOffPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDropOffPlayer;
            char m_hDropOffPlayer[0x4]; // 0x13d4            
            std::int32_t m_nGold; // 0x13d8            
            std::int32_t m_nTeamBias; // 0x13dc            
            std::int32_t m_nKOTHIdx; // 0x13e0            
            std::int32_t m_nAmberNetworth; // 0x13e4            
            std::int32_t m_nSapphireNetworth; // 0x13e8            
            std::int32_t m_nAmberGoldValue; // 0x13ec            
            std::int32_t m_nSapphireGoldValue; // 0x13f0            
            bool m_bGiveUpHasWarned; // 0x13f4            
            bool m_bGivenUp; // 0x13f5            
            bool m_bWasBlockedAtAnyPoint; // 0x13f6            
            uint8_t _pad13f7[0x1]; // 0x13f7
            source2sdk::client::ParticleIndex_t m_nZoneParticle; // 0x13f8            
            bool m_bCashedIn; // 0x13fc            
            bool m_bPlayBlock; // 0x13fd            
            bool m_bPlayContested; // 0x13fe            
            uint8_t _pad13ff[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_KothCashIn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_KothCashIn) == 0x1400);
    };
};
