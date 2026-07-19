#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelProjectile;
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
        // Size: 0x1378
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_ExplosiveBarrel : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hBarrel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelProjectile> m_hBarrel;
            char m_hBarrel[0x4]; // 0xf70            
            uint8_t _pad0f74[0x404];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ExplosiveBarrel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ExplosiveBarrel) == 0x1378);
    };
};
