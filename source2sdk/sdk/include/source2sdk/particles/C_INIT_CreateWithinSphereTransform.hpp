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
        // Size: 0x1c50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_INIT_CreateWithinSphereTransform : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "distance min"
            source2sdk::particleslib::CPerParticleFloatInput m_fRadiusMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "distance max"
            source2sdk::particleslib::CPerParticleFloatInput m_fRadiusMax; // 0x350            
            // metadata: MPropertyFriendlyName "distance bias"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecDistanceBias; // 0x4c0            
            // metadata: MPropertyFriendlyName "distance bias absolute value"
            // metadata: MVectorIsCoordinate
            Vector m_vecDistanceBiasAbs; // 0xb78            
            uint8_t _pad0b84[0x4]; // 0xb84
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0xb88            
            // metadata: MPropertyFriendlyName "speed min"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMin; // 0xbf0            
            // metadata: MPropertyFriendlyName "speed max"
            source2sdk::particleslib::CPerParticleFloatInput m_fSpeedMax; // 0xd60            
            // metadata: MPropertyFriendlyName "speed random exponent"
            float m_fSpeedRandExp; // 0xed0            
            // metadata: MPropertyFriendlyName "bias in local system"
            bool m_bLocalCoords; // 0xed4            
            uint8_t _pad0ed5[0x3]; // 0xed5
            // metadata: MPropertyFriendlyName "speed in local coordinate system min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xed8            
            // metadata: MPropertyFriendlyName "speed in local coordinate system max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1590            
            // metadata: MPropertyFriendlyName "Output vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c48            
            // metadata: MPropertyFriendlyName "Velocity vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldVelocity; // 0x1c4c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateWithinSphereTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateWithinSphereTransform) == 0x1c50);
    };
};
