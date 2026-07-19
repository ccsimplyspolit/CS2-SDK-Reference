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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: true
        // Size: 0x340
        // Has VTable
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimationGraphInstance
        {
        public:
            uint8_t _pad0000[0x329]; // 0x0
            bool m_bTagDispatchDirty; // 0x329            
            uint8_t _pad032a[0x16];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimationGraphInstance, m_bTagDispatchDirty) == 0x329);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimationGraphInstance) == 0x340);
    };
};
