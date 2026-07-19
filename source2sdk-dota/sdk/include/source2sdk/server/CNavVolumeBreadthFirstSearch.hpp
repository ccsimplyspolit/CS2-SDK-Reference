#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CNavVolumeCalculatedVector.hpp"

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
        // Standard-layout class: false
        // Size: 0xc0
        // Has VTable
        #pragma pack(push, 1)
        class CNavVolumeBreadthFirstSearch : public source2sdk::server::CNavVolumeCalculatedVector
        {
        public:
            uint8_t _pad00a0[0x8]; // 0xa0
            VectorWS m_vStartPos; // 0xa8            
            float m_flSearchDist; // 0xb4            
            uint8_t _pad00b8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavVolumeBreadthFirstSearch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavVolumeBreadthFirstSearch) == 0xc0);
    };
};
