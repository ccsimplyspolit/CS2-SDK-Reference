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
        // Size: 0x30
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ItemSlotInfo_t
        {
        public:
            std::int32_t m_arMaxPurchasesForTier[6]; // 0x0            
            float m_arPriceAdjustPercentForTier[6]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemSlotInfo_t, m_arMaxPurchasesForTier) == 0x0);
        static_assert(offsetof(source2sdk::client::ItemSlotInfo_t, m_arPriceAdjustPercentForTier) == 0x18);
        
        static_assert(sizeof(source2sdk::client::ItemSlotInfo_t) == 0x30);
    };
};
