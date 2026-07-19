#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xd0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "int m_nTotalPausedTicks"
        // static metadata: MNetworkVarNames "int m_nPauseStartTick"
        // static metadata: MNetworkVarNames "bool m_bGamePaused"
        #pragma pack(push, 1)
        class CGameRules
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            char m_szQuestName[128]; // 0x30            
            std::int32_t m_nQuestPhase; // 0xb0            
            std::uint32_t m_nLastMatchTime; // 0xb4            
            std::uint64_t m_nLastMatchTime_MatchID64; // 0xb8            
            // metadata: MNetworkEnable
            std::int32_t m_nTotalPausedTicks; // 0xc0            
            // metadata: MNetworkEnable
            std::int32_t m_nPauseStartTick; // 0xc4            
            // metadata: MNetworkEnable
            bool m_bGamePaused; // 0xc8            
            uint8_t _pad00c9[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGameRules, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CGameRules, m_szQuestName) == 0x30);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nQuestPhase) == 0xb0);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nLastMatchTime) == 0xb4);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nLastMatchTime_MatchID64) == 0xb8);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nTotalPausedTicks) == 0xc0);
        static_assert(offsetof(source2sdk::server::CGameRules, m_nPauseStartTick) == 0xc4);
        static_assert(offsetof(source2sdk::server::CGameRules, m_bGamePaused) == 0xc8);
        
        static_assert(sizeof(source2sdk::server::CGameRules) == 0xd0);
    };
};
