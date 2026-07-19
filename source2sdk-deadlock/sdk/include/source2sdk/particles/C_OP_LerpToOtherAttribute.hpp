#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x380
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LerpToOtherAttribute : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1d8            
            // metadata: MPropertyFriendlyName "input attribute from"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInputFrom; // 0x348            
            // metadata: MPropertyFriendlyName "input attribute to"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x34c            
            // metadata: MPropertyFriendlyName "output attribute"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x350            
            uint8_t _pad0354[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LerpToOtherAttribute because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LerpToOtherAttribute) == 0x380);
    };
};
