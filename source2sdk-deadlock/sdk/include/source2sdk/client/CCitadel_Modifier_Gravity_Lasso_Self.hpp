#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Gravity_Lasso_Self : public source2sdk::client::CCitadelModifier
        {
        public:
            bool m_bHasUsedBouncePad; // 0xc0            
            uint8_t _pad00c1[0x7]; // 0xc1
            // m_vCastTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vCastTargets;
            char m_vCastTargets[0x18]; // 0xc8            
            uint8_t _pad00e0[0x400];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Gravity_Lasso_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Gravity_Lasso_Self) == 0x4e0);
    };
};
