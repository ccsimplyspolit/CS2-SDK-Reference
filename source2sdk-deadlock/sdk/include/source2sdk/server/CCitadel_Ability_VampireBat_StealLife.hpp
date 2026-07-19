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
        // Size: 0x1620
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFloating"
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_StealLife : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x4]; // 0xf70
            float m_flFloatElapsedTime; // 0xf74            
            uint8_t _pad0f78[0x420]; // 0xf78
            // metadata: MNetworkEnable
            bool m_bFloating; // 0x1398            
            uint8_t _pad1399[0x287];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_StealLife because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_VampireBat_StealLife) == 0x1620);
    };
};
