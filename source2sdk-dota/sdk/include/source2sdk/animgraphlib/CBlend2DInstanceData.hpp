#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xa0
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBlend2DInstanceData
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            Vector2D m_dampedValue; // 0x8            
            uint8_t _pad0010[0x34]; // 0x10
            float m_flCycle; // 0x44            
            float m_flPrevCycle; // 0x48            
            uint8_t _pad004c[0x54];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CBlend2DInstanceData, m_dampedValue) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CBlend2DInstanceData, m_flCycle) == 0x44);
        static_assert(offsetof(source2sdk::animgraphlib::CBlend2DInstanceData, m_flPrevCycle) == 0x48);
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlend2DInstanceData) == 0xa0);
    };
};
