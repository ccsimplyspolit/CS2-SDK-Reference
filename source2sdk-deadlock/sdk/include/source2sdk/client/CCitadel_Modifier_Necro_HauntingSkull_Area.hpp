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
        // Size: 0x3e0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Necro_HauntingSkull_Area : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x8]; // 0xc0
            // m_vecDeployedSkulls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecDeployedSkulls;
            char m_vecDeployedSkulls[0x18]; // 0xc8            
            uint8_t _pad00e0[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Necro_HauntingSkull_Area because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Necro_HauntingSkull_Area) == 0x3e0);
    };
};
