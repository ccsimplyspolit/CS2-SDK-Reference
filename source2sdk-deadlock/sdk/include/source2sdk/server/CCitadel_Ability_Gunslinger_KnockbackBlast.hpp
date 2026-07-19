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
        // Size: 0x1318
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Gunslinger_KnockbackBlast : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vecKnockbackDirection; // 0xf70            
            uint8_t _pad0f7c[0x4]; // 0xf7c
            // m_vecKnockbackedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecKnockbackedUnits;
            char m_vecKnockbackedUnits[0x18]; // 0xf80            
            uint8_t _pad0f98[0x380];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_KnockbackBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Gunslinger_KnockbackBlast) == 0x1318);
    };
};
