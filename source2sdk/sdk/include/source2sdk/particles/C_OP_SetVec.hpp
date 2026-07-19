#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_OP_SetVec : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "value"
            source2sdk::particleslib::CPerParticleVecInput m_InputValue; // 0x1d8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nOutputField; // 0x890            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x894            
            // metadata: MPropertyFriendlyName "interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_Lerp; // 0x898            
            // metadata: MPropertyFriendlyName "normalize result"
            bool m_bNormalizedOutput; // 0xa08            
            uint8_t _pad0a09[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetVec because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetVec) == 0xa10);
    };
};
