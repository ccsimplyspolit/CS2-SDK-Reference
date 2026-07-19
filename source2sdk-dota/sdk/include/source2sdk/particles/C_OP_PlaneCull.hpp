#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Size: 0x8a0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PlaneCull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point for point on plane"
            std::int32_t m_nPlaneControlPoint; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "plane normal"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecPlaneDirection; // 0x1e0            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0x898            
            uint8_t _pad0899[0x3]; // 0x899
            // metadata: MPropertyFriendlyName "cull plane offset"
            float m_flPlaneOffset; // 0x89c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PlaneCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PlaneCull) == 0x8a0);
    };
};
