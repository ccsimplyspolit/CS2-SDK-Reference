#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        // Size: 0x4d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetPerChildControlPoint : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "group ID to affect"
            std::int32_t m_nChildGroupID; // 0x1d8            
            // metadata: MPropertyFriendlyName "control point to set"
            std::int32_t m_nFirstControlPoint; // 0x1dc            
            // metadata: MPropertyFriendlyName "# of children to set"
            std::int32_t m_nNumControlPoints; // 0x1e0            
            uint8_t _pad01e4[0x4]; // 0x1e4
            // metadata: MPropertyFriendlyName "particle increment amount"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nParticleIncrement; // 0x1e8            
            // metadata: MPropertyFriendlyName "first particle to copy"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x358            
            // metadata: MPropertyFriendlyName "set orientation from velocity"
            bool m_bSetOrientation; // 0x4c8            
            uint8_t _pad04c9[0x3]; // 0x4c9
            // metadata: MPropertyFriendlyName "orientation vector"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nOrientationField; // 0x4cc            
            // metadata: MPropertyFriendlyName "set number of children based on particle count"
            bool m_bNumBasedOnParticleCount; // 0x4d0            
            uint8_t _pad04d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetPerChildControlPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetPerChildControlPoint) == 0x4d8);
    };
};
