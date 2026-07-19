#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
        // Size: 0x1f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapParticleCountOnScalarEndCap : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8            
            // metadata: MPropertyFriendlyName "input minimum"
            std::int32_t m_nInputMin; // 0x1dc            
            // metadata: MPropertyFriendlyName "input maximum"
            std::int32_t m_nInputMax; // 0x1e0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1e4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1e8            
            // metadata: MPropertyFriendlyName "count back from last particle"
            bool m_bBackwards; // 0x1ec            
            uint8_t _pad01ed[0x3]; // 0x1ed
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapParticleCountOnScalarEndCap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapParticleCountOnScalarEndCap) == 0x1f8);
    };
};
