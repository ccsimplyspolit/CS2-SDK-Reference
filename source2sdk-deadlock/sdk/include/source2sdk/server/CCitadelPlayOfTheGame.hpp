#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPlayOfTheGameState.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/server/PlayOfTheGamePlaybackData_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x1a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTriggerStarted"
        // static metadata: MNetworkVarNames "PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer"
        #pragma pack(push, 1)
        class CCitadelPlayOfTheGame
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            uint8_t _pad0030[0xe5]; // 0x30
            source2sdk::client::EPlayOfTheGameState m_eState; // 0x115            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "triggerChanged"
            bool m_bTriggerStarted; // 0x116            
            uint8_t _pad0117[0x1]; // 0x117
            // metadata: MNetworkEnable
            source2sdk::server::PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer; // 0x118            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCitadelPlayOfTheGame, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CCitadelPlayOfTheGame, m_eState) == 0x115);
        static_assert(offsetof(source2sdk::server::CCitadelPlayOfTheGame, m_bTriggerStarted) == 0x116);
        static_assert(offsetof(source2sdk::server::CCitadelPlayOfTheGame, m_playOfTheGameDataServer) == 0x118);
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayOfTheGame) == 0x1a8);
    };
};
