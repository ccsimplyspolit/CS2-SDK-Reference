#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x2e8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Werewolf_Kickflip_SucessSelf : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00d0[0x200]; // 0xd0
            Vector m_vecInitialVelocity; // 0x2d0            
            Vector m_vecKickOffVelocity; // 0x2dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Werewolf_Kickflip_SucessSelf because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Werewolf_Kickflip_SucessSelf) == 0x2e8);
    };
};
