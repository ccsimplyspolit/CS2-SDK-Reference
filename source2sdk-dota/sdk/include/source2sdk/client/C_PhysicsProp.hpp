#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BreakableProp.hpp"

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
        // Size: 0xc40
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_PhysicsProp : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNotSaved
            bool m_bAwake; // 0xc30            
            uint8_t _pad0c31[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PhysicsProp) == 0xc40);
    };
};
