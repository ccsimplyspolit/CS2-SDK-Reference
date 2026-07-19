#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitFloat : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "value"
            source2sdk::particleslib::CPerParticleFloatInput m_InputValue; // 0x1e0            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nOutputField; // 0x350            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x354            
            // metadata: MPropertyFriendlyName "per-particle strength"
            source2sdk::particleslib::CPerParticleFloatInput m_InputStrength; // 0x358            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitFloat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitFloat) == 0x4c8);
    };
};
