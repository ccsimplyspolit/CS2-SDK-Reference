#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModifier.hpp"

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
        // Size: 0xd0
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CCitadelModifier : public source2sdk::server::CBaseModifier
        {
        public:
            uint8_t _pad0098[0x18]; // 0x98
            float m_flEffectiveness; // 0xb0            
            uint8_t _pad00b4[0x1c];
            
            // Datamap fields:
            // void m_pVecAbilityValues; // 0xa8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelModifier because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelModifier) == 0xd0);
    };
};
