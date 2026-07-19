#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x1348
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Airheart_PrimaryWeapon : public source2sdk::server::CCitadel_Ability_PrimaryWeapon
        {
        public:
            // m_vecStuckTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecStuckTargets;
            char m_vecStuckTargets[0x18]; // 0x1198            
            // m_vecBombsInWorld has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecBombsInWorld;
            char m_vecBombsInWorld[0x18]; // 0x11b0            
            uint8_t _pad11c8[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Airheart_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Airheart_PrimaryWeapon) == 0x1348);
    };
};
