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
        // Size: 0x10
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ItemDraftWeight_t
        {
        public:
            // metadata: MPropertyLeafChoiceProviderFn
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertyFlattenIncludeLabel
            CUtlString m_strBucket; // 0x0            
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertyFlattenIncludeLabel
            float m_flWeight; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftWeight_t, m_strBucket) == 0x0);
        static_assert(offsetof(source2sdk::client::ItemDraftWeight_t, m_flWeight) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ItemDraftWeight_t) == 0x10);
    };
};
