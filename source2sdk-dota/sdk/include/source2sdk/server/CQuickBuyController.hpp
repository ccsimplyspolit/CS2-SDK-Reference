#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/server/InventoryQuickBuyState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Standard-layout class: true
        // Size: 0x188
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CQuickBuyController
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::client::PlayerID_t m_nPlayerID; // 0x8            
            uint8_t _pad000c[0x4]; // 0xc
            source2sdk::server::InventoryQuickBuyState_t m_quickBuyState; // 0x10            
            bool m_bBuybackProtectionEnabled; // 0xe0            
            bool m_bAutoMarkForBuy; // 0xe1            
            uint8_t _pad00e2[0x6]; // 0xe2
            // m_vecControlledUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_vecControlledUnits;
            char m_vecControlledUnits[0x18]; // 0xe8            
            uint8_t _pad0100[0x30]; // 0x100
            std::int32_t m_nNextOrder; // 0x130            
            uint8_t _pad0134[0x34]; // 0x134
            bool m_bQuickBuyIgnoredStateDirty; // 0x168            
            uint8_t _pad0169[0x3]; // 0x169
            std::int32_t m_nSuggestItemIdx; // 0x16c            
            uint8_t _pad0170[0x18];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nPlayerID) == 0x8);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_quickBuyState) == 0x10);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bBuybackProtectionEnabled) == 0xe0);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bAutoMarkForBuy) == 0xe1);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_vecControlledUnits) == 0xe8);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nNextOrder) == 0x130);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_bQuickBuyIgnoredStateDirty) == 0x168);
        static_assert(offsetof(source2sdk::server::CQuickBuyController, m_nSuggestItemIdx) == 0x16c);
        
        static_assert(sizeof(source2sdk::server::CQuickBuyController) == 0x188);
    };
};
