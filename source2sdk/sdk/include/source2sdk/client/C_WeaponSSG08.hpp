#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBaseGun.hpp"

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
        // Size: 0x1d10
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_WeaponSSG08 : public source2sdk::client::C_CSWeaponBaseGun
        {
        public:
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_WeaponSSG08) == 0x1d10);
    };
};
