#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimationLayer.hpp"

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
        // Size: 0x398
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CChoreoInstanceData
        {
        public:
            source2sdk::animgraphlib::CAnimationLayer m_AnimOverlay[12]; // 0x0            
            uint8_t _pad0390[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CChoreoInstanceData, m_AnimOverlay) == 0x0);
        
        static_assert(sizeof(source2sdk::animgraphlib::CChoreoInstanceData) == 0x398);
    };
};
