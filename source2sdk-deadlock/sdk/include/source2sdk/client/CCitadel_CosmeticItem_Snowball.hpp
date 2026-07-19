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
        // Size: 0x1468
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nSeasonal2025Level"
        // static metadata: MNetworkVarNames "float m_flSeasonal2025LevelFrac"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextShotTime"
        // static metadata: MNetworkVarNames "int m_nShotsRemaining"
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_Snowball : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x280]; // 0x11d8
            // metadata: MNetworkEnable
            std::int32_t m_nSeasonal2025Level; // 0x1458            
            // metadata: MNetworkEnable
            float m_flSeasonal2025LevelFrac; // 0x145c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotTime; // 0x1460            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            std::int32_t m_nShotsRemaining; // 0x1464            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_CosmeticItem_Snowball) == 0x1468);
    };
};
