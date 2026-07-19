#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonterHunterHunterRankRewardDefinition
        {
        public:
            std::int32_t m_nHunterRank; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            CUtlString m_strLocRankName; // 0x8            
            std::uint32_t m_unActionID; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_nHunterRank) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_strLocRankName) == 0x8);
        static_assert(offsetof(source2sdk::client::CMonterHunterHunterRankRewardDefinition, m_unActionID) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CMonterHunterHunterRankRewardDefinition) == 0x18);
    };
};
