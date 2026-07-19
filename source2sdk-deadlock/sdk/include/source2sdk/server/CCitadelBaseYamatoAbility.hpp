#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf78
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelBaseYamatoAbility : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            float m_flCachedCastTime; // 0xf70            
            bool m_bIsShadowFormCast; // 0xf74            
            uint8_t _pad0f75[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseYamatoAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBaseYamatoAbility) == 0xf78);
    };
};
