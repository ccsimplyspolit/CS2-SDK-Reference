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
        // Registered alignment: unknown
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        #pragma pack(push, 1)
        struct ServerAuthoritativeWeaponSlot_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::uint16_t unClass; // 0x30            
            std::uint16_t unSlot; // 0x32            
            std::uint16_t unItemDefIdx; // 0x34            
            uint8_t _pad0036[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unClass) == 0x30);
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unSlot) == 0x32);
        static_assert(offsetof(source2sdk::client::ServerAuthoritativeWeaponSlot_t, unItemDefIdx) == 0x34);
        
        static_assert(sizeof(source2sdk::client::ServerAuthoritativeWeaponSlot_t) == 0x38);
    };
};
