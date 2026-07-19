#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x878
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CylindricalDistanceToTransform : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "cylinder inner radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "cylinder outer radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMax; // 0x350            
            // metadata: MPropertyFriendlyName "cylinder inner output"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMin; // 0x4c0            
            // metadata: MPropertyFriendlyName "cylinder outer output"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMax; // 0x630            
            // metadata: MPropertyFriendlyName "cylindrical top transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x7a0            
            // metadata: MPropertyFriendlyName "cylindrical bottom transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformEnd; // 0x808            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x870            
            // metadata: MPropertyFriendlyName "only active within specified distance"
            bool m_bActiveRange; // 0x874            
            // metadata: MPropertyFriendlyName "output is additive"
            bool m_bAdditive; // 0x875            
            // metadata: MPropertyFriendlyName "apply radius to ends (capsule)"
            bool m_bCapsule; // 0x876            
            uint8_t _pad0877[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CylindricalDistanceToTransform because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CylindricalDistanceToTransform) == 0x878);
    };
};
