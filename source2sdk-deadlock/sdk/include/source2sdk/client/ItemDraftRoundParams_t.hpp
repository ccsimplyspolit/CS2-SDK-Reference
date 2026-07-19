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
        // Size: 0x8
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ItemDraftRoundParams_t
        {
        public:
            // metadata: MPropertyDescription "How many options will be rolled for and presented for drafting."
            std::int32_t m_nOptionsToRoll; // 0x0            
            // metadata: MPropertyDescription "How many of the options the player can draft."
            std::int32_t m_nDrafts; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftRoundParams_t, m_nOptionsToRoll) == 0x0);
        static_assert(offsetof(source2sdk::client::ItemDraftRoundParams_t, m_nDrafts) == 0x4);
        
        static_assert(sizeof(source2sdk::client::ItemDraftRoundParams_t) == 0x8);
    };
};
