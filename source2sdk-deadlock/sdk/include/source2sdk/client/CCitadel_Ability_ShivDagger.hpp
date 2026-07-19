#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"

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
        // Size: 0x13f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_ShivDagger : public source2sdk::client::CCitadelBaseShivAbility
        {
        public:
            bool m_bIsInRicochet; // 0x11d8            
            uint8_t _pad11d9[0x21f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShivDagger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ShivDagger) == 0x13f8);
    };
};
