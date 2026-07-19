#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EShopGroups.hpp"

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
        // Size: 0x20
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyArrayElementNameKey "m_eShopGroup"
        #pragma pack(push, 1)
        struct ShopGroups_t
        {
        public:
            source2sdk::client::EShopGroups m_eShopGroup; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_vecUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecUpgrades;
            char m_vecUpgrades[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ShopGroups_t, m_eShopGroup) == 0x0);
        static_assert(offsetof(source2sdk::client::ShopGroups_t, m_vecUpgrades) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ShopGroups_t) == 0x20);
    };
};
