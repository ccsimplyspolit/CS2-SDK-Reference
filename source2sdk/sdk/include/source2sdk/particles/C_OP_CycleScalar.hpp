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
        // Size: 0x200
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CycleScalar : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "destination scalar field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nDestField; // 0x1d8            
            // metadata: MPropertyFriendlyName "Value at start of cycle"
            float m_flStartValue; // 0x1dc            
            // metadata: MPropertyFriendlyName "Value at end of cycle"
            float m_flEndValue; // 0x1e0            
            // metadata: MPropertyFriendlyName "Cycle time"
            float m_flCycleTime; // 0x1e4            
            // metadata: MPropertyFriendlyName "Do not repeat cycle"
            bool m_bDoNotRepeatCycle; // 0x1e8            
            // metadata: MPropertyFriendlyName "Synchronize particles"
            bool m_bSynchronizeParticles; // 0x1e9            
            uint8_t _pad01ea[0x2]; // 0x1ea
            // metadata: MPropertyFriendlyName "Scale Start/End Control Point"
            std::int32_t m_nCPScale; // 0x1ec            
            // metadata: MPropertyFriendlyName "start scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPFieldMin; // 0x1f0            
            // metadata: MPropertyFriendlyName "end scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPFieldMax; // 0x1f4            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particleslib::ParticleSetMethod_t m_nSetMethod; // 0x1f8            
            uint8_t _pad01fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CycleScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CycleScalar) == 0x200);
    };
};
