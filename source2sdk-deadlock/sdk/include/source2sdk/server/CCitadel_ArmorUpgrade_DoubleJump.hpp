#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x1100
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_ArmorUpgrade_DoubleJump : public source2sdk::server::CCitadel_Item
        {
        public:
            std::int32_t m_nTickJumped; // 0xf78            
            uint8_t _pad0f7c[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_DoubleJump because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_ArmorUpgrade_DoubleJump) == 0x1100);
    };
};
