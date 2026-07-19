#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDynamicProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
        // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
        // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
        // static metadata: MNetworkVarNames "bool m_bIsWorld"
        #pragma pack(push, 1)
        class CCitadel_DynamicProp : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0cd0[0x10]; // 0xcd0
            // metadata: MNetworkEnable
            CUtlString m_strDefaultSkin; // 0xce0            
            // metadata: MNetworkEnable
            CUtlString m_strFriendlySkin; // 0xce8            
            // metadata: MNetworkEnable
            CUtlString m_strEnemySkin; // 0xcf0            
            // metadata: MNetworkEnable
            bool m_bIsWorld; // 0xcf8            
            uint8_t _pad0cf9[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge SetFriendlySkin; // 0x0
            // CUtlSymbolLarge SetEnemySkin; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_DynamicProp) == 0xd00);
    };
};
