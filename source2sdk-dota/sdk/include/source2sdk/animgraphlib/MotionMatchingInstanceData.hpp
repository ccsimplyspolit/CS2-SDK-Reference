#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/MotionSelection.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0x120
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class MotionMatchingInstanceData
        {
        public:
            uint8_t _pad0000[0x2c]; // 0x0
            source2sdk::animgraphlib::MotionSelection m_currentSelection; // 0x2c            
            source2sdk::animgraphlib::MotionSelection m_previousSelection; // 0x84            
            uint8_t _pad00dc[0x44];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::MotionMatchingInstanceData, m_currentSelection) == 0x2c);
        static_assert(offsetof(source2sdk::animgraphlib::MotionMatchingInstanceData, m_previousSelection) == 0x84);
        
        static_assert(sizeof(source2sdk::animgraphlib::MotionMatchingInstanceData) == 0x120);
    };
};
