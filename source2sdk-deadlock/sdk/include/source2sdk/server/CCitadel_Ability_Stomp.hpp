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
        // Size: 0x14a0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Stomp : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vStompPos; // 0xf70            
            Vector m_vStompDir; // 0xf7c            
            // m_vecStompedEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecStompedEnemies;
            char m_vecStompedEnemies[0x18]; // 0xf88            
            uint8_t _pad0fa0[0x500];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Stomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Stomp) == 0x14a0);
    };
};
