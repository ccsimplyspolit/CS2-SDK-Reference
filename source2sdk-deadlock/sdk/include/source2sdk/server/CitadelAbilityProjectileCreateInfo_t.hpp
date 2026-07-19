#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x60
        #pragma pack(push, 1)
        struct CitadelAbilityProjectileCreateInfo_t
        {
        public:
            VectorWS m_vecCreatePosition; // 0x0            
            QAngle m_angAngles; // 0xc            
            Vector m_vecVelocity; // 0x18            
            float m_flGravity; // 0x24            
            float m_flLifeTime; // 0x28            
            bool m_bWantsInitialVelocity; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            float m_flChargeAmount; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            CUtlString m_sOverrideClassName; // 0x38            
            bool m_bShouldHitThrower; // 0x40            
            bool m_bLagCompensatePosition; // 0x41            
            uint8_t _pad0042[0x2]; // 0x42
            float m_flHitThrowerDelay; // 0x44            
            CUtlString m_sModelOverrideName; // 0x48            
            CUtlString m_sTrailParticleOverrideName; // 0x50            
            uint8_t _pad0058[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_vecCreatePosition) == 0x0);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_angAngles) == 0xc);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_vecVelocity) == 0x18);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flGravity) == 0x24);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flLifeTime) == 0x28);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bWantsInitialVelocity) == 0x2c);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flChargeAmount) == 0x30);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_sOverrideClassName) == 0x38);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bShouldHitThrower) == 0x40);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_bLagCompensatePosition) == 0x41);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_flHitThrowerDelay) == 0x44);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_sModelOverrideName) == 0x48);
        static_assert(offsetof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t, m_sTrailParticleOverrideName) == 0x50);
        
        static_assert(sizeof(source2sdk::server::CitadelAbilityProjectileCreateInfo_t) == 0x60);
    };
};
