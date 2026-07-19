#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
        // Size: 0xb68
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            // metadata: MNotSaved
            std::int32_t flags; // 0xac0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t die; // 0xac4            
            // metadata: MNotSaved
            float m_flFrameMax; // 0xac8            
            // metadata: MNotSaved
            float x; // 0xacc            
            // metadata: MNotSaved
            float y; // 0xad0            
            // metadata: MNotSaved
            float fadeSpeed; // 0xad4            
            // metadata: MNotSaved
            float bounceFactor; // 0xad8            
            // metadata: MNotSaved
            std::int32_t hitSound; // 0xadc            
            // metadata: MNotSaved
            std::int32_t priority; // 0xae0            
            // metadata: MNotSaved
            Vector tentOffset; // 0xae4            
            // metadata: MNotSaved
            QAngle m_vecTempEntAngVelocity; // 0xaf0            
            // metadata: MNotSaved
            std::int32_t tempent_renderamt; // 0xafc            
            // metadata: MNotSaved
            Vector m_vecNormal; // 0xb00            
            // metadata: MNotSaved
            float m_flSpriteScale; // 0xb0c            
            // metadata: MNotSaved
            std::int32_t m_nFlickerFrame; // 0xb10            
            // metadata: MNotSaved
            float m_flFrameRate; // 0xb14            
            // metadata: MNotSaved
            float m_flFrame; // 0xb18            
            uint8_t _pad0b1c[0x4]; // 0xb1c
            // metadata: MNotSaved
            char* m_pszImpactEffect; // 0xb20            
            // metadata: MNotSaved
            char* m_pszParticleEffect; // 0xb28            
            // metadata: MNotSaved
            bool m_bParticleCollision; // 0xb30            
            uint8_t _pad0b31[0x3]; // 0xb31
            // metadata: MNotSaved
            std::int32_t m_iLastCollisionFrame; // 0xb34            
            // metadata: MNotSaved
            VectorWS m_vLastCollisionOrigin; // 0xb38            
            // metadata: MNotSaved
            Vector m_vecTempEntVelocity; // 0xb44            
            // metadata: MNotSaved
            VectorWS m_vecPrevAbsOrigin; // 0xb50            
            // metadata: MNotSaved
            Vector m_vecTempEntAcceleration; // 0xb5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xb68);
    };
};
