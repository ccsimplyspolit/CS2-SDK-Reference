#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/compositematerialslib/CompositeMaterialMatchFilterType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: compositematerialslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace compositematerialslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        #pragma pack(push, 1)
        struct CompositeMaterialMatchFilter_t
        {
        public:
            // metadata: MPropertyFriendlyName "Match Type"
            source2sdk::compositematerialslib::CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyFriendlyName "Name"
            CUtlString m_strMatchFilter; // 0x8            
            // metadata: MPropertyFriendlyName "Value"
            // metadata: MPropertyAttrStateCallback
            CUtlString m_strMatchValue; // 0x10            
            // metadata: MPropertyFriendlyName "Pass when True"
            bool m_bPassWhenTrue; // 0x18            
            uint8_t _pad0019[0x7];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialMatchFilter_t, m_nCompositeMaterialMatchFilterType) == 0x0);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialMatchFilter_t, m_strMatchFilter) == 0x8);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialMatchFilter_t, m_strMatchValue) == 0x10);
        static_assert(offsetof(source2sdk::compositematerialslib::CompositeMaterialMatchFilter_t, m_bPassWhenTrue) == 0x18);
        
        static_assert(sizeof(source2sdk::compositematerialslib::CompositeMaterialMatchFilter_t) == 0x20);
    };
};
