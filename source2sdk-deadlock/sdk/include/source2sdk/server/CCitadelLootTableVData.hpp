#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/LootTableEntry_t.hpp"

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
        // Size: 0x50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataAssociatedFile
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CCitadelLootTableVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            uint8_t _pad0028[0x8]; // 0x28
            // metadata: MPropertyAutoExpandSelf
            // m_vecEntries has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::LootTableEntry_t> m_vecEntries;
            char m_vecEntries[0x18]; // 0x30            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelLootTableVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelLootTableVData) == 0x50);
    };
};
