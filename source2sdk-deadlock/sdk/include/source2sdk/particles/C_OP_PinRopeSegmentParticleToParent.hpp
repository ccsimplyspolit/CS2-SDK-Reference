#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        // Size: 0x4c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PinRopeSegmentParticleToParent : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "particle to use"
            source2sdk::particles::ParticleSelection_t m_nParticleSelection; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "particle number/offset"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticleNumber; // 0x1e0            
            // metadata: MPropertyFriendlyName "Interpolation"
            source2sdk::particleslib::CPerParticleFloatInput m_flInterpolation; // 0x350            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PinRopeSegmentParticleToParent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PinRopeSegmentParticleToParent) == 0x4c0);
    };
};
