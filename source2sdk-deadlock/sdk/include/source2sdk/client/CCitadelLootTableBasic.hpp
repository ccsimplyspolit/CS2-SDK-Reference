#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/LootTableEntry_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelLootTableBasic
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // m_vecEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::LootTableEntry_t> m_vecEntries;
            char m_vecEntries[0x18]; // 0x8            
            CUtlString m_strName; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelLootTableBasic, m_vecEntries) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelLootTableBasic, m_strName) == 0x20);
        
        static_assert(sizeof(source2sdk::client::CCitadelLootTableBasic) == 0x28);
    };
};
