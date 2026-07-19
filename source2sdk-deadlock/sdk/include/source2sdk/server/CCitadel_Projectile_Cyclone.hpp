#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Thumper_4;
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
        // Size: 0xae8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_Cyclone : public source2sdk::server::CCitadelProjectile
        {
        public:
            // m_CycloneAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Ability_Thumper_4> m_CycloneAbility;
            char m_CycloneAbility[0x4]; // 0x860            
            uint8_t _pad0864[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_Cyclone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_Cyclone) == 0xae8);
    };
};
