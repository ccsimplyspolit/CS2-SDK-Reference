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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x11e0
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelBaseYamatoAbility : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            float m_flCachedCastTime; // 0x11d8            
            bool m_bIsShadowFormCast; // 0x11dc            
            uint8_t _pad11dd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseYamatoAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelBaseYamatoAbility) == 0x11e0);
    };
};
