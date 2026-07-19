#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        #pragma pack(push, 1)
        class CEntityAttributeTable
        {
        public:
            // m_Attributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringTokenNoRegistration,Attribute_t> m_Attributes;
            char m_Attributes[0x28]; // 0x0            
            // m_Names has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlStringTokenNoRegistration,CUtlString> m_Names;
            char m_Names[0x28]; // 0x28            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityAttributeTable, m_Attributes) == 0x0);
        static_assert(offsetof(source2sdk::entity2::CEntityAttributeTable, m_Names) == 0x28);
        
        static_assert(sizeof(source2sdk::entity2::CEntityAttributeTable) == 0x50);
    };
};
