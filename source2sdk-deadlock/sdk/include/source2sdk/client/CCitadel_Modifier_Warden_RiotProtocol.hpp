#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x400
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Warden_RiotProtocol : public source2sdk::client::CCitadelModifier
        {
        public:
            // m_mapEntToTimeHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CHandle<source2sdk::client::C_BaseEntity>,source2sdk::entity2::GameTime_t> m_mapEntToTimeHit;
            char m_mapEntToTimeHit[0x28]; // 0xc0            
            std::int32_t m_nNumPlayersAffected; // 0xe8            
            std::int32_t m_nNumPlayersKilled; // 0xec            
            QAngle m_playerAngles; // 0xf0            
            source2sdk::client::ParticleIndex_t m_ConeParticle; // 0xfc            
            uint8_t _pad0100[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Warden_RiotProtocol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Warden_RiotProtocol) == 0x400);
    };
};
