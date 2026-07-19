#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x1488
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x280]; // 0x11d8
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0x1458            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0x145c            
            uint8_t _pad145d[0x3]; // 0x145d
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0x1460            
            uint8_t _pad1464[0x1c]; // 0x1464
            bool m_bIsPrimaryProc; // 0x1480            
            uint8_t _pad1481[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_ExpressShot) == 0x1488);
    };
};
