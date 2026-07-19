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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PathAccompanyCoordinate_t
        {
        public:
            float m_flProgress; // 0x0            
            float m_flLeftOffset; // 0x4            
            VectorWS m_vOriginalPosition; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyCoordinate_t, m_flProgress) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyCoordinate_t, m_flLeftOffset) == 0x4);
        static_assert(offsetof(source2sdk::server::PathAccompanyCoordinate_t, m_vOriginalPosition) == 0x8);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyCoordinate_t) == 0x14);
    };
};
