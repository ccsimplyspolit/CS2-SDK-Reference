#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/client/QuickBuyPurchasable_t.hpp"

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
        // Size: 0x58
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        struct QuickBuySlot_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::client::AbilityID_t m_nAbilityID; // 0x30            
            std::int32_t m_nTopLevelItem; // 0x34            
            source2sdk::client::AbilityID_t m_nTopLevelItemAbilityID; // 0x38            
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableState; // 0x3c            
            source2sdk::client::QuickBuyPurchasable_t m_ePurchasableAccumState; // 0x40            
            bool m_bMarkedForBuy; // 0x44            
            uint8_t _pad0045[0x3]; // 0x45
            std::int32_t m_nParity; // 0x48            
            bool m_bSticky; // 0x4c            
            uint8_t _pad004d[0x3]; // 0x4d
            source2sdk::client::QuickBuyPurchasable_t m_ePrevPurchasableState; // 0x50            
            bool m_bNewlyActionable; // 0x54            
            bool m_bPurchaseInFlight; // 0x55            
            uint8_t _pad0056[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nAbilityID) == 0x30);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nTopLevelItem) == 0x34);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nTopLevelItemAbilityID) == 0x38);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePurchasableState) == 0x3c);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePurchasableAccumState) == 0x40);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bMarkedForBuy) == 0x44);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_nParity) == 0x48);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bSticky) == 0x4c);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_ePrevPurchasableState) == 0x50);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bNewlyActionable) == 0x54);
        static_assert(offsetof(source2sdk::client::QuickBuySlot_t, m_bPurchaseInFlight) == 0x55);
        
        static_assert(sizeof(source2sdk::client::QuickBuySlot_t) == 0x58);
    };
};
