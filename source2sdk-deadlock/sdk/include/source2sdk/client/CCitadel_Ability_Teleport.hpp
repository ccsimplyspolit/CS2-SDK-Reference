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
        // Size: 0x1200
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Teleport : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bTeleportingToTarget; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            Vector m_vTargetPosition; // 0x11dc            
            QAngle m_vTargetAngles; // 0x11e8            
            uint8_t _pad11f4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Teleport) == 0x1200);
    };
};
