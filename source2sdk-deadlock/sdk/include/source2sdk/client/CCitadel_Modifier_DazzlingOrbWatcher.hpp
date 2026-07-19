#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
        // Size: 0x778
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_DazzlingOrbWatcher : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::client::ShotID_t m_nAssociatedShotID; // 0xc0            
            // m_hAssociatedProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAssociatedProjectile;
            char m_hAssociatedProjectile[0x4]; // 0xc4            
            source2sdk::entity2::GameTime_t m_flLastHitTime; // 0xc8            
            // m_hLastHitTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastHitTarget;
            char m_hLastHitTarget[0x4]; // 0xcc            
            Vector m_vLastHitLocation; // 0xd0            
            std::int32_t m_nBouncesRemaining; // 0xdc            
            source2sdk::entity2::GameTime_t m_flLingerEndTime; // 0xe0            
            float m_flDamageAtCast; // 0xe4            
            float m_flSlowDurationAtCast; // 0xe8            
            float m_flBounceRadiusAtCast; // 0xec            
            source2sdk::client::ParticleIndex_t m_nGraceParticleIndex; // 0xf0            
            uint8_t _pad00f4[0x684];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_DazzlingOrbWatcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_DazzlingOrbWatcher) == 0x778);
    };
};
