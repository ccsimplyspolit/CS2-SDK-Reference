#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x788
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_DazzlingOrbWatcher : public source2sdk::server::CCitadelModifier
        {
        public:
            source2sdk::client::ShotID_t m_nAssociatedShotID; // 0xd0            
            // m_hAssociatedProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssociatedProjectile;
            char m_hAssociatedProjectile[0x4]; // 0xd4            
            source2sdk::entity2::GameTime_t m_flLastHitTime; // 0xd8            
            // m_hLastHitTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastHitTarget;
            char m_hLastHitTarget[0x4]; // 0xdc            
            Vector m_vLastHitLocation; // 0xe0            
            std::int32_t m_nBouncesRemaining; // 0xec            
            source2sdk::entity2::GameTime_t m_flLingerEndTime; // 0xf0            
            float m_flDamageAtCast; // 0xf4            
            float m_flSlowDurationAtCast; // 0xf8            
            float m_flBounceRadiusAtCast; // 0xfc            
            source2sdk::client::ParticleIndex_t m_nGraceParticleIndex; // 0x100            
            uint8_t _pad0104[0x684];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_DazzlingOrbWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_DazzlingOrbWatcher) == 0x788);
    };
};
