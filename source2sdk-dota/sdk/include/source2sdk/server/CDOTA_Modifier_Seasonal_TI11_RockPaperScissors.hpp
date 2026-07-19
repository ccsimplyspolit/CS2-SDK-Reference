#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a88
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI11_RockPaperScissors : public source2sdk::client::CDOTA_Buff
        {
        public:
            float challenge_duration; // 0x1a58            
            float reveal_duration; // 0x1a5c            
            float reveal_delay; // 0x1a60            
            float completed_cooldown; // 0x1a64            
            float think_interval; // 0x1a68            
            float acknowledge_range; // 0x1a6c            
            uint8_t _pad1a70[0x4]; // 0x1a70
            source2sdk::entity2::GameTime_t m_flRevealTime; // 0x1a74            
            bool m_bFirstThink; // 0x1a78            
            uint8_t _pad1a79[0x3]; // 0x1a79
            source2sdk::client::PlayerID_t m_nRevealOpponentPlayerID; // 0x1a7c            
            uint8_t _pad1a80[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI11_RockPaperScissors because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI11_RockPaperScissors) == 0x1a88);
    };
};
