#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleRotationLockType_t.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        // Size: 0xb70
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LockToBone : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "model input"
            source2sdk::particleslib::CParticleModelInput m_modelInput; // 0x1d8            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_transformInput; // 0x238            
            // metadata: MPropertyFriendlyName "lifetime fade start"
            float m_flLifeTimeFadeStart; // 0x2a0            
            // metadata: MPropertyFriendlyName "lifetime fade end"
            float m_flLifeTimeFadeEnd; // 0x2a4            
            // metadata: MPropertyFriendlyName "instant jump threshold"
            float m_flJumpThreshold; // 0x2a8            
            // metadata: MPropertyFriendlyName "previous position scale"
            float m_flPrevPosScale; // 0x2ac            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x2b0            
            // metadata: MPropertyFriendlyName "rigid lock"
            bool m_bRigid; // 0x330            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x331            
            uint8_t _pad0332[0x2]; // 0x332
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x334            
            // metadata: MPropertyFriendlyName "output field prev"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutputPrev; // 0x338            
            // metadata: MPropertyStartGroup "Set Rotations to Bones"
            // metadata: MPropertyFriendlyName "lock rotations to bone orientation"
            source2sdk::particles::ParticleRotationLockType_t m_nRotationSetType; // 0x33c            
            // metadata: MPropertyFriendlyName "rigid set rotation from bones"
            bool m_bRigidRotationLock; // 0x340            
            uint8_t _pad0341[0x7]; // 0x341
            // metadata: MPropertyFriendlyName "rigid rotation offset pitch/yaw/roll"
            source2sdk::particleslib::CPerParticleVecInput m_vecRotation; // 0x348            
            // metadata: MPropertyFriendlyName "rigid rotation interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flRotLerp; // 0xa00            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LockToBone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LockToBone) == 0xb70);
    };
};
