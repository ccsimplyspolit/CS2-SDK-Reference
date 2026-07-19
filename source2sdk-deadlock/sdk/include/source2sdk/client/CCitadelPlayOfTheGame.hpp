#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPlayOfTheGameState.hpp"
#include "source2sdk/client/PlayOfTheGamePlaybackData_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

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
        // Size: 0x160
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
            uint8_t _pad0030[0x98]; // 0x30
            source2sdk::client::EPlayOfTheGameState m_eState; // 0xc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "triggerChanged"
            bool m_bTriggerStarted; // 0xc9            
            uint8_t _pad00ca[0x6]; // 0xca
            // metadata: MNetworkEnable
            source2sdk::client::PlayOfTheGamePlaybackData_t m_playOfTheGameDataServer; // 0xd0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelPlayOfTheGame, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelPlayOfTheGame, m_eState) == 0xc8);
        static_assert(offsetof(source2sdk::client::CCitadelPlayOfTheGame, m_bTriggerStarted) == 0xc9);
        static_assert(offsetof(source2sdk::client::CCitadelPlayOfTheGame, m_playOfTheGameDataServer) == 0xd0);
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayOfTheGame) == 0x160);
    };
};
