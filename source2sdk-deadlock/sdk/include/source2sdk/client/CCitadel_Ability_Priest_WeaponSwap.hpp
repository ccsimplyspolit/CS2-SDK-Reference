#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

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
        // Size: 0x1668
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_WeaponSwap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x488]; // 0x11d8
            // m_hOriginalGun has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_hOriginalGun;
            char m_hOriginalGun[0x4]; // 0x1660            
            uint8_t _pad1664[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_WeaponSwap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_WeaponSwap) == 0x1668);
    };
};
