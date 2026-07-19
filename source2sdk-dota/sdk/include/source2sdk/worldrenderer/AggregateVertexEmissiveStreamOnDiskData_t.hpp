#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AggregateVertexEmissiveStreamOnDiskData_t
        {
        public:
            CUtlBinaryBlock m_BufferData; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::AggregateVertexEmissiveStreamOnDiskData_t, m_BufferData) == 0x0);
        
        static_assert(sizeof(source2sdk::worldrenderer::AggregateVertexEmissiveStreamOnDiskData_t) == 0x10);
    };
};
