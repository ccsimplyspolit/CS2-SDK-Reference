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
        // Size: 0x1870
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flBlastedCurrentDuration"
        #pragma pack(push, 1)
        class CCitadel_Ability_PunkGoat_Blasted : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bHUDElementVisible; // 0x11d8            
            uint8_t _pad11d9[0x13]; // 0x11d9
            // metadata: MNetworkEnable
            float m_flBlastedCurrentDuration; // 0x11ec            
            uint8_t _pad11f0[0x680];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PunkGoat_Blasted because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PunkGoat_Blasted) == 0x1870);
    };
};
