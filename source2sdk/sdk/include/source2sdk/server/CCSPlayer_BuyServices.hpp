#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/SellbackPurchaseEntry_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_BuyServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            uint8_t _pad0048[0x88]; // 0x48
            // m_vecSellbackPurchaseEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::SellbackPurchaseEntry_t> m_vecSellbackPurchaseEntries;
            char m_vecSellbackPurchaseEntries[0x88]; // 0xd0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_BuyServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_BuyServices) == 0x158);
    };
};
