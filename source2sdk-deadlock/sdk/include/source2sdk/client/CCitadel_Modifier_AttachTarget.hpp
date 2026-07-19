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
        // Size: 0xd0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_AttachTarget : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0xc0            
            Vector m_vecOffset; // 0xc4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_AttachTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_AttachTarget) == 0xd0);
    };
};
