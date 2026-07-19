#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRulePointEntity.hpp"

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
        // Size: 0x7c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGameMoney : public source2sdk::server::CRulePointEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMoneySpent; // 0x780            
            source2sdk::entity2::CEntityIOOutput m_OnMoneySpentFail; // 0x798            
            std::int32_t m_nMoney; // 0x7b0            
            uint8_t _pad07b4[0x4]; // 0x7b4
            CUtlString m_strAwardText; // 0x7b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameMoney because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameMoney) == 0x7c0);
    };
};
