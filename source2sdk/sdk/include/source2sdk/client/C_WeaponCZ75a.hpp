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
        // Size: 0x1d20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_WeaponCZ75a : public source2sdk::client::C_CSWeaponBaseGun
        {
        public:
            bool m_bMagazineRemoved; // 0x1d10            
            uint8_t _pad1d11[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_WeaponCZ75a because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_WeaponCZ75a) == 0x1d20);
    };
};
