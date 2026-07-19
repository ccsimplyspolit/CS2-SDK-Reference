#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x2d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Werewolf_Kickflip_SucessSelf : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x200]; // 0xc0
            Vector m_vecInitialVelocity; // 0x2c0            
            Vector m_vecKickOffVelocity; // 0x2cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Werewolf_Kickflip_SucessSelf because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Werewolf_Kickflip_SucessSelf) == 0x2d8);
    };
};
