#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELootTableEntryType.hpp"

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
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct LootTableEntry_t
        {
        public:
            // metadata: MPropertyDescription "What type of loot this entry references."
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            source2sdk::client::ELootTableEntryType m_eType; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyDescription "If this entry is rolled, this loot table's entries will then be rolled."
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertySuppressExpr "m_eType != ELootType_LootTableReference"
            // m_strNestedLootTable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<6> m_strNestedLootTable;
            char m_strNestedLootTable[0x10]; // 0x8            
            uint8_t _pad0018[0x8]; // 0x18
            // metadata: MPropertyDescription "If this entry is rolled, this item will be the loot."
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenStretchFactor
            // metadata: MPropertySuppressExpr "m_eType != ELootType_Item"
            // metadata: MPropertyLeafChoiceProviderFn
            // m_strItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_strItem;
            char m_strItem[0x10]; // 0x20            
            // metadata: MPropertyDescription "The weight of this entry.  The chance of this entry being rolled is this_weight / all_entries_weight"
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            float m_flWeight; // 0x30            
            // metadata: MPropertyDescription "Used by the UI to communicate how rare this entry is. 0 is not rare, 1 is rare. Nested loot tables will add their rarity to their children"
            // metadata: MPropertyFlattenIntoParentRow
            // metadata: MPropertyFlattenIncludeLabel
            std::int32_t m_nRarity; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::LootTableEntry_t, m_eType) == 0x0);
        static_assert(offsetof(source2sdk::client::LootTableEntry_t, m_strNestedLootTable) == 0x8);
        static_assert(offsetof(source2sdk::client::LootTableEntry_t, m_strItem) == 0x20);
        static_assert(offsetof(source2sdk::client::LootTableEntry_t, m_flWeight) == 0x30);
        static_assert(offsetof(source2sdk::client::LootTableEntry_t, m_nRarity) == 0x34);
        
        static_assert(sizeof(source2sdk::client::LootTableEntry_t) == 0x38);
    };
};
