#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x90
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelProjectileTrackingParams
        {
        public:
            // metadata: MPropertyDescription "Instead of getting stuck on the world, just pass through it."
            bool m_bDisableSolidCollisions; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription "Determinines the amount of trackin to do, over time. 0 tracking means continue in a straight line. 1.0 tracking means the velocity will be fully turned towards the target."
            CPiecewiseCurve m_TrackingAmountCurve; // 0x8            
            // metadata: MPropertyDescription "Projectile Speed over time."
            CPiecewiseCurve m_ProjectileSpeedCurve; // 0x48            
            // metadata: MPropertyDescription "Projectile won't impact targets until this much time has elapsed."
            float m_flMinTrackingTimeBeforeImpact; // 0x88            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCitadelProjectileTrackingParams, m_bDisableSolidCollisions) == 0x0);
        static_assert(offsetof(source2sdk::client::CCitadelProjectileTrackingParams, m_TrackingAmountCurve) == 0x8);
        static_assert(offsetof(source2sdk::client::CCitadelProjectileTrackingParams, m_ProjectileSpeedCurve) == 0x48);
        static_assert(offsetof(source2sdk::client::CCitadelProjectileTrackingParams, m_flMinTrackingTimeBeforeImpact) == 0x88);
        
        static_assert(sizeof(source2sdk::client::CCitadelProjectileTrackingParams) == 0x90);
    };
};
