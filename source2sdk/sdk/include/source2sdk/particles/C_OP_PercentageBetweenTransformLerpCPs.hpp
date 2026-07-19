#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/ParticleSetMethod_t.hpp"

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
        // Size: 0x2d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PercentageBetweenTransformLerpCPs : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            // metadata: MPropertyFriendlyName "percentage minimum"
            float m_flInputMin; // 0x1dc            
            // metadata: MPropertyFriendlyName "percentage maximum"
            float m_flInputMax; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "strarting transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformStart; // 0x1e8            
            // metadata: MPropertyFriendlyName "end transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformEnd; // 0x250            
            // metadata: MPropertyFriendlyName "output starting control point number"
            std::int32_t m_nOutputStartCP; // 0x2b8            
            // metadata: MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
            std::int32_t m_nOutputStartField; // 0x2bc            
            // metadata: MPropertyFriendlyName "output ending control point number"
            std::int32_t m_nOutputEndCP; // 0x2c0            
            // metadata: MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
            std::int32_t m_nOutputEndField; // 0x2c4            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x2c8            
            // metadata: MPropertyFriendlyName "only active within input range"
            bool m_bActiveRange; // 0x2cc            
            // metadata: MPropertyFriendlyName "treat distance between points as radius"
            bool m_bRadialCheck; // 0x2cd            
            uint8_t _pad02ce[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PercentageBetweenTransformLerpCPs because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PercentageBetweenTransformLerpCPs) == 0x2d0);
    };
};
