#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        // Size: 0x7a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapParticleCountToScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "input minimum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nInputMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "input maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nInputMax; // 0x350            
            // metadata: MPropertyFriendlyName "output minimum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x4c0            
            // metadata: MPropertyFriendlyName "output maximum"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x630            
            // metadata: MPropertyFriendlyName
            bool m_bActiveRange; // 0x7a0            
            uint8_t _pad07a1[0x3]; // 0x7a1
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x7a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapParticleCountToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapParticleCountToScalar) == 0x7a8);
    };
};
