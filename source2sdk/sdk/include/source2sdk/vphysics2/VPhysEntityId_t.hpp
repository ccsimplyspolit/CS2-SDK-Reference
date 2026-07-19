#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: vphysics2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace vphysics2
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x4
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysEntityId_t
        {
        public:
            std::uint32_t m_Id; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::vphysics2::VPhysEntityId_t, m_Id) == 0x0);
        
        static_assert(sizeof(source2sdk::vphysics2::VPhysEntityId_t) == 0x4);
    };
};
