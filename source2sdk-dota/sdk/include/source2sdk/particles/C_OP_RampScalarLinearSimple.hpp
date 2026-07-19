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
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RampScalarLinearSimple : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "ramp rate"
            float m_Rate; // 0x1d8            
            // metadata: MPropertyFriendlyName "start time"
            float m_flStartTime; // 0x1dc            
            // metadata: MPropertyFriendlyName "end time"
            float m_flEndTime; // 0x1e0            
            uint8_t _pad01e4[0x2c]; // 0x1e4
            // metadata: MPropertyFriendlyName "ramp field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nField; // 0x210            
            uint8_t _pad0214[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RampScalarLinearSimple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RampScalarLinearSimple) == 0x220);
    };
};
