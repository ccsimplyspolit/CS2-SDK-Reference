#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EMonsterHunterSmallRewardCategory.hpp"

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
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMonsterHunterSmallRewardCategoryDefinition
        {
        public:
            source2sdk::client::EMonsterHunterSmallRewardCategory m_eCategory; // 0x0            
            std::uint32_t m_unActionID; // 0x4            
            CUtlString m_strLocName; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_eCategory) == 0x0);
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_unActionID) == 0x4);
        static_assert(offsetof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition, m_strLocName) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CMonsterHunterSmallRewardCategoryDefinition) == 0x10);
    };
};
