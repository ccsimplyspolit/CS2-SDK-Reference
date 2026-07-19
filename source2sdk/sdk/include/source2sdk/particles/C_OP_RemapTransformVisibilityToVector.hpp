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
        // Size: 0x270
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapTransformVisibilityToVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1e0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x248            
            // metadata: MPropertyFriendlyName "CP visibility minimum"
            float m_flInputMin; // 0x24c            
            // metadata: MPropertyFriendlyName "CP visibility maximum"
            float m_flInputMax; // 0x250            
            // metadata: MPropertyFriendlyName "output minimum"
            Vector m_vecOutputMin; // 0x254            
            // metadata: MPropertyFriendlyName "output maximum"
            Vector m_vecOutputMax; // 0x260            
            // metadata: MPropertyFriendlyName "visibility radius"
            float m_flRadius; // 0x26c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapTransformVisibilityToVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapTransformVisibilityToVector) == 0x270);
    };
};
