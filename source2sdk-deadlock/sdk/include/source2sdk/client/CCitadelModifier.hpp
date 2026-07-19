#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"

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
        // Size: 0xc0
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelModifier : public source2sdk::client::CBaseModifier
        {
        public:
            uint8_t _pad0090[0x10]; // 0x90
            float m_flEffectiveness; // 0xa0            
            uint8_t _pad00a4[0x1c];
            
            // Datamap fields:
            // void m_pVecAbilityValues; // 0x98
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelModifier) == 0xc0);
    };
};
