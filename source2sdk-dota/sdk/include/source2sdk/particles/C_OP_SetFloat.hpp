#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/ParticleSetMethod_t.hpp"

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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_SetFloat : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "value"
            source2sdk::particleslib::CPerParticleFloatInput m_InputValue; // 0x1d8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nOutputField; // 0x348            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x34c            
            // metadata: MPropertyFriendlyName "interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_Lerp; // 0x350            
            uint8_t _pad04c0[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetFloat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetFloat) == 0x4f0);
    };
};
