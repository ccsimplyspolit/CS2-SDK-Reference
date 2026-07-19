#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0x1e78
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_KnightCharge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0xc9c]; // 0x11d8
            bool m_bAffectedAnyTargets; // 0x1e74            
            uint8_t _pad1e75[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_KnightCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bookworm_KnightCharge) == 0x1e78);
    };
};
