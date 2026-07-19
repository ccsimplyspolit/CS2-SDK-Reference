#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x13e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Gunslinger_DemonMark : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flNextSearchTime; // 0x11d8            
            uint8_t _pad11dc[0x204];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Gunslinger_DemonMark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Gunslinger_DemonMark) == 0x13e0);
    };
};
