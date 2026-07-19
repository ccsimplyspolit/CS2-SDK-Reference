#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1290
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iTrophyCount"
        #pragma pack(push, 1)
        class CCitadel_Item_TrophyCollector : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f78[0x300]; // 0xf78
            // metadata: MNetworkEnable
            std::int32_t m_iTrophyCount; // 0x1278            
            std::int32_t m_iInitialKills; // 0x127c            
            std::int32_t m_iInitialAssists; // 0x1280            
            std::int32_t m_iPrevCount; // 0x1284            
            bool m_bMaxStacksReached; // 0x1288            
            uint8_t _pad1289[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_TrophyCollector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_TrophyCollector) == 0x1290);
    };
};
