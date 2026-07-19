#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerControllerComponent.hpp"

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
        // Size: 0x58
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_InGameMoneyServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            bool m_bReceivesMoneyNextRound; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            std::int32_t m_iMoneyEarnedForNextRound; // 0x44            
            std::int32_t m_iAccount; // 0x48            
            std::int32_t m_iStartAccount; // 0x4c            
            std::int32_t m_iTotalCashSpent; // 0x50            
            std::int32_t m_iCashSpentThisRound; // 0x54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_InGameMoneyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerController_InGameMoneyServices) == 0x58);
    };
};
