#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/NavHull_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class INavPathCost
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::navlib::NavHull_t m_navHull; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::navlib::INavPathCost, m_navHull) == 0x8);
        
        static_assert(sizeof(source2sdk::navlib::INavPathCost) == 0x10);
    };
};
