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
        // Size: 0x1668
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLookTarget"
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Hotel : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bSpendCooldown; // 0x11d8            
            uint8_t _pad11d9[0x3]; // 0x11d9
            // metadata: MNetworkEnable
            Vector m_vLookTarget; // 0x11dc            
            uint8_t _pad11e8[0x480];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Hotel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Hotel) == 0x1668);
    };
};
