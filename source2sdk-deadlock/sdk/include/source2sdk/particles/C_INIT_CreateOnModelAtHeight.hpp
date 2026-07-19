#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleHitboxBiasType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1438
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateOnModelAtHeight : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x1e0            
            // metadata: MPropertyFriendlyName "force creation height to desired height"
            bool m_bForceZ; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1e4            
            // metadata: MPropertyFriendlyName "height override control point number"
            std::int32_t m_nHeightCP; // 0x1e8            
            // metadata: MPropertyFriendlyName "desired height is relative to water"
            bool m_bUseWaterHeight; // 0x1ec            
            uint8_t _pad01ed[0x3]; // 0x1ed
            // metadata: MPropertyFriendlyName "relative desired height"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDesiredHeight; // 0x1f0            
            // metadata: MPropertyFriendlyName "model hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x360            
            // metadata: MPropertyFriendlyName "direction bias"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0xa18            
            // metadata: MPropertyFriendlyName "bias type"
            source2sdk::particles::ParticleHitboxBiasType_t m_nBiasType; // 0x10d0            
            // metadata: MPropertyFriendlyName "bias in local space"
            bool m_bLocalCoords; // 0x10d4            
            // metadata: MPropertyFriendlyName "bias prefers moving hitboxes"
            bool m_bPreferMovingBoxes; // 0x10d5            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x10d6            
            uint8_t _pad1156[0x2]; // 0x1156
            // metadata: MPropertyFriendlyName "hitbox velocity inherited scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1158            
            // metadata: MPropertyFriendlyName "max hitbox velocity"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x12c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateOnModelAtHeight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateOnModelAtHeight) == 0x1438);
    };
};
