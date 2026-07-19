#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Size: 0x14f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iTrophyCount"
        #pragma pack(push, 1)
        class CCitadel_Item_TrophyCollector : public source2sdk::client::CCitadel_Item
        {
        public:
            uint8_t _pad11d8[0x300]; // 0x11d8
            // metadata: MNetworkEnable
            std::int32_t m_iTrophyCount; // 0x14d8            
            std::int32_t m_iInitialKills; // 0x14dc            
            std::int32_t m_iInitialAssists; // 0x14e0            
            std::int32_t m_iPrevCount; // 0x14e4            
            bool m_bMaxStacksReached; // 0x14e8            
            uint8_t _pad14e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_TrophyCollector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_TrophyCollector) == 0x14f0);
    };
};
