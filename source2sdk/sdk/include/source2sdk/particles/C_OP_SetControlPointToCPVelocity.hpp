#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

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
        // Size: 0x8b0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToCPVelocity : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point input"
            std::int32_t m_nCPInput; // 0x1e0            
            // metadata: MPropertyFriendlyName "control point number to set velocity"
            std::int32_t m_nCPOutputVel; // 0x1e4            
            // metadata: MPropertyFriendlyName "normalize output"
            bool m_bNormalize; // 0x1e8            
            uint8_t _pad01e9[0x3]; // 0x1e9
            // metadata: MPropertyFriendlyName "control point number to set magnitude"
            std::int32_t m_nCPOutputMag; // 0x1ec            
            // metadata: MPropertyFriendlyName "control point field for magnitude"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPField; // 0x1f0            
            uint8_t _pad01f4[0x4]; // 0x1f4
            // metadata: MPropertyFriendlyName "comparison velocity"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x1f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToCPVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToCPVelocity) == 0x8b0);
    };
};
