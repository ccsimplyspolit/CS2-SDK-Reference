#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CProjectile_Airheart_Package;
    };
};

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
        // Size: 0x1088
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_Ult : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecPackages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CProjectile_Airheart_Package>> m_vecPackages;
            char m_vecPackages[0x18]; // 0xf70            
            uint8_t _pad0f88[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_Ult because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_Ult) == 0x1088);
    };
};
