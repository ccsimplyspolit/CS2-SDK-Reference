#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct EntityRenderAttribute_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            CUtlStringToken m_ID; // 0x30            
            Vector4D m_Values; // 0x34            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::EntityRenderAttribute_t, m_ID) == 0x30);
        static_assert(offsetof(source2sdk::client::EntityRenderAttribute_t, m_Values) == 0x34);
        
        static_assert(sizeof(source2sdk::client::EntityRenderAttribute_t) == 0x48);
    };
};
