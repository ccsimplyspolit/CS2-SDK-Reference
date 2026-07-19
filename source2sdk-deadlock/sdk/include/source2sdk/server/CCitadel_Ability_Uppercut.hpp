#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_Melee_Base.hpp"

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
        // Size: 0x1728
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Uppercut : public source2sdk::server::CCitadel_Ability_Melee_Base
        {
        public:
            CUtlStringToken m_TypeIDStickyBombAttached; // 0x10a0            
            uint8_t _pad10a4[0x684];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Uppercut because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Uppercut) == 0x1728);
    };
};
