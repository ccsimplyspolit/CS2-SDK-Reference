#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
        // Size: 0xdd0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RingWave : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "input transform"
            source2sdk::particleslib::CParticleTransformInput m_TransformInput; // 0x1e0            
            // metadata: MPropertyFriendlyName "even distribution count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x248            
            // metadata: MPropertyFriendlyName "initial radius"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialRadius; // 0x3b8            
            // metadata: MPropertyFriendlyName "thickness"
            source2sdk::particleslib::CPerParticleFloatInput m_flThickness; // 0x528            
            // metadata: MPropertyFriendlyName "min initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMin; // 0x698            
            // metadata: MPropertyFriendlyName "max initial speed"
            source2sdk::particleslib::CPerParticleFloatInput m_flInitialSpeedMax; // 0x808            
            // metadata: MPropertyFriendlyName "roll"
            source2sdk::particleslib::CPerParticleFloatInput m_flRoll; // 0x978            
            // metadata: MPropertyFriendlyName "pitch"
            source2sdk::particleslib::CPerParticleFloatInput m_flPitch; // 0xae8            
            // metadata: MPropertyFriendlyName "yaw"
            source2sdk::particleslib::CPerParticleFloatInput m_flYaw; // 0xc58            
            // metadata: MPropertyFriendlyName "even distribution"
            bool m_bEvenDistribution; // 0xdc8            
            // metadata: MPropertyFriendlyName "XY velocity only"
            bool m_bXYVelocityOnly; // 0xdc9            
            uint8_t _pad0dca[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RingWave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RingWave) == 0xdd0);
    };
};
