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
        // Size: 0xfe0
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class C_BaseClientUIEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0fb0[0x8]; // 0xfb0
            bool m_bEnabled; // 0xfb8            
            uint8_t _pad0fb9[0x7]; // 0xfb9
            CUtlSymbolLarge m_DialogXMLName; // 0xfc0            
            CUtlSymbolLarge m_PanelClassName; // 0xfc8            
            CUtlSymbolLarge m_PanelID; // 0xfd0            
            uint8_t _pad0fd8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseClientUIEntity) == 0xfe0);
    };
};
