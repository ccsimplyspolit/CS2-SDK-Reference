#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ELassoHoldPosition.hpp"
#include "source2sdk/server/CCitadel_Modifier_Link.hpp"

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
        // Size: 0x5f8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Gravity_Lasso_Enemy : public source2sdk::server::CCitadel_Modifier_Link
        {
        public:
            source2sdk::client::ELassoHoldPosition m_eHoldPosition; // 0xf0            
            uint8_t _pad00f1[0x507];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Gravity_Lasso_Enemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Gravity_Lasso_Enemy) == 0x5f8);
    };
};
