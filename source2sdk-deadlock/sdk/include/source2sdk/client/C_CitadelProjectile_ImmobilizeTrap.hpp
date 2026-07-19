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
        // Size: 0x11e0
        // Has VTable
        #pragma pack(push, 1)
        class C_CitadelProjectile_ImmobilizeTrap : public source2sdk::client::C_CitadelProjectile
        {
        public:
            bool m_bShouldDraw; // 0xad8            
            uint8_t _pad0ad9[0x707];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelProjectile_ImmobilizeTrap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelProjectile_ImmobilizeTrap) == 0x11e0);
    };
};
