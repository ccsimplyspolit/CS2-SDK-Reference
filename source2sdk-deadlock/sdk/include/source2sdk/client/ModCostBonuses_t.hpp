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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyArrayElementNameKey "nGoldThreshold"
        #pragma pack(push, 1)
        struct ModCostBonuses_t
        {
        public:
            std::int32_t nGoldThreshold; // 0x0            
            float flBonus; // 0x4            
            float flPercentOnGraph; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ModCostBonuses_t, nGoldThreshold) == 0x0);
        static_assert(offsetof(source2sdk::client::ModCostBonuses_t, flBonus) == 0x4);
        static_assert(offsetof(source2sdk::client::ModCostBonuses_t, flPercentOnGraph) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ModCostBonuses_t) == 0xc);
    };
};
