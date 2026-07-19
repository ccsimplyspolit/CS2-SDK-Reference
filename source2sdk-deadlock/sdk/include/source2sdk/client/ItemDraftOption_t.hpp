#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ItemDraftItem_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xe0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "ItemDraftItem_t m_Item"
        // static metadata: MNetworkVarNames "ItemDraftItem_t m_BonusItem1"
        // static metadata: MNetworkVarNames "ItemDraftItem_t m_BonusItem2"
        // static metadata: MNetworkVarNames "bool m_bHasBeenDrafted"
        // static metadata: MNetworkVarNames "bool m_bRare"
        #pragma pack(push, 1)
        struct ItemDraftOption_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::ItemDraftItem_t m_Item; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::ItemDraftItem_t m_BonusItem1; // 0x68            
            // metadata: MNetworkEnable
            source2sdk::client::ItemDraftItem_t m_BonusItem2; // 0xa0            
            // metadata: MNetworkEnable
            bool m_bHasBeenDrafted; // 0xd8            
            // metadata: MNetworkEnable
            bool m_bRare; // 0xd9            
            uint8_t _pad00da[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftOption_t, m_Item) == 0x30);
        static_assert(offsetof(source2sdk::client::ItemDraftOption_t, m_BonusItem1) == 0x68);
        static_assert(offsetof(source2sdk::client::ItemDraftOption_t, m_BonusItem2) == 0xa0);
        static_assert(offsetof(source2sdk::client::ItemDraftOption_t, m_bHasBeenDrafted) == 0xd8);
        static_assert(offsetof(source2sdk::client::ItemDraftOption_t, m_bRare) == 0xd9);
        
        static_assert(sizeof(source2sdk::client::ItemDraftOption_t) == 0xe0);
    };
};
