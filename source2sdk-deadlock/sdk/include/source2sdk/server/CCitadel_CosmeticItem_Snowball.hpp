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
        // Size: 0x1208
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nSeasonal2025Level"
        // static metadata: MNetworkVarNames "float m_flSeasonal2025LevelFrac"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextShotTime"
        // static metadata: MNetworkVarNames "int m_nShotsRemaining"
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_Snowball : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x280]; // 0xf78
            // metadata: MNetworkEnable
            std::int32_t m_nSeasonal2025Level; // 0x11f8            
            // metadata: MNetworkEnable
            float m_flSeasonal2025LevelFrac; // 0x11fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            source2sdk::entity2::GameTime_t m_flNextShotTime; // 0x1200            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
            std::int32_t m_nShotsRemaining; // 0x1204            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_CosmeticItem_Snowball) == 0x1208);
    };
};
