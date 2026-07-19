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
        // Size: 0x360
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DistanceCull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nControlPoint; // 0x1d8            
            // metadata: MPropertyFriendlyName "control point offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecPointOffset; // 0x1dc            
            // metadata: MPropertyFriendlyName "cull distance"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDistance; // 0x1e8            
            // metadata: MPropertyFriendlyName "cull inside instead of outside"
            bool m_bCullInside; // 0x358            
            uint8_t _pad0359[0x3]; // 0x359
            // metadata: MPropertyFriendlyName "Attribute to Test"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttribute; // 0x35c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceCull) == 0x360);
    };
};
