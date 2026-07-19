#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETrackedProjectileTarget_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
        // Size: 0x890
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelTrackedProjectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            source2sdk::client::ETrackedProjectileTarget_t m_eTrackedTargetType; // 0x860            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x864            
            source2sdk::entity2::GameTime_t m_flTrackingStartTime; // 0x868            
            float m_flTrackingDampingCoefficient; // 0x86c            
            float m_flTrackingSpeed; // 0x870            
            float m_flTrackingDuration; // 0x874            
            source2sdk::entity2::GameTime_t m_flTrackingWindowStart; // 0x878            
            source2sdk::entity2::GameTime_t m_flTrackingWindowEnd; // 0x87c            
            Vector m_vLastValidPosition; // 0x880            
            uint8_t _pad088c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTrackedProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTrackedProjectile) == 0x890);
    };
};
