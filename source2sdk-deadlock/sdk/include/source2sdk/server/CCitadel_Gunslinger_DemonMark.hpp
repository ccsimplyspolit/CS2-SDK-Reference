#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x1178
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Gunslinger_DemonMark : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextSearchTime; // 0xf70            
            uint8_t _pad0f74[0x204];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Gunslinger_DemonMark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Gunslinger_DemonMark) == 0x1178);
    };
};
