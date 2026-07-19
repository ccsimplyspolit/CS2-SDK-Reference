#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerControllerComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayerController_InGameMoneyServices : public source2sdk::client::CPlayerControllerComponent
        {
        public:
            std::int32_t m_iAccount; // 0x40            
            std::int32_t m_iStartAccount; // 0x44            
            std::int32_t m_iTotalCashSpent; // 0x48            
            std::int32_t m_iCashSpentThisRound; // 0x4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerController_InGameMoneyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayerController_InGameMoneyServices) == 0x50);
    };
};
