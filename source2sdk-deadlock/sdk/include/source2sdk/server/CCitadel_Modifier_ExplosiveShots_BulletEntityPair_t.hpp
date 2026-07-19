#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ShotID_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t
        {
        public:
            // m_hEntHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntHit;
            char m_hEntHit[0x4]; // 0x0            
            source2sdk::client::ShotID_t m_ShotHit; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t, m_hEntHit) == 0x0);
        static_assert(offsetof(source2sdk::server::CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t, m_ShotHit) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ExplosiveShots_BulletEntityPair_t) == 0x8);
    };
};
