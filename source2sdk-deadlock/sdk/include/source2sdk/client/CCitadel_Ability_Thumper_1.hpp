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
        // Size: 0x1578
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Thumper_1 : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vecAimPos; // 0x11d8            
            Vector m_vecAimNormal; // 0x11e4            
            float m_flPushForce; // 0x11f0            
            uint8_t _pad11f4[0x384];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Thumper_1 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Thumper_1) == 0x1578);
    };
};
