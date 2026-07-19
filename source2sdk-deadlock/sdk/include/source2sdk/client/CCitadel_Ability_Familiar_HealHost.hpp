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
        // Size: 0x11e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flOverrideCooldown"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_HealHost : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            float m_flOverrideCooldown; // 0x11d8            
            uint8_t _pad11dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_HealHost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Familiar_HealHost) == 0x11e0);
    };
};
