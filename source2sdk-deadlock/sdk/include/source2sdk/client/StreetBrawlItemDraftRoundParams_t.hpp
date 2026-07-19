#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/ItemDraftRoundParams_t.hpp"

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
        // Size: 0x14
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct StreetBrawlItemDraftRoundParams_t
        {
        public:
            source2sdk::client::ItemDraftRoundParams_t m_DraftParams; // 0x0            
            // metadata: MPropertyDescription "Restricts items to this tier for a normal roll."
            source2sdk::client::EModTier_t m_eNormalModTier; // 0x8            
            // metadata: MPropertyDescription "When a rare is rolled, restrict items to this tier."
            source2sdk::client::EModTier_t m_eRareModTier; // 0x9            
            uint8_t _pad000a[0x2]; // 0xa
            // metadata: MPropertyDescription "The weight for this draft round to have a rare allocated to it.  The weights of all the draft rounds are used to generated the odds"
            float m_flRareWeight; // 0xc            
            // metadata: MPropertyDescription "The weight for this draft round to have an enhanced allocated to it.  The weights of all the draft rounds are used to generated the odds"
            float m_flEnhancedWeight; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::StreetBrawlItemDraftRoundParams_t, m_DraftParams) == 0x0);
        static_assert(offsetof(source2sdk::client::StreetBrawlItemDraftRoundParams_t, m_eNormalModTier) == 0x8);
        static_assert(offsetof(source2sdk::client::StreetBrawlItemDraftRoundParams_t, m_eRareModTier) == 0x9);
        static_assert(offsetof(source2sdk::client::StreetBrawlItemDraftRoundParams_t, m_flRareWeight) == 0xc);
        static_assert(offsetof(source2sdk::client::StreetBrawlItemDraftRoundParams_t, m_flEnhancedWeight) == 0x10);
        
        static_assert(sizeof(source2sdk::client::StreetBrawlItemDraftRoundParams_t) == 0x14);
    };
};
