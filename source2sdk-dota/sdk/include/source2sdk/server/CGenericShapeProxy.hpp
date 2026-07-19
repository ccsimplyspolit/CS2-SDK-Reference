#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x98
        #pragma pack(push, 1)
        class CGenericShapeProxy
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // m_verts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<Vector,8> m_verts;
            char m_verts[0x68]; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CGenericShapeProxy, m_verts) == 0x30);
        
        static_assert(sizeof(source2sdk::server::CGenericShapeProxy) == 0x98);
    };
};
