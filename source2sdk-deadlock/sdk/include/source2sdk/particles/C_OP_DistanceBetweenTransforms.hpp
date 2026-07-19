#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
        // Size: 0x908
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DistanceBetweenTransforms : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "strarting transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x1e0            
            // metadata: MPropertyFriendlyName "end transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformEnd; // 0x248            
            // metadata: MPropertyFriendlyName "distance minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMin; // 0x2b0            
            // metadata: MPropertyFriendlyName "distance maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flInputMax; // 0x420            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMin; // 0x590            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CPerParticleFloatInput m_flOutputMax; // 0x700            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x870            
            // metadata: MPropertyFriendlyName "LOS Failure Scalar"
            float m_flLOSScale; // 0x874            
            // metadata: MPropertyFriendlyName "LOS collision group"
            char m_CollisionGroupName[128]; // 0x878            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x8f8            
            // metadata: MPropertyFriendlyName "ensure line of sight"
            bool m_bLOS; // 0x8fc            
            uint8_t _pad08fd[0x3]; // 0x8fd
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x900            
            uint8_t _pad0904[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceBetweenTransforms because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceBetweenTransforms) == 0x908);
    };
};
