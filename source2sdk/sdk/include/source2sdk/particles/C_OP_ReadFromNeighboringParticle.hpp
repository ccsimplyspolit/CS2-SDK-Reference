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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4c8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ReadFromNeighboringParticle : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "read field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1d8            
            // metadata: MPropertyFriendlyName "written field"
            // metadata: MPropertyAttributeChoiceName "particlefield"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1dc            
            // metadata: MPropertyFriendlyName "particle increment amount"
            std::int32_t m_nIncrement; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "maximum distance"
            source2sdk::particleslib::CPerParticleFloatInput m_DistanceCheck; // 0x1e8            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x358            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ReadFromNeighboringParticle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ReadFromNeighboringParticle) == 0x4c8);
    };
};
