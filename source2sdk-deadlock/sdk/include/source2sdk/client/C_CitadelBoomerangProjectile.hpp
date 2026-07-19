#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"

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
        // Standard-layout class: false
        // Size: 0xae0
        // Has VTable
        #pragma pack(push, 1)
        class C_CitadelBoomerangProjectile : public source2sdk::client::C_CitadelProjectile
        {
        public:
            bool m_bReturning; // 0xad8            
            uint8_t _pad0ad9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelBoomerangProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelBoomerangProjectile) == 0xae0);
    };
};
