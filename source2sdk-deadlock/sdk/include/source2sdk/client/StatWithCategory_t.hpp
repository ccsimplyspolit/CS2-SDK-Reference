#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECitadelStatCategory.hpp"
#include "source2sdk/client/EStatsType.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct StatWithCategory_t
        {
        public:
            // metadata: MPropertyDescription "The Stat Type"
            source2sdk::client::EStatsType m_eStatType; // 0x0            
            // metadata: MPropertyDescription "What Category does this stat belong in?"
            source2sdk::client::ECitadelStatCategory m_eStatCategory; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::StatWithCategory_t, m_eStatType) == 0x0);
        static_assert(offsetof(source2sdk::client::StatWithCategory_t, m_eStatCategory) == 0x4);
        
        static_assert(sizeof(source2sdk::client::StatWithCategory_t) == 0x8);
    };
};
