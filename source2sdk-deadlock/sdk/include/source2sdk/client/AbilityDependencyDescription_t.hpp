#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityDependencyFlags.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AbilityDependencyDescription_t
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::client::AbilityDependencyFlags m_eFlags; // 0x10            
            uint8_t _pad0012[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AbilityDependencyDescription_t, m_eFlags) == 0x10);
        
        static_assert(sizeof(source2sdk::client::AbilityDependencyDescription_t) == 0x18);
    };
};
