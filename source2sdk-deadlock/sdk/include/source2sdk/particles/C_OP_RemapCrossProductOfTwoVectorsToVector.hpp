#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        // Size: 0xf50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapCrossProductOfTwoVectorsToVector : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "input vector 1"
            source2sdk::particleslib::CPerParticleVecInput m_InputVec1; // 0x1d8            
            // metadata: MPropertyFriendlyName "input vector 2"
            source2sdk::particleslib::CPerParticleVecInput m_InputVec2; // 0x890            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0xf48            
            // metadata: MPropertyFriendlyName "normalize output"
            bool m_bNormalize; // 0xf4c            
            uint8_t _pad0f4d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapCrossProductOfTwoVectorsToVector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapCrossProductOfTwoVectorsToVector) == 0xf50);
    };
};
