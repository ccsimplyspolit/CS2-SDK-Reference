#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCitadel_Ability_Spinning_Blade;
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
        // Size: 0x1090
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Dust_Storm : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hSpinningBladeAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_Ability_Spinning_Blade> m_hSpinningBladeAbility;
            char m_hSpinningBladeAbility[0x4]; // 0xf70            
            uint8_t _pad0f74[0x4]; // 0xf74
            // m_vTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vTargets;
            char m_vTargets[0x18]; // 0xf78            
            uint8_t _pad0f90[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Dust_Storm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Dust_Storm) == 0x1090);
    };
};
