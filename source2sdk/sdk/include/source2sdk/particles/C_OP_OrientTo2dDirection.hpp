#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

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
        class C_OP_OrientTo2dDirection : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "direction input"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_vecInput; // 0x1d8            
            // metadata: MPropertyFriendlyName "rotation offset"
            float m_flRotOffset; // 0x890            
            // metadata: MPropertyFriendlyName "spin strength"
            float m_flSpinStrength; // 0x894            
            // metadata: MPropertyFriendlyName "rotation field"
            // metadata: MPropertyAttributeChoiceName "particlefield_rotation"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x898            
            uint8_t _pad089c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_OrientTo2dDirection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_OrientTo2dDirection) == 0x8a0);
    };
};
