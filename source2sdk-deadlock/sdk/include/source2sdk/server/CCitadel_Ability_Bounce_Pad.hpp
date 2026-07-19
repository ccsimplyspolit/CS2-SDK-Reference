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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1228
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_angFacing"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bounce_Pad : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vForward; // 0xf70            
            bool m_bShouldDeploy; // 0xf7c            
            bool m_bAnglesSet; // 0xf7d            
            bool m_bCanCancel; // 0xf7e            
            uint8_t _pad0f7f[0x281]; // 0xf7f
            // metadata: MNetworkEnable
            QAngle m_angFacing; // 0x1200            
            uint8_t _pad120c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bounce_Pad) == 0x1228);
    };
};
