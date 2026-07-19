#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item_ProjectileTest.hpp"

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
        // Size: 0x1020
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest06 : public source2sdk::server::CCitadel_Item_ProjectileTest
        {
        public:
            float m_flApproachX; // 0x1010            
            float m_flApproachY; // 0x1014            
            float m_flApproachZ; // 0x1018            
            uint8_t _pad101c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest06 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_ProjectileTest06) == 0x1020);
    };
};
