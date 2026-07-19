#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x70
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_PlayerChallengeInfo
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::int32_t nType; // 0x30            
            std::int32_t nQuestID; // 0x34            
            std::int32_t nQuestChallengeID; // 0x38            
            std::int32_t nTier; // 0x3c            
            std::int32_t nParam0; // 0x40            
            std::int32_t nParam1; // 0x44            
            std::int32_t nSlotID; // 0x48            
            std::int32_t nProgress; // 0x4c            
            std::int32_t nCompletionThreshold; // 0x50            
            source2sdk::client::PlayerID_t nPlayerID; // 0x54            
            std::int32_t nQueryIndex; // 0x58            
            std::int32_t nEventID; // 0x5c            
            std::int32_t nSequenceID; // 0x60            
            std::int32_t nCompleted; // 0x64            
            std::int32_t nRank; // 0x68            
            uint8_t _pad006c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nType) == 0x30);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nQuestID) == 0x34);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nQuestChallengeID) == 0x38);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nTier) == 0x3c);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nParam0) == 0x40);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nParam1) == 0x44);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nSlotID) == 0x48);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nProgress) == 0x4c);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nCompletionThreshold) == 0x50);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nPlayerID) == 0x54);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nQueryIndex) == 0x58);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nEventID) == 0x5c);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nSequenceID) == 0x60);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nCompleted) == 0x64);
        static_assert(offsetof(source2sdk::server::CDOTA_PlayerChallengeInfo, nRank) == 0x68);
        
        static_assert(sizeof(source2sdk::server::CDOTA_PlayerChallengeInfo) == 0x70);
    };
};
