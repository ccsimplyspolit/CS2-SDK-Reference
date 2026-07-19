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
        // Size: 0x1478
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_angFacing"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bounce_Pad : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vForward; // 0x11d8            
            bool m_bShouldDeploy; // 0x11e4            
            bool m_bAnglesSet; // 0x11e5            
            bool m_bCanCancel; // 0x11e6            
            uint8_t _pad11e7[0x281]; // 0x11e7
            // metadata: MNetworkEnable
            QAngle m_angFacing; // 0x1468            
            uint8_t _pad1474[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bounce_Pad because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bounce_Pad) == 0x1478);
    };
};
