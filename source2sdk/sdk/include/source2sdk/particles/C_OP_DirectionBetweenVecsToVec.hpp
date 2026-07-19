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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DirectionBetweenVecsToVec : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "first vector"
            source2sdk::particleslib::CPerParticleVecInput m_vecPoint1; // 0x1e0            
            // metadata: MPropertyFriendlyName "second vector"
            source2sdk::particleslib::CPerParticleVecInput m_vecPoint2; // 0x898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DirectionBetweenVecsToVec because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DirectionBetweenVecsToVec) == 0xf50);
    };
};
