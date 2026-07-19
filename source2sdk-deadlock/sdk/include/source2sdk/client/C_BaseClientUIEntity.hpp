#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0x9d8
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class C_BaseClientUIEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x8]; // 0x9a8
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x9b0            
            uint8_t _pad09b1[0x7]; // 0x9b1
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x9b8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x9c0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x9c8            
            uint8_t _pad09d0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseClientUIEntity) == 0x9d8);
    };
};
