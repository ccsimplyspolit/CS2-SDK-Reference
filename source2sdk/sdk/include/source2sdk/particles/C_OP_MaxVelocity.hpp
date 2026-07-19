#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x4b8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MaxVelocity : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "maximum velocity"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxVelocity; // 0x1d8            
            // metadata: MPropertyFriendlyName "minimum velocity"
            source2sdk::particleslib::CPerParticleFloatInput m_flMinVelocity; // 0x348            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MaxVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MaxVelocity) == 0x4b8);
    };
};
