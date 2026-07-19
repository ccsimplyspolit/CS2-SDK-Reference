#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1228
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iShotsToCreate"
        // static metadata: MNetworkVarNames "bool m_bIsInExpressShot"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_ExpressShot : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x280]; // 0xf78
            // metadata: MNetworkEnable
            std::int32_t m_iShotsToCreate; // 0x11f8            
            // metadata: MNetworkEnable
            bool m_bIsInExpressShot; // 0x11fc            
            uint8_t _pad11fd[0x3]; // 0x11fd
            source2sdk::entity2::GameTime_t m_tNextShotTime; // 0x1200            
            uint8_t _pad1204[0x1c]; // 0x1204
            bool m_bIsPrimaryProc; // 0x1220            
            uint8_t _pad1221[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_ExpressShot) == 0x1228);
    };
};
