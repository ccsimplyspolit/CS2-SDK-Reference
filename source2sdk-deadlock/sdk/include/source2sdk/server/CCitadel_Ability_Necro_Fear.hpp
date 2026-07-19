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
        // Size: 0x1590
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flTotalBuildup"
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_Fear : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x18]; // 0xf70
            // metadata: MNetworkEnable
            float m_flTotalBuildup; // 0xf88            
            uint8_t _pad0f8c[0x604];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_Fear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_Fear) == 0x1590);
    };
};
