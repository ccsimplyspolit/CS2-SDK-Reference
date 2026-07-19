#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        // Size: 0x230
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RampScalarSpline : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "ramp rate min"
            float m_RateMin; // 0x1d8            
            // metadata: MPropertyFriendlyName "ramp rate max"
            float m_RateMax; // 0x1dc            
            // metadata: MPropertyFriendlyName "start time min"
            float m_flStartTime_min; // 0x1e0            
            // metadata: MPropertyFriendlyName "start time max"
            float m_flStartTime_max; // 0x1e4            
            // metadata: MPropertyFriendlyName "end time min"
            float m_flEndTime_min; // 0x1e8            
            // metadata: MPropertyFriendlyName "end time max"
            float m_flEndTime_max; // 0x1ec            
            // metadata: MPropertyFriendlyName "bias"
            float m_flBias; // 0x1f0            
            uint8_t _pad01f4[0x2c]; // 0x1f4
            // metadata: MPropertyFriendlyName "ramp field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nField; // 0x220            
            // metadata: MPropertyFriendlyName "start/end proportional"
            bool m_bProportionalOp; // 0x224            
            // metadata: MPropertyFriendlyName "ease out"
            bool m_bEaseOut; // 0x225            
            uint8_t _pad0226[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RampScalarSpline because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RampScalarSpline) == 0x230);
    };
};
