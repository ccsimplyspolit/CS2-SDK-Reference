#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
        struct physics_save_sphere_t
        {
        public:
            float radius; // 0x0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::physics_save_sphere_t, radius) == 0x0);
        
        static_assert(sizeof(source2sdk::client::physics_save_sphere_t) == 0x4);
    };
};
