#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1290
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Wrecker_BoulderGrenade : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_hHitTroopers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitTroopers;
            char m_hHitTroopers[0x18]; // 0xf70            
            uint8_t _pad0f88[0x4]; // 0xf88
            source2sdk::client::ParticleIndex_t m_nBallParticle; // 0xf8c            
            uint8_t _pad0f90[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_BoulderGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Wrecker_BoulderGrenade) == 0x1290);
    };
};
