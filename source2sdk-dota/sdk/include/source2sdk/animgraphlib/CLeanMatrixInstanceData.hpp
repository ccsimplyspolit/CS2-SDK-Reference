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
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLeanMatrixInstanceData
        {
        public:
            float m_flValueY; // 0x0            
            float m_flValueX; // 0x4            
            uint8_t _pad0008[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CLeanMatrixInstanceData, m_flValueY) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CLeanMatrixInstanceData, m_flValueX) == 0x4);
        
        static_assert(sizeof(source2sdk::animgraphlib::CLeanMatrixInstanceData) == 0xc);
    };
};
