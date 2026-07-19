#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x810
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateSpiralSphere : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input position transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1e0            
            // metadata: MPropertyFriendlyName "density"
            source2sdk::particleslib::CPerParticleFloatInput m_flDensity; // 0x248            
            // metadata: MPropertyFriendlyName "initial radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialRadius; // 0x3b8            
            // metadata: MPropertyFriendlyName "min initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMin; // 0x528            
            // metadata: MPropertyFriendlyName "max initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMax; // 0x698            
            // metadata: MPropertyFriendlyName "use particle count as density scale"
            bool m_bUseParticleCount; // 0x808            
            uint8_t _pad0809[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateSpiralSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateSpiralSphere) == 0x810);
    };
};
