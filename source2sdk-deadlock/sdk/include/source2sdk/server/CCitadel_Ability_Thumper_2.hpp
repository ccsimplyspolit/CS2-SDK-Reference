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
        // Size: 0x1110
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Thumper_2 : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vStompPos; // 0xf70            
            Vector m_vStompDir; // 0xf7c            
            std::int32_t m_nStomps; // 0xf88            
            uint8_t _pad0f8c[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Thumper_2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Thumper_2) == 0x1110);
    };
};
