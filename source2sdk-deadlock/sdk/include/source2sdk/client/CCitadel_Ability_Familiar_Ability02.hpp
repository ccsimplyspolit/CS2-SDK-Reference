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
        // Size: 0x1560
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCastWhileAttached"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Ability02 : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x380]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bCastWhileAttached; // 0x1558            
            uint8_t _pad1559[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Ability02 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_Ability02) == 0x1560);
    };
};
