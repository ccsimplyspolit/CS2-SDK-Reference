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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "AbilityID_t m_unItemID"
        // static metadata: MNetworkVarNames "int m_nUpgradeBits"
        #pragma pack(push, 1)
        struct ItemDraftItem_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            CUtlStringToken m_unItemID; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeBits; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ItemDraftItem_t, m_unItemID) == 0x30);
        static_assert(offsetof(source2sdk::client::ItemDraftItem_t, m_nUpgradeBits) == 0x34);
        
        static_assert(sizeof(source2sdk::client::ItemDraftItem_t) == 0x38);
    };
};
