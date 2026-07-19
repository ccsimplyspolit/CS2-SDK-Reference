#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0x210
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RemapParticleCountToScalar : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1e0            
            // metadata: MPropertyFriendlyName "input minimum"
            std::int32_t m_nInputMin; // 0x1e4            
            // metadata: MPropertyFriendlyName "input maximum"
            std::int32_t m_nInputMax; // 0x1e8            
            // metadata: MPropertyFriendlyName "input scale control point"
            std::int32_t m_nScaleControlPoint; // 0x1ec            
            // metadata: MPropertyFriendlyName "input scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nScaleControlPointField; // 0x1f0            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x1f4            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x1f8            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x1fc            
            // metadata: MPropertyFriendlyName "only active within specified input range"
            bool m_bActiveRange; // 0x200            
            // metadata: MPropertyFriendlyName "invert input from total particle count"
            bool m_bInvert; // 0x201            
            // metadata: MPropertyFriendlyName "wrap input"
            bool m_bWrap; // 0x202            
            uint8_t _pad0203[0x1]; // 0x203
            // metadata: MPropertyFriendlyName "remap bias"
            float m_flRemapBias; // 0x204            
            uint8_t _pad0208[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapParticleCountToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapParticleCountToScalar) == 0x210);
    };
};
