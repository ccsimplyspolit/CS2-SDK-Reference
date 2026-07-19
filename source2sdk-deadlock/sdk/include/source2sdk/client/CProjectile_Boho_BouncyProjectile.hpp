#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelTrackedProjectile.hpp"

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
        // Size: 0xaf8
        // Has VTable
        #pragma pack(push, 1)
        class CProjectile_Boho_BouncyProjectile : public source2sdk::client::C_CitadelTrackedProjectile
        {
        public:
            uint8_t _pad0ad8[0x20];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        // size assertion omitted: CProjectile_Boho_BouncyProjectile has no schema binary (size is a guess)
    };
};
