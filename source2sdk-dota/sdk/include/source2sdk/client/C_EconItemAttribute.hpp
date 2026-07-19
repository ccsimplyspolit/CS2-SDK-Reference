#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/attrib_definition_index_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        #pragma pack(push, 1)
        class C_EconItemAttribute
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            source2sdk::client::attrib_definition_index_t m_iAttributeDefinitionIndex; // 0x30            
            uint8_t _pad0032[0x2]; // 0x32
            float m_flValue; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::C_EconItemAttribute, m_iAttributeDefinitionIndex) == 0x30);
        static_assert(offsetof(source2sdk::client::C_EconItemAttribute, m_flValue) == 0x34);
        
        static_assert(sizeof(source2sdk::client::C_EconItemAttribute) == 0x38);
    };
};
