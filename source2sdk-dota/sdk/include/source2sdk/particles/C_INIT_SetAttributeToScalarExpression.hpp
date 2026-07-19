#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ScalarExpressionType_t.hpp"
#include "source2sdk/particleslib/CParticleRemapFloatInput.hpp"
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
        // Size: 0x660
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_SetAttributeToScalarExpression : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "expression"
            source2sdk::particles::ScalarExpressionType_t m_nExpression; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "input 1"
            source2sdk::particleslib::CPerParticleFloatInput m_flInput1; // 0x1e8            
            // metadata: MPropertyFriendlyName "input 2"
            source2sdk::particleslib::CPerParticleFloatInput m_flInput2; // 0x358            
            // metadata: MPropertyFriendlyName "output"
            source2sdk::particleslib::CParticleRemapFloatInput m_flOutputRemap; // 0x4c8            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nOutputField; // 0x638            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x63c            
            uint8_t _pad0640[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SetAttributeToScalarExpression because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SetAttributeToScalarExpression) == 0x660);
    };
};
