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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x2c
        // Has Trivial Destructor
        // Construct allowed
        // Construct disallowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct SelectorInstanceData_t
        {
        public:
            // m_weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CRelativeArray<float> m_weights;
            char m_weights[0x8]; // 0x0            
            // m_currentIndexStartTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_currentIndexStartTime;
            char m_currentIndexStartTime[0xc]; // 0x8            
            std::int32_t m_currentIndex; // 0x14            
            std::int32_t m_previousIndex; // 0x18            
            uint8_t _pad001c[0x10];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::SelectorInstanceData_t, m_weights) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::SelectorInstanceData_t, m_currentIndexStartTime) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::SelectorInstanceData_t, m_currentIndex) == 0x14);
        static_assert(offsetof(source2sdk::animgraphlib::SelectorInstanceData_t, m_previousIndex) == 0x18);
        
        static_assert(sizeof(source2sdk::animgraphlib::SelectorInstanceData_t) == 0x2c);
    };
};
