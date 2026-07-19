#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/WeaponPurchaseCount_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Has VTable
        #pragma pack(push, 1)
        struct WeaponPurchaseTracker_t
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_weaponPurchases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::WeaponPurchaseCount_t> m_weaponPurchases;
            char m_weaponPurchases[0x68]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::WeaponPurchaseTracker_t, m_weaponPurchases) == 0x8);
        
        static_assert(sizeof(source2sdk::client::WeaponPurchaseTracker_t) == 0x70);
    };
};
