#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/PlayOfTheGameTrigger_t.hpp"

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
        // Size: 0x90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPlayerSlot m_vecParticipants"
        // static metadata: MNetworkVarNames "PlayOfTheGameTrigger_t m_vecTriggers"
        // static metadata: MNetworkVarNames "GameTime_t m_tBeginTimeWithPrewarm"
        // static metadata: MNetworkVarNames "GameTime_t m_tEndTime"
        #pragma pack(push, 1)
        struct PlayOfTheGamePlaybackData_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MNetworkEnable
            // m_vecParticipants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CPlayerSlot> m_vecParticipants;
            char m_vecParticipants[0x18]; // 0x8            
            // metadata: MNetworkEnable
            // m_vecTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PlayOfTheGameTrigger_t> m_vecTriggers;
            char m_vecTriggers[0x68]; // 0x20            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tBeginTimeWithPrewarm; // 0x88            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tEndTime; // 0x8c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PlayOfTheGamePlaybackData_t, m_vecParticipants) == 0x8);
        static_assert(offsetof(source2sdk::server::PlayOfTheGamePlaybackData_t, m_vecTriggers) == 0x20);
        static_assert(offsetof(source2sdk::server::PlayOfTheGamePlaybackData_t, m_tBeginTimeWithPrewarm) == 0x88);
        static_assert(offsetof(source2sdk::server::PlayOfTheGamePlaybackData_t, m_tEndTime) == 0x8c);
        
        static_assert(sizeof(source2sdk::server::PlayOfTheGamePlaybackData_t) == 0x90);
    };
};
