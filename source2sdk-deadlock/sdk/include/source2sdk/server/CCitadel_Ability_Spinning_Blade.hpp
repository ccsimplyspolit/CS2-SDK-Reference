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
        // Size: 0x1390
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Spinning_Blade : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x400]; // 0xf70
            // m_vecOutgoingHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecOutgoingHits;
            char m_vecOutgoingHits[0x18]; // 0x1370            
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelProjectile> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0x1388            
            uint8_t _pad138c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Spinning_Blade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Spinning_Blade) == 0x1390);
    };
};
