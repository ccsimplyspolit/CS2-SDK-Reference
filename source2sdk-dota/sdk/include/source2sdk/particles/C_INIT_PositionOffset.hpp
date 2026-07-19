#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
        // Size: 0xfc8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MGPUParticleFunction
        #pragma pack(push, 1)
        class C_INIT_PositionOffset : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "offset min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_OffsetMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "offset max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CPerParticleVecInput m_OffsetMax; // 0x898            
            // metadata: MPropertyFriendlyName "transform input"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0xf50            
            // metadata: MPropertyFriendlyName "offset in local space 0/1"
            bool m_bLocalCoords; // 0xfb8            
            // metadata: MPropertyFriendlyName "offset proportional to radius 0/1"
            bool m_bProportional; // 0xfb9            
            uint8_t _pad0fba[0x2]; // 0xfba
            // metadata: MPropertyFriendlyName "Random number generator controls"
            source2sdk::particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xfbc            
            uint8_t _pad0fc4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionOffset because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionOffset) == 0xfc8);
    };
};
