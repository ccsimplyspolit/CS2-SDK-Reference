#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        // Size: 0x16f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateWithinCapsuleTransform : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "distance min"
            source2sdk::particleslib::CPerParticleFloatInput m_fRadiusMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "distance max"
            source2sdk::particleslib::CPerParticleFloatInput m_fRadiusMax; // 0x350            
            // metadata: MPropertyFriendlyName "capsule height"
            source2sdk::particleslib::CPerParticleFloatInput m_fHeight; // 0x4c0            
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x630            
            // metadata: MPropertyFriendlyName "speed min"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x698            
            // metadata: MPropertyFriendlyName "speed max"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x808            
            // metadata: MPropertyFriendlyName "speed random exponent"
            float m_fSpeedRandExp; // 0x978            
            uint8_t _pad097c[0x4]; // 0x97c
            // metadata: MPropertyFriendlyName "speed in local coordinate system min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0x980            
            // metadata: MPropertyFriendlyName "speed in local coordinate system max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1038            
            // metadata: MPropertyFriendlyName "Output vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x16f0            
            // metadata: MPropertyFriendlyName "Velocity vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldVelocity; // 0x16f4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateWithinCapsuleTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateWithinCapsuleTransform) == 0x16f8);
    };
};
