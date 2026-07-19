#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_Burning.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Afterburn_DOT : public source2sdk::server::CCitadel_Modifier_Burning
        {
        public:
            bool m_bCheckForExplosion; // 0xd0            
            uint8_t _pad00d1[0x3]; // 0xd1
            source2sdk::entity2::GameTime_t m_flLastBurnTime; // 0xd4            
            uint8_t _pad00d8[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Afterburn_DOT because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Afterburn_DOT) == 0x2d8);
    };
};
