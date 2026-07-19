#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/StreetBrawlItemDraftRoundParams_t.hpp"
#include "source2sdk/client/WeightedChance_t.hpp"

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
        // Size: 0xb8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct StreetBrawlGameRoundDrafts_t
        {
        public:
            // m_vecItemDraftRounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::StreetBrawlItemDraftRoundParams_t> m_vecItemDraftRounds;
            char m_vecItemDraftRounds[0x18]; // 0x0            
            source2sdk::client::WeightedChance_t m_chanceRare; // 0x18            
            source2sdk::client::WeightedChance_t m_chanceEnhanced; // 0x40            
            uint8_t _pad0068[0x50];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::StreetBrawlGameRoundDrafts_t, m_vecItemDraftRounds) == 0x0);
        static_assert(offsetof(source2sdk::client::StreetBrawlGameRoundDrafts_t, m_chanceRare) == 0x18);
        static_assert(offsetof(source2sdk::client::StreetBrawlGameRoundDrafts_t, m_chanceEnhanced) == 0x40);
        
        static_assert(sizeof(source2sdk::client::StreetBrawlGameRoundDrafts_t) == 0xb8);
    };
};
