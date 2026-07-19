#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSPerRoundStats_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0xc0
        // Has VTable
        #pragma pack(push, 1)
        struct CSMatchStats_t : public source2sdk::server::CSPerRoundStats_t
        {
        public:
            std::int32_t m_iEnemy5Ks; // 0x68            
            std::int32_t m_iEnemy4Ks; // 0x6c            
            std::int32_t m_iEnemy3Ks; // 0x70            
            std::int32_t m_iEnemyKnifeKills; // 0x74            
            std::int32_t m_iEnemyTaserKills; // 0x78            
            std::int32_t m_iEnemy2Ks; // 0x7c            
            std::int32_t m_iUtility_Count; // 0x80            
            std::int32_t m_iUtility_Successes; // 0x84            
            std::int32_t m_iUtility_Enemies; // 0x88            
            std::int32_t m_iFlash_Count; // 0x8c            
            std::int32_t m_iFlash_Successes; // 0x90            
            float m_flHealthPointsRemovedTotal; // 0x94            
            float m_flHealthPointsDealtTotal; // 0x98            
            std::int32_t m_nShotsFiredTotal; // 0x9c            
            std::int32_t m_nShotsOnTargetTotal; // 0xa0            
            std::int32_t m_i1v1Count; // 0xa4            
            std::int32_t m_i1v1Wins; // 0xa8            
            std::int32_t m_i1v2Count; // 0xac            
            std::int32_t m_i1v2Wins; // 0xb0            
            std::int32_t m_iEntryCount; // 0xb4            
            std::int32_t m_iEntryWins; // 0xb8            
            uint8_t _pad00bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSMatchStats_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSMatchStats_t) == 0xc0);
    };
};
