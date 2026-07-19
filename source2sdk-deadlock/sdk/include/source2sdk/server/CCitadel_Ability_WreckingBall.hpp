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
        // Size: 0x11b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHoldingBall"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckingBall : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x14]; // 0xf70
            source2sdk::client::ParticleIndex_t m_nBallParticle; // 0xf84            
            source2sdk::client::ParticleIndex_t m_nCastCompleteParticle; // 0xf88            
            uint8_t _pad0f8c[0x4]; // 0xf8c
            // m_vecTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecTargetsHit;
            char m_vecTargetsHit[0x18]; // 0xf90            
            uint8_t _pad0fa8[0x200]; // 0xfa8
            // metadata: MNetworkEnable
            bool m_bHoldingBall; // 0x11a8            
            uint8_t _pad11a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_WreckingBall) == 0x11b0);
    };
};
