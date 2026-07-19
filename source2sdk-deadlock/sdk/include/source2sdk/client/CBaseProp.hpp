#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xce0
        // Has VTable
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xca8            
            uint8_t _pad0ca9[0x3]; // 0xca9
            std::int32_t m_iShapeType; // 0xcac            
            bool m_bConformToCollisionBounds; // 0xcb0            
            uint8_t _pad0cb1[0xf]; // 0xcb1
            CTransform m_mPreferredCatchTransform; // 0xcc0            
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseProp) == 0xce0);
    };
};
