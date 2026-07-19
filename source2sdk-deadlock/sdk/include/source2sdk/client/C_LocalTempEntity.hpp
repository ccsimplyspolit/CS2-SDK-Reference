#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Standard-layout class: false
        // Size: 0xd50
        // Has VTable
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            std::int32_t flags; // 0xca8            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t die; // 0xcac            
            // metadata: MNotSaved
            float m_flFrameMax; // 0xcb0            
            // metadata: MNotSaved
            float x; // 0xcb4            
            // metadata: MNotSaved
            float y; // 0xcb8            
            // metadata: MNotSaved
            float fadeSpeed; // 0xcbc            
            // metadata: MNotSaved
            float bounceFactor; // 0xcc0            
            // metadata: MNotSaved
            std::int32_t hitSound; // 0xcc4            
            // metadata: MNotSaved
            std::int32_t priority; // 0xcc8            
            // metadata: MNotSaved
            Vector tentOffset; // 0xccc            
            // metadata: MNotSaved
            QAngle m_vecTempEntAngVelocity; // 0xcd8            
            // metadata: MNotSaved
            std::int32_t tempent_renderamt; // 0xce4            
            // metadata: MNotSaved
            Vector m_vecNormal; // 0xce8            
            // metadata: MNotSaved
            float m_flSpriteScale; // 0xcf4            
            // metadata: MNotSaved
            std::int32_t m_nFlickerFrame; // 0xcf8            
            // metadata: MNotSaved
            float m_flFrameRate; // 0xcfc            
            // metadata: MNotSaved
            float m_flFrame; // 0xd00            
            uint8_t _pad0d04[0x4]; // 0xd04
            // metadata: MNotSaved
            char* m_pszImpactEffect; // 0xd08            
            // metadata: MNotSaved
            char* m_pszParticleEffect; // 0xd10            
            // metadata: MNotSaved
            bool m_bParticleCollision; // 0xd18            
            uint8_t _pad0d19[0x3]; // 0xd19
            // metadata: MNotSaved
            std::int32_t m_iLastCollisionFrame; // 0xd1c            
            // metadata: MNotSaved
            Vector m_vLastCollisionOrigin; // 0xd20            
            // metadata: MNotSaved
            Vector m_vecTempEntVelocity; // 0xd2c            
            // metadata: MNotSaved
            Vector m_vecPrevAbsOrigin; // 0xd38            
            // metadata: MNotSaved
            Vector m_vecTempEntAcceleration; // 0xd44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xd50);
    };
};
