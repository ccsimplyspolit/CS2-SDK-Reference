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
        // Size: 0xab8
        // Has VTable
        // Is Abstract
        // Construct disallowed
        #pragma pack(push, 1)
        class C_BaseClientUIEntity : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0a88[0x8]; // 0xa88
            bool m_bEnabled; // 0xa90            
            uint8_t _pad0a91[0x7]; // 0xa91
            CUtlSymbolLarge m_DialogXMLName; // 0xa98            
            CUtlSymbolLarge m_PanelClassName; // 0xaa0            
            CUtlSymbolLarge m_PanelID; // 0xaa8            
            uint8_t _pad0ab0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseClientUIEntity) == 0xab8);
    };
};
